#include <bits/stdc++.h>
using namespace std;

class myStack{

    public:

    queue<int> qu;

    void push(int val){

        qu.push(val);
    }

    int pop(){

         queue<int> qu2;

         while(!qu.empty()){

            int val = qu.front();
            qu.pop();

            if(qu.empty()){

                return val;
            }

            qu2.push(val);

         }   
    }

    int top(){

        return qu.front();
    }

    int size(){

        return qu.size();
    }

    bool empty(){

        return qu.empty();
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