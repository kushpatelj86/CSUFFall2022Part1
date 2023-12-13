#include "searching_algorithms.h"

int partition(vector<int>& arr, int start, int end){
    
    
    int pivot = arr[end];
    int left_index = start - 1;

    for(auto i =  start; i <= end - 1;i++)
    {
        if(arr[i] < pivot)
        {
            left_index++;

            swap(arr[left_index],arr[i]);
        }
    }
    swap(arr[left_index + 1],arr[end]);
    return left_index + 1;
    
    
    
    
}
