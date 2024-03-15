#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Enter values for a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1: %lf\nRoot 2: %lf\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Root: %lf\n", root);
    } else {
        printf("No real roots exist.\n");
    }

    return 0;
}

