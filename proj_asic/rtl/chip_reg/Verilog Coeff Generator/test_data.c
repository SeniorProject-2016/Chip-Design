#include <stdio.h>
#include <stdlib.h>


int main(void)
{

// Creating and opening file
    FILE *fp;
        fp = fopen("test_data.txt", "w");
    
    if (fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }
/*
Generate 1024 reference strings of 512 two part coeffs with incrementing
hex addresses starting from 0x0404 and ending at 0x07FF. 
*/
    int i,j;
    char name[] = "test_data[";
    int coeffNum = 0;
    int coeffNum1 = 256;
    int coeffNum2 = 512;
    int coeffNum3 = 768;
	char * ab;
    int address = 0x000;
    int address1 = 0x000;
    int address2 = 0x000;
    int address3 = 0x000;
	for (i=0; i<=255; i++) {    
        fprintf(fp, "\t\ttest_data[%d] = 8'h%x;\n", coeffNum, address);
        coeffNum = coeffNum +1;
        address = address + 0x001;
    }
    for (i=0; i<=255; i++) {    
        fprintf(fp, "\t\ttest_data[%d] = 8'h%x;\n", coeffNum1, address1);
        coeffNum1 = coeffNum1 +1;
    	address1 = address1 + 0x001;
	}
	for (i=0; i<=255; i++) {    
        fprintf(fp, "\t\ttest_data[%d] = 8'h%x;\n", coeffNum2, address2);
        coeffNum2 = coeffNum2 +1;
    	address2 = address2 + 0x001;
	}for (i=0; i<=255; i++) {    
        fprintf(fp, "\t\ttest_data[%d] = 8'h%x;\n", coeffNum3, address3);
        coeffNum3 = coeffNum3 +1;
    	address3 = address3 + 0x001;
	}
	    return 0;
}
