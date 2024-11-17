#include <stdio.h>

int main() {
    int arr[] = {4, 6, 1, 7};
    int sum = 0, len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
        sum += arr[i];

    printf("The sum of the elements is %d\n", sum);
    return 0;
}
