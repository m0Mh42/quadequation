#include <math.h>
#include <stdio.h>

int main(){
    double a, b, c, root1, root2, delta;
    printf("Enter value for a, b, c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0){
        printf("The a variable cannot be zero.\n");
        return 1;
    }
    delta = b * b - 4 * a * c;
    if (delta > 0){
        root1 = ((-b + sqrt(delta)) / (2 * a));
        root2 = ((-b - sqrt(delta)) / (2 * a));
        printf("x1: %.2lf \nx2: %.2lf\n", root1, root2);
        return 0;
    }

    if (delta == 0){
        root1 = root2 = -b / (2 * a);
        printf("x: %.2lf\n", root1);
        return 0;
    }

    if (delta < 0){
        printf("No real root.\n");
        return 1;
    }

    return 0;
}
