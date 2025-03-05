#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> map;

    map["ridan"] = 10;
    map["kabir"] = 20;
    map["abir"] = 300;


    cout << map["abir"] << endl;

    if(map.count("kabir")){

        cout << "Yes";
    }else{

        cout << "No";

    }


    return 0;
}