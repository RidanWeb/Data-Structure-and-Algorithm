#include <bits/stdc++.h>
using namespace std;


class myQueue
{

public:

    list<int> l;


    void push(int val)
    {

        l.push_back(val);

    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {

        return l.front();
    }

    int back()
    {

        return l.back();
    }

    int size()
    {

        return l.size();
    }

    bool empty()
    {

        return l.empty();
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
        cout << "Back : " << qu.back() << " ";
    }
    cout << "Size : " << qu.size() << " ";
    cout << "Is Empty : " << qu.empty() << " ";

    if (!qu.empty())qu.pop();
    if (!qu.empty())qu.pop();

    if (!qu.empty())
    {
        cout << "Front : " << qu.front() << " ";
        cout << "Back : " << qu.back() << " ";
    }
    cout << "Size : " << qu.size() << " ";
    cout << "Is Empty : " << qu.empty() << " ";

    return 0;
}