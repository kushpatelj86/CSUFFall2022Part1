#include "searching_algorithms.h"

/*
Given a vector of integers and a target element, 
return the left most index of target element,
if element does not exist return -1
*/
int _lower_bound(vector<int> nums, int target)
{

   /* auto firstIndex = 0;
    auto lastIndex = nums.size() -1 ;
    auto answer = -1;
    auto mid = (firstIndex + lastIndex ) / 2;
        if(firstIndex <= lastIndex)
        {
            while(firstIndex <= lastIndex)
            {
                mid = (firstIndex + lastIndex ) / 2;
                if(target < nums[mid])
                {
                    lastIndex = mid - 1;
                }
                else if(target > nums[mid])
                {
                    firstIndex = mid + 1;
                }
                else 
                {
                    answer = mid;
                    lastIndex = mid - 1;
                }
            }
            return answer;
    
        }
        else 
        {
            return -1;
        }
       
    */

    vector<int> temp;
    for(auto i = 0; i < nums.size();i++)
    {
        if(nums[i] == target)
        {
            temp.push_back(i);
        }
    }

    if(temp.size() == 0)   
    {
        return -1;
    }
    
    else 
    {
        return temp[0];
    }
    




   
}