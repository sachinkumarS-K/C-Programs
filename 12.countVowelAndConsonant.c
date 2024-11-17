#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowel = 0, cons = 0, len;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    for (len = 0; str[len] != '\0'; len++) {
        if (isalpha(str[len])) {
            if (str[len] == 'a' || str[len] == 'e' || str[len] == 'i' || str[len] == 'o' || str[len] == 'u' ||
                str[len] == 'A' || str[len] == 'E' || str[len] == 'I' || str[len] == 'O' || str[len] == 'U') {
                vowel++;
            }
            else {
                cons++;
            }
        }
    }

    printf("Vowel = %d\n", vowel);
    printf("Consonant = %d\n", cons);

    return 0;
}
