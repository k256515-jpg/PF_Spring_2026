#include <stdio.h>
int main() {
    int choice;
    float a, b;
    do {
        printf("\n1. Addition\n2. Subtraction\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1 || choice == 2) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if (choice == 1) printf("Result: %.2f\n", a + b);
            else printf("Result: %.2f\n", a - b);
        }
    } while (choice != 3);
    return 0;
}
