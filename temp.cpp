/*
    Author: Mohammad Faisal
    Email: mohammad.faisal78612@gmail.com
    Series: ProjectEular+ 
    Problem_Name: #1: Multiples of 3 and 5
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

unsigned long long int ans(unsigned long long int a)
{
    return a*(a+1);
}

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int  n;
        cin >> n;
        n = n-1;
        unsigned long long int x = n/3;
        unsigned long long int y = n/5;
        unsigned long long int z = n/15;
        cout<<(((3*ans(x))/2+(5*ans(y))/2-(15*ans(z)/2)))<<endl;
    }
    return 0;
}

