*
 * =====================================================================================
 *
 *       Filename:  mod8_hw7_task2.c
 *       	Usage:  ./mod8_hw7_task2.c
 *    Description:  Random generated 1D array
 *
 *        Version:  1.0
 *        Created:  03/20/2017 10:27:57 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Breckin Lassen (), breckinlassen@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* For exit */
#include <time.h>
/* Function Prototypes */
void MaxMin(int numvals, int vals[], int* min, int* max);
/* Main Program */
int main(int argc, char *argv[])
{
	int N = 10, k;
	printf("Generate 10 random numbers\n");
	int ar1[N];
	//srand(0); this wont access the time library so the "random" numbers would always be picked the same. so we choose the below line.
	srand(time(NULL));
	for(k = 0; k < N; k++)
	{
		ar1[k] = rand() % 100 + 1;
	}
	int *min, *max, j;
	min = (int*)malloc(sizeof(int) * 1);// malloc asks system for memory of size requested. 
	max = (int*)malloc(sizeof(int) * 1);
	MaxMin(N, ar1, min, max);
	printf("This list is:\n");
	for(j = 0; j < N; j++)
	{
	printf("%d ", ar1[j]);
	}
	printf("\nMinimum: %d\n", *min);
	printf("Maximum: %d\n", *max);
	printf("DONE\n");
	free(min); // gives the memory back to system removing memory leak.
	free(max);
	return 0;
}
/* Function Defenitions */
void MaxMin(int numvals, int vals[], int* min, int* max)
{
	int i;
	*min = vals[0];
	*max = vals[0];
	for(i = 1; i < numvals; i++)
	{
		if(vals[i] < *min)
		{
			*min = vals[i];
		}
		if(vals[i] > *max)
		{
			*max = vals[i];
		}
	}
	return;
}

