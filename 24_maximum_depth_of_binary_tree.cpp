/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution{
  public:
    int maxDepth(Node *root) {
        return root ? (1 + max(maxDepth(root->left),maxDepth(root->right))) : 0 ;
    }
};