#include <stdio.h>

int main() {
    int num, sum = 0, rem, temp;

    printf("Enter any number: ");
    scanf("%d", &num);

    temp = num;

    while (temp) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if (sum == num) {
        printf("The number is an Armstrong number\n");
    } else {
        printf("The number is not an Armstrong number\n");
    }

    return 0;
}
