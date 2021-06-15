#include "sort.h"
#include "fun_aux1.c"
#include "fun_aux2.c"
#include "fun_aux3.c"

void TopDownMergeSort(int *A, int *B, int n);
void TopDownMerge(int *A, int iBegin, int iMiddle, int iEnd, int *B);

void TopDownSplitMerge(int *B, int iBegin, int iEnd, int *A)
{
	int iMiddle;

    if(iEnd - iBegin <= 1)
        return;
    iMiddle = (iEnd + iBegin) / 2;
    TopDownSplitMerge(A, iBegin,  iMiddle, B);
    TopDownSplitMerge(A, iMiddle,    iEnd, B);
    TopDownMerge(B, iBegin, iMiddle, iEnd, A);
}

void TopDownMerge(int *A, int iBegin, int iMiddle, int iEnd, int *B)
{
    int i = iBegin, j = iMiddle, k;
 
    for (k = iBegin; k < iEnd; k++) {
        if (i < iMiddle && (j >= iEnd || A[i] <= A[j])) {
            B[k] = A[i];
            i = i + 1;
        } else {
            B[k] = A[j];
            j = j + 1;
        }
    }
}

void CopyArray(int *A, int iBegin, int iEnd, int *B)
{
	int k;

    for(k = iBegin; k < iEnd; k++)
        B[k] = A[k];
}

void TopDownMergeSort(int *A, int *B, int n)
{
    CopyArray(A, 0, n, B);
    TopDownSplitMerge(B, 0, n, A);
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

	b = malloc(sizzeof(array));
	TopDownMergeSort(array, b, size);
}
