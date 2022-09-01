/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    if (root == NULL || root->children.size() == 0) {
        return root;
    }
    
    TreeNode<int> *ansNode = root;
    for(int i = 0; i < root->children.size(); i++){
        TreeNode<int> *recNode = maxDataNode(root->children[i]);
        if (recNode->data > ansNode->data){
            ansNode = recNode;
        }
    }
    return ansNode;
}