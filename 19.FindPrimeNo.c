#include <stdio.h>

int main() {
    int start, end, count;

    printf("Enter the starting and ending range: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        count = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 0 && i > 1)
            printf("%d  ", i);
    }

    return 0;
}
