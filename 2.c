
#include <stdio.h>
#include <stdbool.h>

bool isMatch(char *s, char *p) {
    if (*p == '\0') return *s == '\0';
    
    bool firstMatch = (*s != '\0' && (*s == *p || *p == '.'));
    
    if (*(p + 1) == '*') {
        return (isMatch(s, p + 2) || (firstMatch && isMatch(s + 1, p)));
    } else {
        return firstMatch && isMatch(s + 1, p + 1);
    }
}

int main() {
    char s[21], p[21];
    scanf("%20s", s);
    scanf("%20s", p);
    printf("%d\n", isMatch(s, p));
    return 0;
}
