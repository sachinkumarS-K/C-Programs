#include <stdio.h>

int main() {
    int start, end, sum = 0;

    printf("Enter the starting and ending range: ");
    scanf("%d %d", &start, &end);

    start = start % 2 == 0 ? start : start + 1;

    for (int i = start; i <= end; i += 2)
        sum += i;

    printf("The sum is %d\n", sum);

    return 0;
}
