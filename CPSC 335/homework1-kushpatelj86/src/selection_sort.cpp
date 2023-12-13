#include "sorting_algorithms.h"

/*
selection_sort function sorts the array in-place
@Parameters:
    nums: a reference to the vector of integers to be sorted
@Returns:
    void.
    the algorithm sorts the vector in-place. so, it does not return anything. 
*/
void selection_sort(vector<int>& nums){
    // TODO
        int minIndex = 0;

  
    for(int i=0; i < nums.size(); i++){
        
         minIndex = i;
        for(int j= i+ 1; j<nums.size(); j++)
        {
            if(nums[j] < nums[minIndex] && i != j )
            {
                minIndex = j;
            }
           
        }

        swap(nums[i], nums[minIndex]);
    }
}