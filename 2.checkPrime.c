#include <stdio.h>


int main() {
    int num;
    int isPrime = 1;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (!isPrime)
        printf("Number is not prime\n");
    else
        printf("Number is prime\n");

    return 0;
}
