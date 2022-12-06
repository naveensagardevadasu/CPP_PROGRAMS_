#include <iostream>
#include <string>

using namespace std;

struct TreeNode
{
    // char data;
    string left_str;
    string right_str;
    
    TreeNode *left;
    TreeNode *right;
   
    TreeNode(string l_str,string r_str,TreeNode* left, TreeNode* right):left_str(l_str),right_str(r_str),left(nullptr),right(nullptr){}
     TreeNode(string l_str,string r_str):left_str(l_str),right_str(r_str),left(nullptr),right(nullptr){}

};

string decomposition(string light_path, string heavy_path)
{
    light_path[0]=heavy_path[0] ;
    return light_path;
}

void tree_traverse(int direction, TreeNode* node)
{
    if(!direction)
    {
        cout << node->left_str;
        cout << node->left->left_str << endl;
    }
    else
    {
        cout << node->right_str;
        cout << node->right->right_str << endl;
    }
}
int main()
{
    TreeNode* root = new TreeNode("A","C");
    TreeNode* Node2 = new TreeNode("AC","CA"); // IN THIS NODE RIGHT PART IS HEAVY NODE
    
    // cout << Node2->right_str << endl;
    root->left = Node2;

    root->left->left_str = decomposition(root->left->left_str,root->left->right_str);
    tree_traverse(0,root);
    return 0;
}