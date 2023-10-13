#include <stdio.h>

int main() {
    int count = 0;
    int number = 1;

    while (count < 10) {
        printf("%d\n", number);
        number += 2;  // Move to the next odd number
        count++;
    }

    return 0;
}
