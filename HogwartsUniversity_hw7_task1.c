/*
 * =====================================================================================
 *
 *       Filename:  HogwartsUniversity_task1.c
 *       	Usage:  ./HogwartsUniversity_task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2017 02:38:11 PM
 *       Compiler:  gcc -Wall -Werr
 *         Author:  Robert Christensen (), robertchristensen1@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#define LEN 5
/* Function Prototypes */

void copy_arr(double ar1[], const double ar2[], int n);
void copy_ptr(double *ar1, const double *ar2, int n);
void copy_ptrs(double *ar2, const double *start, const double *end);
void show_arr(const double ar[], double n);

/* Main Program */
int main(int argc, char *argv[])
{

	double source[LEN] = {1.1,2.2,3.3,4.4,5.5};
	double target1[LEN];
	double target2[LEN];
	double target3[LEN];
	copy_arr(target1, source, LEN);
	copy_ptr(target2, source, LEN);
	copy_ptrs(target3, source, (source + LEN));
	printf("source array:               ");
	show_arr(source, LEN);
	printf("copied by subscript:        ");
	show_arr(target1, LEN);
	printf("copied by pointer:          ");
	show_arr(target2, LEN);
	printf("copied using pointer range: ");
	show_arr(target3, LEN);
	return 0;
}
/* Function Defenitions */
void copy_arr(double ar1[], const double ar2[], int n)
{
	int i;
	for(i=0;i < n; i++)
	{
		ar1[i] = ar2[i];
	}
	return;
}
void copy_ptr(double *ar1, const double *ar2, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		*ar1 = *ar2;
		ar1++;
		ar2++;
	}
	return;
}
void copy_ptrs(double *ar2, const double *start, const double *end)
{
	while(start != end)
	{
		*(ar2++) = *(start++);
	}
	return;
}
void show_arr(const double ar[], double n)
{
	int i;
	for(i=0; i < LEN; ++i)
	{
		printf("%3.1f ", ar[i]);
	}
	printf("\n");
	return;
}

