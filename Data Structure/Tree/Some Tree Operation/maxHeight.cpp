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



int maxHeightRec(myTree* root){

    if(root == NULL){

        return 0;
    }

    if(root->left == NULL && root->right == NULL){

        return 0;
    }

    int l = maxHeightRec(root->left);
    int r = maxHeightRec(root->right);

    return max(l, r) + 1;
}


myTree* treeInput(){

    int x; cin >> x;
    myTree* root = new myTree(x);

    queue<myTree*> q;
    q.push(root);

    while(!q.empty()){

        //extract queue front element
        myTree* p = q.front();  //root of tree
        q.pop();

        //Do operation 
        int l, r; cin >> l >> r;

        myTree *treeL, *treeR;

        if(l == -1)treeL = NULL;
        else treeL = new myTree(l);

        if(r == -1)treeR = NULL;
        else treeR = new myTree(r);

        p->left = treeL;
        p->right = treeR;


        //Push Children to the queue
        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }

    }

    return root;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    myTree* root = treeInput();

    cout << "Max Height Node : " << maxHeightRec(root) << endl;

    return 0;
}