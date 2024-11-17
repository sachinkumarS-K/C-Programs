#include <stdio.h>

int main() {
    int num, sum, a = 0, b = 1;

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d %d", a, b);

    while (1) {
        sum = a + b;
        if (sum > num) {
            break;
        }
        printf(" %d", sum);
        a = b;
        b = sum;
    }

    printf("\n");

    return 0;
}
