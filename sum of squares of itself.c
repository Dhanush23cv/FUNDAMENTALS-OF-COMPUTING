#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    long int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += pow(i, i);
    }

    printf("The sum of the series is: %ld\n", sum);

    return 0;
}

