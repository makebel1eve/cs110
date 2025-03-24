#include <stdio.h>
#include <stdlib.h>

struct Element {
    int row;
    int col;
    int value;
};

struct SparseMatrix {
    int rows;
    int cols;
    int num_nonzero;
    struct Element *elements;
};

void read_matrix(struct SparseMatrix *matrix) {
    scanf("%d %d", &(*matrix).rows, &(*matrix).cols);
    scanf("%d", &(*matrix).num_nonzero);

    (*matrix).elements = (struct Element *)malloc((*matrix).num_nonzero * sizeof(struct Element));

    for (int i = 0; i < (*matrix).num_nonzero; i++) {
        scanf("%d %d %d", &(*matrix).elements[i].row, &(*matrix).elements[i].col, &(*matrix).elements[i].value);
    }
}

struct SparseMatrix add_matrices(struct SparseMatrix *m1, struct SparseMatrix *m2) {
    struct SparseMatrix result;
    result.rows = (*m1).rows;
    result.cols = (*m1).cols;
    result.num_nonzero = 0;

    result.elements = (struct Element *)malloc(((*m1).num_nonzero + (*m2).num_nonzero) * sizeof(struct Element));

    int i = 0, j = 0, k = 0;

    while (i < (*m1).num_nonzero && j < (*m2).num_nonzero) {
        if ((*m1).elements[i].row < (*m2).elements[j].row ||
            ((*m1).elements[i].row == (*m2).elements[j].row && (*m1).elements[i].col < (*m2).elements[j].col)) {
            result.elements[k++] = (*m1).elements[i++];
        } 
        else if ((*m2).elements[j].row < (*m1).elements[i].row ||
                 ((*m2).elements[j].row == (*m1).elements[i].row && (*m2).elements[j].col < (*m1).elements[i].col)) {
            result.elements[k++] = (*m2).elements[j++];
        } 
        else {
            result.elements[k] = (*m1).elements[i];
            result.elements[k].value += (*m2).elements[j].value;
            if (result.elements[k].value != 0) {
                k++;
            }
            i++;
            j++;
        }
    }

    while (i < (*m1).num_nonzero) {
        result.elements[k++] = (*m1).elements[i++];
    }

    while (j < (*m2).num_nonzero) {
        result.elements[k++] = (*m2).elements[j++];
    }

    result.num_nonzero = k;
    return result;
}

void print_matrix(struct SparseMatrix *matrix) {
    for (int i = 0; i < (*matrix).num_nonzero; i++) {
        printf("%d %d %d\n", (*matrix).elements[i].row, (*matrix).elements[i].col, (*matrix).elements[i].value);
    }
}

int main() {
    struct SparseMatrix m1, m2, result;

    read_matrix(&m1);
    read_matrix(&m2);

    if (m1.rows != m2.rows || m1.cols != m2.cols) {
        printf("-999\n");
    } 
    else {
        result = add_matrices(&m1, &m2);

        if (result.num_nonzero == 0) {
            printf("0 0 0\n");
        } 
        else {
            print_matrix(&result);
        }

        free(result.elements);
    }

    free(m1.elements);
    free(m2.elements);

    return 0;
}
