#include <stdio.h>

double sum(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double di(double x, double y);

int main() {
    double x,y;
    printf("두 수 입력");
    scanf("%lf %lf",&x,&y);
    printf("덧셈 : %.1f", sum(x,y));
    printf("\n");
    printf("뺄셈 : %.1f", sub(x,y));
    printf("\n");
    printf("곱셈 : %.1f", mul(x,y));
    printf("\n");
    printf("나눗셈 : %.1f", di(x,y));
    
}
double sum(double x, double y) {
    return x+y;
}
double sub(double x, double y) {
    return x-y;
}
double mul(double x, double y) {
    return x*y;
}
double di(double x, double y) {
    return x/y;
}