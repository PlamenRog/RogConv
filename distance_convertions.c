#include <stdio.h>

void ktm(char num[]) {
    double kilometers;
    sscanf(num, "%lf", &kilometers);

    double miles = kilometers * 0.621371;

    printf("%lf", miles);
}

void mtk(char num[]) {
    double miles;
    sscanf(num, "%lf", &miles);

    double kilometers = miles * 1.60934;

    printf("%lf", kilometers);
}

void mtl(char num[]) {
    double miles;

    sscanf(num, "%lf", &miles);

    double lightYears = miles / 5.879e+12;

    printf("%lf", lightYears);
}

void ltm(char num[]) {
    double lightYears;

    // Convert the input string to a double
    sscanf(num, "%lf", &lightYears);

    double miles = lightYears * 5.879e+12;

    printf("%lf", miles);
}

void ktl(char num[]) {
    double kilometers;
    // Convert the input string to a double
    sscanf(num, "%lf", &kilometers);

    double lightYears = kilometers / 9.461e+12;

    printf("%lf", lightYears);
}

void ltk(char num[]) {
    double lightYears;
    sscanf(num, "%lf", &lightYears);

    double kilometers = lightYears * 9.461e+12;

    printf("%lf", kilometers);
}

