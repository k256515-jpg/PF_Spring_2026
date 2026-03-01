#include <stdio.h>

int main() {
    float temp, total = 0;
    int count = 0;
    printf("Enter temperatures (Enter -999 to stop):\n");
    while (1) {
        printf("Reading %d: ", count + 1);
        scanf("%f", &temp);
        if (temp == -999) {
            break; 
        }
        total += temp;
        count++;
    }
    if (count > 0) {
        printf("\nAverage Temperature: %.2f\n", total / count);
    } else {
        printf("\nNo data entered.\n");
    }

    return 0;
}
