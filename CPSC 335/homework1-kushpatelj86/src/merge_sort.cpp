#include "sorting_algorithms.h"

vector<int> aux;
/*  
merge function will merge two sorted sub-arrays, 
one starts from `low` and goes until `mid`
second starts from `mid+1` and goes until `high`
e.g.
    1   4 6  8     3 5 7
    ^        ^         ^
    low      mid       high

@Parameters:
    nums: a reference to the vector of numbers
    low: start point of first sub-array
    mid: end of left-sub-array
    high: end of right-sub-array

@Returns:
    the function does NOT return anything
    it merges the sub-arrays in-place.
*/
void merge(vector<int>& nums, int low, int mid, int high){
    // TODO
    

   
     for(auto i=low; i<=high; i++)
     {
       aux[i] = nums[i];
   }

   
   auto left = low;
   auto right = mid + 1;
  
   for(int i=low; i<=high; i++)
   {
       if(left > mid){
           nums[i] = aux[right];
           right++;
       }
       else if(right > high){
           nums[i] = aux[left];
           left++;
       }
       else if(aux[left] < aux[right]){
           nums[i] = aux[left];
           left++;
       }
       else{
           nums[i] = aux[right];
           right++;
           
       }
   }


   
}

/*
merge_sort function will sort the array in-place in the given bounds
@Parameters:
    nums: a reference to the vector of integers to be sorted
    low: start index of the array to be sorted
    high: end index of the array to be sorted
@Returns:
    void. 
    the algorithm sorts the vector in-place. so, it does not return anything.
*/
void _merge_sort(vector<int>& nums, int low, int high){
    // TODO

   auto mid = (low + high) / 2;
    if(low == high)
    {

    }
    else 
    {
        if(low + 1 == high)
        {
            if(nums[low] > nums[high])
            {
                swap(nums[low],nums[high]);
            }
        }
        else 
        {
            mid = (low + high) / 2;
            _merge_sort(nums, low, mid);
            _merge_sort(nums, mid + 1, high);
            merge(nums,low,mid,high);
        }

        
    }



}

/*
merge_sort function sorts the array in-place
@Parameters:
    nums: a reference to the vector of integers to be sorted
@Returns:
    void.
    the algorithm sorts the vector in-place. so, it does not return anything. 
*/
void merge_sort(vector<int>& nums){
    aux.resize(nums.size(), 0);
    _merge_sort(nums, 0, nums.size()-1);
}