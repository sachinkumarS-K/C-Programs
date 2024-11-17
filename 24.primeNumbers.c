#include <stdio.h>

int main() {
    int num;
    printf("Enter the ending range: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        int count = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 0)
            printf("%d  ", i);
    }

    return 0;
}
