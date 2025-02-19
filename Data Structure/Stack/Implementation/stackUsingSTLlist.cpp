#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> st;

    st.push(10);
    st.push(30);
    st.push(50);
    st.push(70);

    cout << "Top : ";
    if (!st.empty())
    {
        cout << st.top();
    }
    cout << " Size : " << st.size() << " isEmpty : " << st.empty() << endl;

    if (!st.empty())
    {

        st.pop();
    }

    if (!st.empty())
    {

        st.pop();
    }

    cout << "Top : ";
    if (!st.empty())
    {
        cout << st.top();
    }
    cout << " Size : " << st.size() << " isEmpty : " << st.empty() << endl;

    stack<int> stls;

    int sz;
    cin >> sz;

    while (sz--)
    {

        int x;
        cin >> x;
        stls.push(x);
    }

    while (!stls.empty())
    {

        cout << stls.top() << " ";
        stls.pop();
    }

    return 0;
}