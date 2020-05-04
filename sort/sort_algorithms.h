#ifndef SORT_SORT_ALGORITHMS_H_
#define SORT_SORT_ALGORITHMS_H_

const int MERGE_SORT = 1;
const int QUICK_SORT = 2;

//Inputs a array and its corresponding size
//Sorts the arr from index 0 to n-1 using merge sort
void MergeSort(int arr[], int n);

//Sort an interval in arr from index low to high using merge sort(inclusive)
void MergeSortInterval(int arr[], int low, int high);

//Inputs a array and its corresponding size
//Sorts the arr from index 0 to n-1 using quick sort
void QuickSort(int arr[], int n);

//Sort an interval in arr from index low to high using quick sort (inclusive)
void QuickSortInterval(int arr[], int low, int high);

//Choses a random pivot of arr from low to high and partitions the array.
//Returns index of pivot
int QuickSortParition(int arr[], int low, int high);

#endif //SORT_SORT_ALGORITHMS_H_
