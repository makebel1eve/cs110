
#include <stdio.h>
#include <string.h>

void multiply(char* num1, char* num2, char* product) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result[400] = {0};
    
    // Edge case: if any number is "0", return "0"
    if (num1[0] == '0' || num2[0] == '0') {
        product[0] = '0';
        product[1] = '\0';
        return;
    }
    
    // Perform multiplication digit by digit
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }
    
    // Convert result array to string
    int index = 0;
    int start = (result[0] == 0) ? 1 : 0;
    for (int i = start; i < len1 + len2; i++) {
        product[index++] = result[i] + '0';
    }
    product[index] = '\0';
}

int main() {
    char num1[201], num2[201], product[402];
    scanf("%200s", num1);
    scanf("%200s", num2);
    
    multiply(num1, num2, product);
    printf("%s\n", product);
    
    return 0;
}
