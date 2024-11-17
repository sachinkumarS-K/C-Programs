#include <stdio.h>

int main() {
    char str[100];
    int isSame = 1;

    printf("Enter any string: ");
    scanf("%s", str);
    int len;
    for (len = 0; str[len] != '\0'; len++);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isSame = 0;
            break;
        }
    }

    if (isSame)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");

    return 0;
}
