#include "sorting_algorithms.h"

/*
insertion_sort function sorts the array in-place
@Parameters:
    nums: a reference to the vector of integers to be sorted
@Returns:
    void.
    the algorithm sorts the vector in-place. so, it does not return anything. 
*/
void insertion_sort(vector<int>& nums){
    // TODO 
    
       for(auto outer = 1; outer < nums.size() ;outer++)
        {
            auto currentNum = nums[outer];
            
            auto inner = outer - 1;
            for( inner;inner >= 0 && (nums[inner] > currentNum);inner--)
            {
                nums[inner + 1] = nums[inner];
            }
            nums[inner + 1] = currentNum;
        }
    
        
 












}