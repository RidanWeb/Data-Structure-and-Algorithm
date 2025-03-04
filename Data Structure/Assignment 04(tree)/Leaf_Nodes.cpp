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

vector<int> x;

void leafPrint(myTree* root){

    if(root == NULL){

        return;
    }

    if(root->left == NULL && root->right == NULL){

        x.push_back(root->val);
    }

    leafPrint(root->left);
    leafPrint(root->right);

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

    leafPrint(root);

    sort(x.begin(), x.end(), greater<int>());

    for(auto i = x.begin(); i != x.end(); i++){

        cout << *i << " ";
    }

    return 0;
}