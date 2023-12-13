#include "searching_algorithms.h"

#include <algorithm>
#include<iostream>
using namespace std;

int randomized_select(vector<int> nums, int k, int start, int end){

    if(start > end) 
    {
        return -1;
    }
    int ind = partition(nums, start, end);
    
    int low = ind - start;
    if(k > low)
    {
        return randomized_select(nums, k-low-1, ind+1, end);

    }
        
    else if(k == low)
    {
                return nums[ind];


    }
    else
    {
        return randomized_select(nums, k, start, ind-1);

    }

}