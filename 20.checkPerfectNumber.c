#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("It is a Perfect number\n");
    } else {
        printf("It is not a Perfect number\n");
    }

    return 0;
}
