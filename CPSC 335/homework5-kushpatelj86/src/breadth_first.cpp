#include "tree_algorithms.h"
#include <cstddef>
#include <vector>

// TODO
void _breadth_first(TreeNode* root, vector<int>& answer){
    
    
    

        vector<TreeNode* > search;
            search.push_back(root);
            while(!search.empty())
            {
                vector<TreeNode*> temp;

                for(TreeNode* node: search)
                {

                    answer.push_back(node->data);

                    if(node->left != nullptr)
                    {
                        temp.push_back(node->left);
                    }
                    if(node->right != nullptr)
                    {
                        temp.push_back(node->right);

                    }

                }


                search.clear();
                for(TreeNode* node: temp)
                {
                    search.push_back(node);

                }

        
            




            
        
        }
    
        





    













    
}

vector<int> breadth_first(TreeNode* node){
    vector<int> answer;
    _breadth_first(node, answer);

    return answer;
}