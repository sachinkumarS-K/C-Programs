#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (num) {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of digits is %d\n", sum);

    return 0;
}
