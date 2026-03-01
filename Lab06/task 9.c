#include <stdio.h>
int main() {
    int n, total = 0;
    printf("Enter number of boxes N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        total += i; // Box 'i' requires 'i' items
    }
    printf("Total decorative items required: %d\n", total);
    return 0;
}

