/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int getSize(Node* root) {
        // code here
        int count=0;
        if(root==NULL) return NULL;
        
        return 1 + getSize(root->left) + getSize(root->right);
    }
};