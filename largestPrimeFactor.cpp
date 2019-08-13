/*
    Author: Mohammad Faisal
    Email: mohammad.faisal78612@gmail.com
    Series: ProjectEular+ 
    Problem_Name: #3: Largest prime factor
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

long long solve(long long n)
{
    long long max = -1;

    // if n is even 
    while(n%2==0)
    {
        max = 2;
        n>>=1;
    }

    // if n is odd number

    for(int i=3; i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            max = i;
            n = n/i;
        }
    }

    // this is the case when number is prime and greater than 2

    if(n>2)
        max=n;

    // and Finally Return the max value(Largest prime factor)
    return max;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        cout<<solve(n)<<endl;
    }
    return 0;
}

