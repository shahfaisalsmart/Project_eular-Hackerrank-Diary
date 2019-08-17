/*  
    Author: Mohammad Faisal
    Project Euler #7: 10001st prime
    Dated: 18-Aug-2019
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int N = 1299711;
    vector<int>v(N,0);
    vector<int> lis;

    for(int i=2;i<N;i++){
        if(v[i]==0)
        {
            for(int j=2*i;j<N;j+=i)
                v[j]=1;
            lis.push_back(i);
        }
    }

    while(t--)
    {
        int k;
        cin >> k;
        cout<<lis[k-1]<<endl;
    }
    return 0;
}
