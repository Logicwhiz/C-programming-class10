#include <stdio.h>

int main() {
    int count = 0;
    int number = 2; // Start with the first even number, 2

    while (count < 10) {
        printf("%d\n", number);
        number += 2; // Move to the next even number
        count++;
    }

    return 0;
}
