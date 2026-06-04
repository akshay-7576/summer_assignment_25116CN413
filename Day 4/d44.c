#include <stdio.h>

int main() {
    int start, end, i, temp, rem, sum;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        temp = i;
        sum = 0;

        while (temp != 0) {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}