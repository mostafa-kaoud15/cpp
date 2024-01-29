#include <iostream>
#include <queue>

using namespace std;
// tree ==> it is non linear data structure
template <class t>
class tree
{
private:
    t data;
    tree *left;
    tree *right;
    tree *root;
    queue<tree *> q;
    void BFS_helper(tree *node)
    {
        if(q.empty())
        {
            return;
        }
        if(node->left!=nullptr)
        {

            q.push(node->left);
        }
         if(node->right!=nullptr)
        {

            q.push(node->right);
        }
        cout<<node->data<<"\t";
        q.pop();
        BFS_helper(q.front());


    }
    int hight_helper(tree *node)
    {
        if (node == nullptr)
        {
            return -1;
        }
        else
        {
            int left = hight_helper(node->left);
            int right = hight_helper(node->right);
            return 1 + std::max(hight_helper(node->left), hight_helper(node->right));
        }
    }

    void dfs_helper(tree *b)
    {
        if (b == nullptr)
            return;
        cout << b->data << "\t";
        dfs_helper(b->left);
        dfs_helper(b->right);
    }

public:
    tree()
    {
        left = right = root = nullptr;
    }

    // add value O(logn)
    void addValue(t value)
    {
        tree *newNode = new tree();

        newNode->data = value;
        if (root == nullptr)
        {
            root = newNode;
        }
        else
        {
            tree *ext = root;
            tree *pre = root;
            while (ext != nullptr)
            {
                pre = ext;

                if (value >= ext->data)
                {
                    ext = ext->right;
                }
                else
                {
                    ext = ext->left;
                }
            }
            if (value >= pre->data)
            {
                pre->right = newNode;
            }
            else
            {
                pre->left = newNode;
            }
        }
    }

    // max
    t max()
    {
        tree *ext = root;
        tree *pre = root;
        while (ext != nullptr)
        {
            pre = ext;
            ext = ext->right;
        }
        return pre->data;
    }

    // min
    t min()
    {
        tree *ext = root;
        tree *pre = root;
        while (ext != nullptr)
        {
            pre = ext;
            ext = ext->left;
        }
        return pre->data;
    }

    // hight
    int hight()
    {
        if (root == nullptr)
        {
            return -1;
        }
        else
            return hight_helper(root);
    }
    void DFS()
    {
        if (root == nullptr)
        {
            return;
        }
        else
            dfs_helper(root);
        cout << endl;
    }

    // BFS
    void BFS()
    {
        if (root == nullptr)
            return;
        q.push(root);
        BFS_helper(root);
    }
};
int main()
{
    tree<int> t;
    t.addValue(1);
    t.addValue(2);
    t.addValue(5);
    t.addValue(4);
    t.addValue(-1);
    t.addValue(1);
    t.addValue(7);
    //cout << t.hight() << endl;
    //cout << t.max() << endl;
    //t.DFS();
    t. BFS();

    return 0;
}