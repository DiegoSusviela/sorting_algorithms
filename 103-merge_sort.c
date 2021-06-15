#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

/**
* maxi_merge_split - counts the length of gap_exp string
* @A: alkdsnasjkld
* @iBegin: alkdsnasjkld
* @iEnd: alkdsnasjkld
* @B: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

void maxi_merge_split(int *B, int iBegin, int iEnd, int *A)
{
	int iMiddle;

	if (iEnd - iBegin <= 1)
		return;
	iMiddle = (iEnd + iBegin) / 2;
	maxi_merge_split(A, iBegin, iMiddle, B);
	maxi_merge_split(A, iMiddle, iEnd, B);
	printf("Merging...\n");
	printf("[left]: ");
	print_array(B + iBegin, iMiddle - iBegin);
	printf("[right]: ");
	print_array(B + iMiddle, iEnd - iMiddle);
	printf("[Done]: ");
	maxi_merge(B, iBegin, iMiddle, iEnd, A);
	print_array(A + iBegin, iEnd - iBegin);
}

/**
* maxi_merge - counts the length of gap_exp string
* @A: alkdsnasjkld
* @iBegin: alkdsnasjkld
* @iEnd: alkdsnasjkld
* @B: alkdsnasjkld
* @iMiddle: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

void maxi_merge(int *A, int iBegin, int iMiddle, int iEnd, int *B)
{
	int i = iBegin, j = iMiddle, k;

	for (k = iBegin; k < iEnd; k++)
	{
		if (i < iMiddle && (j >= iEnd || A[i] <= A[j]))
		{
			B[k] = A[i];
			i = i + 1;
		}
		else
		{
			B[k] = A[j];
			j = j + 1;
		}
	}
}

/**
* copy_array - counts the length of gap_exp string
* @A: alkdsnasjkld
* @iBegin: alkdsnasjkld
* @iEnd: alkdsnasjkld
* @B: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

void copy_array(int *A, int iBegin, int iEnd, int *B)
{
	int k;

	for (k = iBegin; k < iEnd; k++)
		B[k] = A[k];
}

/**
* maxi_merge_sort - counts the length of gap_exp string
* @A: alkdsnasjkld
* @B: alkdsnasjkld
* @n: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

void maxi_merge_sort(int *A, int *B, int n)
{
	copy_array(A, 0, n, B);
	maxi_merge_split(B, 0, n, A);
}

/**
* merge_sort - counts the length of gap_exp string
* @size: alkdsnasjkld
* @array: alkdsnasjkld
* ---------------------------------
* Return: the length of the string
*/

void merge_sort(int *array, size_t size)
{
	int *b;

	if (!array || size < 2)
		return;

	b = malloc(sizeof(int) * (size + 1));
	if (!b)
		return;
	maxi_merge_sort(array, b, size);

	free(b);
}
