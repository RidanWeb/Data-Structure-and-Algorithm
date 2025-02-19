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


myTree* inputElement(){

    int x; cin >> x;

    myTree* root = new myTree(x);

    queue<myTree*> q;
    q.push(root);

    while(!q.empty()){

        myTree* front = q.front();
        q.pop();

        int l, r; cin >> l >> r;

        myTree *treeL, *treeR;

        if(l == -1){

            treeL = NULL;
        }else{

            treeL = new myTree(l);
        }

        if(r == -1){
            treeR = NULL;
        }else{
            treeR = new myTree(r);
        }

        front->left = treeL;
        front->right = treeR;

        if(front->left)
            q.push(front->left);

        if(front->right)
            q.push(front->right);


    }

    return root;
}


void levelOrderTraverse(myTree* root){

    queue<myTree*> q;
    q.push(root);

    while(!q.empty()){

        myTree* front = q.front();
        q.pop();


        cout << front->val << " ";

        if(front->left){

            q.push(front->left);
        }

        if(front->right){

            q.push(front->right);
        }
    }

}

bool BStSearch(myTree* root, int val){

    if(root == NULL){

        return false;
    }

    if(root->val == val){

        return true;
    }

    if(root->val > val){

        return BStSearch(root->left, val);

    }else{

        return BStSearch(root->right, val);
    }


}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    myTree* root = inputElement();

    levelOrderTraverse(root);

    if(BStSearch(root, 4)){

        cout << "Yes";
    }

    return 0;
}