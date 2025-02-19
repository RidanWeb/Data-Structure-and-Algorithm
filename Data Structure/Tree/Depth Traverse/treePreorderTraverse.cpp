#include <bits/stdc++.h>
using namespace std;


class myTree{

    public:

        int val;
        myTree* left;
        myTree* right;

        myTree(int val){

            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void printPreorderTree(myTree* root){

    if(root == NULL){

        return;
    }

    cout << root->val << " ";
    printPreorderTree(root->left);
    printPreorderTree(root->right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    myTree* root = new myTree(10);
    myTree* a = new myTree(20);
    myTree* b = new myTree(30);
    myTree* c = new myTree(40);
    myTree* d = new myTree(50);
    myTree* e = new myTree(60);
    myTree* f = new myTree(70);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;



    printPreorderTree(root);


    return 0;
}