#include <stdio.h>
int main() {
    int score = 0, d = 0, p = 0, f = 0;
    while (score != -1) {
        printf("Enter score (-1 to stop): ");
        scanf("%d", &score);
        if (score == -1) break;
        if (score >= 75) d++;
        else if (score >= 50) p++;
        else f++;
    }
    printf("Distinction: %d, Pass: %d, Fail: %d\n", d, p, f);
    return 0;
}
