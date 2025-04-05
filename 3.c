#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_LENGTH 100

void trim(char *str) {
    int start = 0;
    while (isspace((unsigned char)str[start])) start++;

    int end = strlen(str) - 1;
    while (end >= start && isspace((unsigned char)str[end])) end--;

    int i, j = 0;
    for (i = start; i <= end; i++) {
        str[j++] = str[i];
    }
    str[j] = '\0';
}

int compare(const void *a, const void *b) {
    return strcmp(*(char **)a, *(char **)b);
}

int is_duplicate(char **words, int count, char *word) {
    for (int i = 0; i < count; i++) {
        if (strcmp(words[i], word) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    FILE *infile = fopen("input.txt", "r");
    FILE *outfile = fopen("output.txt", "w");

    if (!infile || !outfile) {
        return 1;
    }

    char line[MAX_LENGTH];
    char *words[MAX_WORDS];
    int count = 0;

    while (fgets(line, sizeof(line), infile)) {
        trim(line);
        if (strlen(line) == 0) continue;

        if (!is_duplicate(words, count, line)) {
            words[count] = malloc(strlen(line) + 1);
            strcpy(words[count], line);
            count++;
        }
    }

    qsort(words, count, sizeof(char *), compare);

    for (int i = 0; i < count; i++) {
        fprintf(outfile, "%s\n", words[i]);
        free(words[i]);
    }

    fclose(infile);
    fclose(outfile);
    return 0;
}
