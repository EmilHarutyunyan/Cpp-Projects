// Task 26  Merge sort.cpp

/* You need to write a program that, by entering the N natural number at the input, then a sequence consisting of all N elements, will sort the elements of the sequence in descending order. The numbers displayed must be separated by a space. Use the merge sort algorithm to solve the problem. */

/*
    Examples
    ====== Test #1 =======
    Input 
    10 1 2 3 4 5 6 7 8 9 10

    Output
    10 9 8 7 6 5 4 3 2 1

    ====== Test #2 =======
    Input
    5 -1 8 -15 99 -100
    
    Output
    99 8 -1 -15 -100
*/

#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int *L = new int[n1], *R = new int[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] >= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << "\n";
}

int main()
{
    unsigned size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int arr_size = size;
    mergeSort(arr, 0, arr_size - 1);
    printArray(arr, arr_size);
}
