#include <stdio.h>

int main() {
    int start, end, sum, temp, rem;

    printf("Enter the starting and ending range: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        temp = i;
        sum = 0;
        while (temp) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if (sum == i)
            printf("%d  ", i);
    }

    return 0;
}
