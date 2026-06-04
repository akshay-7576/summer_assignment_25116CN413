#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, digit, count, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        count = 0;

        while (temp != 0) {
            count++;
            temp /= 10;
        }

        temp = num;
        sum = 0;

        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}