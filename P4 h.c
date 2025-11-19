#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    do {
        sum += i;  // Add current value of i to sum
        i++;      // Increment i
    } while (i <= n);  // Continue loop until i is greater than n

    printf("Sum of first %d natural numbers is: %d
", n, sum);

    return 0;
}
