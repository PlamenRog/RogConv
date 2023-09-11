#include <stdio.h>

void otp(char num[]) {
    double ounces;
    sscanf(num, "%lf", &ounces);

    double pounds = ounces / 16.0;

    printf("%lf", pounds);
}

void pto(char num[]) {
    double pounds;
    sscanf(num, "%lf", &pounds);

    double ounces = pounds * 16.0;

    printf("%lf", ounces);
}

void ktp(char num[]) {
    double kilograms;
    sscanf(num, "%lf", &kilograms);

    double pounds = kilograms * 2.20462;

    printf("%lf", pounds);
}

void ptk(char num[]) {
    double pounds;
    sscanf(num, "%lf", &pounds);

    double kilograms = pounds / 2.20462;

    printf("%lf", kilograms);
}

void kto(char num[]) {
    double kilograms;
    sscanf(num, "%lf", &kilograms);


    double ounces = kilograms * 35.274;

    printf("%lf", ounces);
}

void otk(char num[]) {
    double ounces;
    sscanf(num, "%lf", &ounces);

    double kilograms = ounces / 35.274;

    printf("%lf", kilograms);
}

