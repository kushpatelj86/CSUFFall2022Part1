#include "sorting_algorithms.h"

vector<int> radix_sort(vector<int> nums)
{

     auto max = 0;
    for(auto i = 0; i < nums.size();i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        }
    }


    for(auto i = 1; max / i > 0;i *= 10)
    {
        nums  =  count_sort(nums);
    }











    return nums;
}
