#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len / 2; i++) {
        char t = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = t;
    }

    printf("The reversed string is: %s\n", str);

    return 0;
}
