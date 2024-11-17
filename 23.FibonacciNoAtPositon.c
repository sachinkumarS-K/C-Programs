#include <stdio.h>

int main() {
    int pos, a = 0, b = 1, c;

    printf("Enter the position: ");
    scanf("%d", &pos);

    for (int i = 0; i <= pos - 2; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("Fibonacci number at position %d is %d\n", pos, c);

    return 0;
}
