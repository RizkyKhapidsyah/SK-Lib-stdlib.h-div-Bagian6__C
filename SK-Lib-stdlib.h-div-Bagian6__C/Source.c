#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    div_t result = div(50, 17);

    printf("div(50, 17) gives quotient = %d and remainder = %d\n", result.quot, result.rem);

    _getch();
    return 0;
}