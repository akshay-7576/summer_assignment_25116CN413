#include <stdio.h>

int main() {
    int n, arr[100], index = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
        if(arr[i] != 0)
            arr[index++] = arr[i];

    while(index < n)
        arr[index++] = 0;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}