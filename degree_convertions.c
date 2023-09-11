#include <stdio.h>

void ftc(char num[]) {
    double fahrenheit;
    sscanf(num, "%lf", &fahrenheit);

    double celsius = (fahrenheit - 32) * 5 / 9;

    printf("%lf", celsius);
}

void ctf(char num[]) {
    double celsius;
    sscanf(num, "%lf", &celsius);

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;;

    printf("%lf", fahrenheit);
}

void ftk(char num[]) {
    double fehrenheit;
    sscanf(num, "%lf", &fehrenheit);

    double kelvin = (fehrenheit - 32.0) * 5.0 / 9.0 + 273.15;

    printf("%lf", kelvin);
}

void ktf(char num[]) {
    double kelvin;
    sscanf(num, "%lf", &kelvin);

    double fahrenheit = ((kelvin - 273.15) * 9.0 / 5.0) + 32.0;

    printf("%lf", fahrenheit);
}

void ctk(char num[]) {
    double celsius;
    sscanf(num, "%lf", &celsius);

    double kelvin = celsius + 273.15;

    printf("%lf\n", kelvin);
}

void ktc(char num[]) {
    double kelvin;
    sscanf(num, "%lf", &kelvin);

    double celsius = kelvin - 273.15;

    printf("%lf\n", celsius);
}
