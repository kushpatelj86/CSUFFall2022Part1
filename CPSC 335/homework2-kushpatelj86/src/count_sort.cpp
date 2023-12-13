#include "sorting_algorithms.h"

// TODO
vector<int> count_sort(vector<int> nums){


    vector<int> temp;

    auto max = 0;
    for(auto i = 0; i < nums.size();i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        }
    }


    for(auto i = 0; i <= max;i++)
    {
        temp.push_back(i);
        temp[i] = 0;
    }


    auto count = 0;

    for(auto i = 0; i < nums.size();i++)
    {
        temp[nums[i]]++;
    }

    nums.clear();
    for(auto i = 0; i < temp.size();i++)
    {
        if(temp[i] != 0)
        {
            for(auto j = 0; j < temp[i]; j++)
            {
                nums.push_back(i);
            }
        }
    }
 



    return nums;
}