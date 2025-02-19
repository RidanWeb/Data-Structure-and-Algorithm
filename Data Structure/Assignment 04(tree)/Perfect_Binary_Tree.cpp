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

void isPerfectBinaryTree(myTree* root){

    if(root == NULL){

        cout << "YES" << endl;
        return;
    }

    int level = 0;

    queue<myTree*> q;

    bool flag = false;

    q.push(root);

    while(!q.empty()){

        int nodeNum = pow(2, level);
        int queueSize = q.size();

        if(nodeNum == queueSize){

            flag = true;
        }else{

            flag = false;
        }

        for(int i = 0; i < queueSize; i++){

            myTree* temp = q.front();
            q.pop();

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

        level++;

    }

    if(flag){

        cout << "YES" << endl;
    }else{

        cout << "NO" << endl;
    }


}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    myTree *root = treeInput();

    isPerfectBinaryTree(root);

    return 0;
}