#include <stdio.h>
int main() {
    int guess = 0;
    while (guess != 7) {
        printf("Guess the number: ");
        scanf("%d", &guess);
        if (guess > 7) printf("Too High\n");
        else if (guess < 7) printf("Too Low\n");
    }
    printf("Correct!\n");
    return 0;
}
