
#include <stdio.h>
#include <string.h>

// Function to perform Run-Length Encoding (RLE)
void getNextTerm(char prev[], char next[]) {
    int len = strlen(prev), index = 0;
    for (int i = 0; i < len; ) {
        int count = 1;
        while (i + 1 < len && prev[i] == prev[i + 1]) {
            count++;
            i++;
        }
        index += sprintf(next + index, "%d%c", count, prev[i]);
        i++;
    }
}

// Function to compute count-and-say sequence
void countAndSay(int n) {
    char prev[5000] = "1";
    char next[5000];
    
    for (int i = 1; i < n; i++) {
        getNextTerm(prev, next);
        for (int j = 0; next[j] != '\0'; j++) {
            prev[j] = next[j];
        }
        prev[strlen(next)] = '\0';
    }
    
    printf("%s\n", prev);
}

int main() {
    int n;
    scanf("%d", &n);
    countAndSay(n);
    return 0;
}
