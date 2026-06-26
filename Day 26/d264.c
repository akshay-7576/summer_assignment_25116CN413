#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("===== Quiz Application =====\n");

    printf("\n1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter answer: ");
    scanf("%d", &ans);
    if (ans == 2)
        score++;

    printf("\n2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter answer: ");
    scanf("%d", &ans);
    if (ans == 1)
        score++;

    printf("\n3. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 13\n4. 14\n");
    printf("Enter answer: ");
    scanf("%d", &ans);
    if (ans == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}