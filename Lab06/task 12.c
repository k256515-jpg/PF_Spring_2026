#include <stdio.h>
int main() {
    int seats = 40, reserve;
    while (seats > 0) {
        printf("%d seats remaining. Reserve seat? (1=Yes, 0=Stop): ", seats);
        scanf("%d", &reserve);
        if (reserve == 0) break;
        seats--;
    }
    if (seats == 0) printf("All seats booked.\n");
    else printf("Reservations stopped. %d seats left.\n", seats);
    return 0;
}
