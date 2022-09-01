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

void printLevelWise(TreeNode<int> *root)
{
  // Write your code here
  queue<TreeNode<int> *> pendingNodes;
  pendingNodes.push(root);

  while (pendingNodes.size() != 0)
  {
    TreeNode<int> *front = pendingNodes.front();
    pendingNodes.pop();

    cout << front->data << ":";

    for (int i = 0; i < front->children.size(); i++)
    {
      TreeNode<int> *current = front->children[i];
      pendingNodes.push(current);
      if (i + 1 == front->children.size())
      {
        cout << current->data;
      }
      else
      {
        cout << current->data << ",";
      }
    }
    cout << endl;
  }
}