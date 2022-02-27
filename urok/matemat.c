#include <stdio.h>

int main() {
    double x_1, y_1, x_2, y_2, a, b; 
    printf("Enter first point:");
    scanf("%lf %lf", &x_1, &y_1);
    printf("Enter second point:");
    scanf("%lf %lf", &x_2, &y_2);
    a = (y_2 - y_1) / (x_2 - x_1);
    b = y_1 - x_1 * (y_2 - y_1) / (x_2 - x_1);
    printf("y = %lfx + %lf\n", a, b);
    return 0;
}
