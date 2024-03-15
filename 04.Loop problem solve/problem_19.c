#include <stdio.h>
#include <math.h>

int main() {
    double x, result = 0;
    int n, sign = 1;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        double term = pow(x, i) / tgamma(i + 1); // Calculate term (x^i / i!)
        result += sign * term; // Add or subtract the term
        sign *= -1; // Change the sign for the next term
    }

    printf("sin(%lf) = %lf\n", x, result);

    return 0;
}

