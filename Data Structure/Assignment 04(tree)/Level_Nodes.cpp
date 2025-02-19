#include <bits/stdc++.h>
using namespace std;

class myTree
{

public:
    int val;
    myTree *left;
    myTree *right;

    myTree(int val)
    {

        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

myTree *treeInput()
{

    int x;
    cin >> x;
    myTree *root = new myTree(x);

    queue<myTree *> q;
    q.push(root);

    while (!q.empty())
    {

        // extract queue front element
        myTree *p = q.front(); // root of tree
        q.pop();

        // Do operation
        int l, r;
        cin >> l >> r;

        myTree *treeL, *treeR;

        if (l == -1)
            treeL = NULL;
        else
            treeL = new myTree(l);

        if (r == -1)
            treeR = NULL;
        else
            treeR = new myTree(r);

        p->left = treeL;
        p->right = treeR;

        // Push Children to the queue
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
}

void printLevelValue(myTree *root, int x){

    if (root == NULL){

        cout << "Invalid" << endl;
        return;
    }

    int level = 0;
    queue<myTree*> q;

    q.push(root);

    while(!q.empty()){

        int queueSize = q.size();

        if(x == level){

            while(queueSize--){

                myTree *front = q.front();
                q.pop();
                cout << front->val << " ";
            }
            cout << endl;
            return;
        }

        for (int i = 0; i < queueSize; i++) {

            myTree *node = q.front();
            q.pop();

            if (node->left) {

                q.push(node->left);

            }
            if (node->right) {


                q.push(node->right);
            }
        }

        level++;
    }

    cout << "Invalid" << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    myTree *root = treeInput();

    int v; cin >> v;

    printLevelValue(root, v);

    return 0;
}