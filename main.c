#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#include "degree_convertions.h"
#include "distance_convertions.h"
#include "number_convertions.h"
#include "weight_convertions.h"

#define STREQ(a, b) (strcmp (a, b) == 0)

void usage_help () {
    fprintf(stdout, "%s\n", "\n"
        "rogconv [option] [value]          convert from/to data types\n"
        "\n"
        "options:\n"
        "\n"
        "btd                               binary to decimal\n"
        "dtb                               decimal to binary\n"
        "htd                               hex to decimal\n"
        "dth                               decimal to hex\n"
        "bth                               binary to hex\n"
        "htb                               hex to binary\n"
        "\n"
        "ftc                               fahrenheit to celsius\n"
        "ctf                               celsius to fahrenheit\n"
        "ftk                               fahrenheit to kelvin\n"
        "ktf                               kelvin to fahrenheit\n"
        "ctk                               celsius to kelvin\n"
        "ktc                               kelvin to celsius\n"
        "\n"
        "otp                               ounces to pounds\n"
        "pto                               pounds to ounces\n"
        "ktp                               kilograms to pounds\n"
        "ptk                               pounds to kilograms\n"
        "kto                               kilograms to ounces\n"
        "otk                               ounces to kilograms\n"
        "\n"
        "ktm                               kilometers to miles\n"
        "mtk                               miles to kilometers\n"
        "mtl                               miles to light years\n"
        "ltm                               light years to miles\n"
        "ktl                               kilometers to light years\n"
        "ltk                               light years to kilometers\n"
        "\n"
        "flags:\n"
        "\n"
        "--help                            display help\n");
}

int main(int argc, char** argv) {
    if (STREQ(argv[1], "--help"))
        usage_help();
    else if (argc != 3) {
        printf("Wrong number of arguments");
        return 1;
    }


    // Number bases
    if (STREQ(argv[1], "btd")) {
        btd(argv[2]);
    }
    else if (STREQ(argv[1], "dtb")) {
        dtb(argv[2]);
    }
    else if (STREQ(argv[1], "htb")) {
        htb(argv[2]);
    }
    else if (STREQ(argv[1], "dth")) {
        dth(argv[2]);
    }
    else if (STREQ(argv[1], "bth")) {
        bth(argv[2]);
    }
    else if (STREQ(argv[1], "htd")) {
        htd(argv[2]);
    }

    // Degrees
    else if (STREQ(argv[1], "ftc")) {
        ftc(argv[2]);
    }
    else if (STREQ(argv[1], "ctf")) {
        ctf(argv[2]);
    }
    else if (STREQ(argv[1], "ftk")) {
        ftk(argv[2]);
    }
    else if (STREQ(argv[1], "ktf")) {
        ktf(argv[2]);
    }
    else if (STREQ(argv[1], "ctk")) {
        ctk(argv[2]);
    }
    else if (STREQ(argv[1], "ktc")) {
        ktc(argv[2]);
    }

    // Weight
    else if (STREQ(argv[1], "otp")) {
        otp(argv[2]);
    }
    else if (STREQ(argv[1], "pto")) {
        pto(argv[2]);
    }
    else if (STREQ(argv[1], "ktp")) {
        ktp(argv[2]);
    }
    else if (STREQ(argv[1], "ptk")) {
        ptk(argv[2]);
    }
    else if (STREQ(argv[1], "kto")) {
        kto(argv[2]);
    }
    else if (STREQ(argv[1], "otk")) {
        otk(argv[2]);
    }

    // Weight
    else if (STREQ(argv[1], "ktm")) {
        ktm(argv[2]);
    }
    else if (STREQ(argv[1], "mtk")) {
        mtk(argv[2]);
    }
    else if (STREQ(argv[1], "mtl")) {
        mtl(argv[2]);
    }
    else if (STREQ(argv[1], "ltm")) {
        ltm(argv[2]);
    }
    else if (STREQ(argv[1], "ktl")) {
        ktl(argv[2]);
    }
    else if (STREQ(argv[1], "ltk")) {
        ltk(argv[2]);
    }


    return 0;
}
