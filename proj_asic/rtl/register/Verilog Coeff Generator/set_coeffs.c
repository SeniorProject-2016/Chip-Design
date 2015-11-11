#include <stdio.h>
#include <stdlib.h>


int main(void)
{

// Creating and opening file
	FILE *fp;
        fp = fopen("filter_coeffs_set.txt", "w");
	
	if (fp == NULL)
	{
		perror("Error opening file");
		return(-1);
	}
// Generate reference stringsS
	char name[] = "rf_filter_coeff";
	int coeffNum = -1;
	char * ab;
	int abToggle = 0;
	char pointer[] = " <= 16'h";
	int address = 0x03FF;
	char semi = ';';
	for (i=0; i<1024; i++) {
		if (abToggle % 2 == 0) {
			ab = "_a";
			coeffNum = coeffNum +1;
		} else {
			ab = "_b";
		}
		address = address + 0x1;
		abToggle = abToggle + 1;
		fprintf(fp, "\t\t%s%d%s%s%x%c\n", name, coeffNum, ab, pointer, address, semi);
	}
    return 0;
}
