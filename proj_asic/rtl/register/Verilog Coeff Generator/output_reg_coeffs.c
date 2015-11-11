#include <stdio.h>
#include <stdlib.h>


int main(void)
{

// Creating and opening file
	FILE *fp;
        fp = fopen("filter_coeffs.txt", "w");
	
	if (fp == NULL)
	{
		perror("Error opening file");
		return(-1);
	}
// generate reference strings
	int y=-1;
	int i;

   	for (i=0; i<512; i++)
	{
        y = y + 1;
        fprintf (fp, "rf_filter_coeff%d_a, rf_filter_coeff%d_b,", y, y);
    }
    return 0;
}
