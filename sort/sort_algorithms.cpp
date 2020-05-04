#include "../testlib.h"
#include <iostream>
#include <vector>
#include "sort_algorithms.h"

using namespace std;

void MergeSort(int arr[], int n) {
    MergeSortInterval(arr, 0, n-1);
}


void MergeSortInterval(int arr[], int low, int high) {
    if(low == high)
        return;
    int mid = (low + high) / 2;
    MergeSortInterval(arr, low, mid);
    MergeSortInterval(arr, mid+1, high);
    vector<int>help;
    int i = low;
    int j = mid+1;
    while(i <= mid and j <= high) {
        if(arr[i] <= arr[j]) 
            help.push_back(arr[i++]);
        else 
            help.push_back(arr[j++]);
    }
    while(i <= mid)
        help.push_back(arr[i++]);
    while(j <= high)
        help.push_back(arr[j++]);
    
    for(int i = 0 ; i < help.size() ; i++)
        arr[low+i] = help[i]; 

}


void QuickSort(int arr[], int n) {
    QuickSortInterval(arr, 0, n-1);
}


void QuickSortInterval(int arr[], int low, int high) {
    if(low >= high)
        return;
    int pivot_index = QuickSortParition(arr, low, high);
    QuickSortInterval(arr, low, pivot_index - 1);
    QuickSortInterval(arr, pivot_index + 1, high);
    

}

int QuickSortParition(int arr[], int low, int high) {
    int pivotIndex = rnd.next(low, high);
    //int pivotIndex = high;
    swap(arr[pivotIndex], arr[high]);
    int pivot = arr[high];
    int smaller_index = low;
    
    for(int i = low ; i <= high ; i++) 
        if(arr[i] < pivot) 
            swap(arr[i], arr[smaller_index++]);
        
    swap(arr[high], arr[smaller_index]);
    return smaller_index;
}



