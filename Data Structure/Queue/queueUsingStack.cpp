#include <bits/stdc++.h>
using namespace std;


class myQueue
{

public:

    stack<int> st;


    void push(int val)
    {

        st.push(val);

    }

    int pop()
    {
        stack<int> st2;

        int val;
        while(!st.empty()){

            val = st.top();

            st.pop();

            if(st.empty()){

                break;
            }

            st2.push(val);
        }

        while(st2.empty()){

            st.push(st2.top());
            st2.pop();
        }

        return val;
    }

    int front()
    {

        stack<int> st2;

        int val;
        while(!st.empty()){

            val = st.top();

            st.pop();

            st2.push(val);
        }

        while(st2.empty()){

            st.push(st2.top());
            st2.pop();
        }

        return val;
    }

    int size()
    {

        return st.size();
    }

    bool empty()
    {

        return st.empty();
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    myQueue qu;

    int n;
    cin >> n;

    while (n--)
    {

        int x;
        cin >> x;
        qu.push(x);
    }

    // while(!qu.empty()){

    //     cout << qu.front() << " ";
    //     qu.pop();
    // }

    cout << endl;

    if (!qu.empty())
    {
        cout << "Front : " << qu.front() << " ";
    }
    cout << "Size : " << qu.size() << " ";
    cout << "Is Empty : " << qu.empty() << " ";

    if (!qu.empty())qu.pop();
    if (!qu.empty())qu.pop();

    if (!qu.empty())
    {
        cout << "Front : " << qu.front() << " ";
    }
    cout << "Size : " << qu.size() << " ";
    cout << "Is Empty : " << qu.empty() << " ";

    return 0;
}