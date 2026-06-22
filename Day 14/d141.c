#include <stdio.h>

int main() {
    int n, arr[100], key, found = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Not Found");

    return 0;
}