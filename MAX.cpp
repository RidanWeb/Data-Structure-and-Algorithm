#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q; cin >> q;
    long long int n;

    vector<long long int> nums;
    int freq[1000005] = {0};


    while(q--){

        long long int x; cin >> x;

        if(x == 2){

            if(nums.empty()){

                cout << "empty" << '\n';

            }else{

                long long int maxF = 0, maxV = 0;

                for(long long int n : nums){

                    if(freq[n] > maxF || (freq[n] == maxF && n > maxV)){

                        maxF = freq[n];
                        maxV = n;
                    }
                }

                cout << maxV << '\n';
                freq[maxV] -= maxF / 2;

                vector<long long int> temp;

                long long int rem = 0;

                for(int i = 0; i < nums.size(); i++){

                    if(nums[i] == maxV && rem < maxF / 2){

                        rem++;
                    }else{

                        temp.push_back(nums[i]);
                    }
                }

                nums = temp;


            }

        }else if(x == 1){

            cin >> num;
            nums.push_back(num);
            freq[num]++;


        }
    }









    return 0;
}