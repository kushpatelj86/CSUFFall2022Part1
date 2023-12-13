#include <iostream>
#include <vector>
using namespace std;


void insertion_sort(vector<int>& nums){
    
    // TODO 
    for(auto outer = 0; outer < nums.size() ;outer++)
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




int main()
{
    vector<int> numgfd = {12, 11, 13, 5, 6 };

cout << "Original Array : ";
    for(auto i : numgfd)
    {
     cout << " " << i; 

    }
    cout << endl;

    insertion_sort(numgfd);
cout << "Changed Array : " ;
    for(auto i : numgfd)
    {
    cout << " " << i; 

    }
    cout << endl;




    return 0;
}
