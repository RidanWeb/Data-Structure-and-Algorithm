#include <bits/stdc++.h>
using namespace std;

class myTree{


    public:

    int val;
    myTree* left;
    myTree* right;

    myTree(int val){

        this->val = val;
        this->left = left;
        this->right = right;
    }
};

myTree* convertArrayToBST(int a[], int s, int l, int r){

    if(l > r){

        return NULL;
    }

    int mid = (l+r)/2;

    myTree* root = new myTree(a[mid]);

    myTree* leftN =  convertArrayToBST(a, s, l, mid-1);
    myTree* rightN = convertArrayToBST(a, s, mid+1, r);

    root->left = leftN;
    root->right = rightN;

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



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x; cin >> x;

    int arr[x];

    for (int i = 0; i < x; i++){
        
        cin >> arr[i];
    }

    myTree* rootV = convertArrayToBST(arr, x, 0, x-1);

    levelOrderTraverse(rootV);


    
    return 0;
}