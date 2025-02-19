#include <bits/stdc++.h>
using namespace std;

class myStack{

    public:

    vector<int> v;

    void push(int val){

        v.push_back(val);
    }

    void pop(){

         v.pop_back();
    }

    int top(){

        return v.back();
    }

    int size(){

        return v.size();
    }

    bool empty(){

        return v.empty();
    }




};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    myStack st;

    st.push(10);
    st.push(30);
    st.push(50);
    st.push(70);

    cout << "Top : "; if(!st.empty()){cout << st.top();} cout << " Size : " << st.size() << " isEmpty : " << st.empty() << endl;

    if(!st.empty()){

        st.pop();
    }

    if(!st.empty()){

        st.pop();
    }

    cout << "Top : "; if(!st.empty()){cout << st.top();} cout << " Size : " << st.size() << " isEmpty : " << st.empty() << endl;


    return 0;
}