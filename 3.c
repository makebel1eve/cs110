#include <stdio.h>
#include <stdbool.h>

bool isValidTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool isRightAngled(int a, int b, int c) {
    int side1 = a * a, side2 = b * b, side3 = c * c;
    return (side1 + side2 == side3) || (side1 + side3 == side2) || (side2 + side3 == side1);
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (!isValidTriangle(a, b, c)) {
        printf("Not a valid triangle\n");
        return 0;
    }

    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
        if (isRightAngled(a, b, c)) {
            printf("Right-angled\n");
        } else {
            printf("Not right-angled\n");
        }
    } else {
        printf("Scalene\n");
        if (isRightAngled(a, b, c)) {
            printf("Right-angled\n");
        } else {
            printf("Not right-angled\n");
        }
    }

    return 0;
}
