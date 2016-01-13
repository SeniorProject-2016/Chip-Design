#include <stdio.h>
#include <stdlib.h>


int main(void)
{

// Creating and opening file
    FILE *fp;
        fp = fopen("filter_coeffs_read.txt", "w");
    
    if (fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }
/*
Generate 1024 reference strings of 512 two part coeffs with incrementing
hex addresses starting from 0x0404 and ending at 0x07FF. 
*/
    int i;
    char name[] = "rf_filter_coeff";
    int coeffNum = -1;
    char * ab;
    int abToggle = 0;
    char pointer[] = "rdata[7:0] = ";
    int address = 0x03FF;
    for (i=0; i<1024; i++) {
        if (abToggle % 2 == 0) {
            ab = "_a";
            coeffNum = coeffNum +1;
        } else {
            ab = "_b";
        }
        address = address + 0x1;
        abToggle = abToggle + 1;
        fprintf(fp, "\t\t\t\t11'h%x:\n\t\t\t\t\t%s%s%d%s;\n", address, pointer, name, coeffNum, ab);
    }
    return 0;
}
