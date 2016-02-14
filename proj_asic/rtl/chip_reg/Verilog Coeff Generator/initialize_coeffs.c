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
/*
generate 1024 reference strings with incrementing coeff number
and initializing all 512, 2 part coeffs to 0
*/
    int y=-1;
    int i;

    for (i=0; i<=511; i++)
    {
        y = y + 1;
        fprintf (fp, "\t\trf_filter_coeff%d_a <= 8'h000;\n", y);
        fprintf (fp, "\t\trf_filter_coeff%d_b <= 8'h000;\n", y);
    }
    return 0;
}
