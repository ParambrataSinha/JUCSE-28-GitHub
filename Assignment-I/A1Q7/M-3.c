// Using Terinary Operator

#include <stdio.h>

int main() {
    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    float avg = (a + b + c) / 3.0;
    printf("Average: %.2f\n", avg);

    printf("%d is %s average.\n", a, (a == avg) ? "the average number" : (a < avg) ? "below" : "above");
    printf("%d is %s average.\n", b, (b == avg) ? "the average number" : (b < avg) ? "below" : "above");
    printf("%d is %s average.\n\n", c, (c == avg) ? "the average number" : (c < avg) ? "below" : "above");

    return 0;
}
