//comma operation in c program
#include <stdio.h>
int main() {
    int a, b, c, result;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using comma operator
    result = (a += 5, b += 10, c += 15);

    printf("After adding values using comma operator:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("Result (value of last expression): %d\n", result);

    return 0;
}
