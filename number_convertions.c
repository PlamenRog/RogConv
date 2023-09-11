#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void btd(char num[]) {
    int decimal = 0;
    int len = strlen(num);

    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        if (num[i] == '1') {
            decimal += (1 << j);
        } else if (num[i] != '0') {
            return;
        }
    }


    printf("%d\n", decimal);
}

void dtb(char num[]) {
    int decimalNum = atoi(num);

    if (decimalNum == 0) {
        printf("0\n");
        return;
    }

    int binaryNum[32];
    int index = 0;

    while (decimalNum > 0) {
        binaryNum[index++] = decimalNum % 2;
        decimalNum = decimalNum / 2;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binaryNum[i]);
    }
    printf("\n");
}

void htd(char num[]) {
    int decimalNumber = strtol(num, NULL, 16);

    printf("%d\n", decimalNumber);
}

void dth(char num[]) {
    int decimalNum = atoi(num);

    printf("%X\n", decimalNum);
}

void bth(char num[]) {
    int numadecimalVal = 0;
    int i = 1;
    int len = strlen(num);

    for (int j = len - 1; j >= 0; j--) {
        if (num[j] == '1') {
            numadecimalVal += i;
        }
        i *= 2;
    }

    printf("%X\n", numadecimalVal);
}

void htb(char num[]) {
    char bin[33] = "";

    /* Extract first digit and find binary of each hex digit */
    for(int i = 0; num[i] != '\0'; i++) {
        switch(num[i]) {
            case '0':
                strcat(bin, "0000");
                break;
            case '1':
                strcat(bin, "0001");
                break;
            case '2':
                strcat(bin, "0010");
                break;
            case '3':
                strcat(bin, "0011");
                break;
            case '4':
                strcat(bin, "0100");
                break;
            case '5':
                strcat(bin, "0101");
                break;
            case '6':
                strcat(bin, "0110");
                break;
            case '7':
                strcat(bin, "0111");
                break;
            case '8':
                strcat(bin, "1000");
                break;
            case '9':
                strcat(bin, "1001");
                break;
            case 'a':
            case 'A':
                strcat(bin, "1010");
                break;
            case 'b':
            case 'B':
                strcat(bin, "1011");
                break;
            case 'c':
            case 'C':
                strcat(bin, "1100");
                break;
            case 'd':
            case 'D':
                strcat(bin, "1101");
                break;
            case 'e':
            case 'E':
                strcat(bin, "1110");
                break;
            case 'f':
            case 'F':
                strcat(bin, "1111");
                break;
            default:
                printf("Invalid numadecimal input.");
        }
    }

    int c = -1;

    // finding the all leading zeroes from the given string
    // and removing it from the string
    for (int i = 0; i < strlen(bin); i++) {
        if (bin[i] != '0') {
            c = i;
            break;
        }
    }
    // printing the string again after removing the all
    // zeros
    for (int i = c; i < strlen(bin); i++) {
        printf("%c", bin[i]);
    }
}
