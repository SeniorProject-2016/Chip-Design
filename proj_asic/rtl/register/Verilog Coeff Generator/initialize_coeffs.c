#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>	


int main(void)
{

// Creating and opening file
	FILE *fp;
        fp = fopen("filter_coeffs_initialized.txt", "w");
	
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
        fprintf (fp, "\t\trf_filter_coeff%d_a <= 16'h000;\n", y);
        fprintf (fp, "\t\trf_filter_coeff%d_b <= 16'h000;\n", y);
    }
    return 0;
}