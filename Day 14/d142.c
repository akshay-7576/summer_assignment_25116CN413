#include <stdio.h>

int main() {
    int n, arr[100], x, count = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    for(int i = 0; i < n; i++)
        if(arr[i] == x)
            count++;

    printf("Frequency = %d", count);

    return 0;
}