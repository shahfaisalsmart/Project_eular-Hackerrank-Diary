/*
    Author: Mohammad Faisal
    Email: mohammad.faisal78612@gmail.com
    Series: ProjectEular+ 
    Problem_Name: #2: Even Fibonacci numbers
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


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;

        long total = 0;
        long previous = 0;
        long current = 2;
        while(current < n)
        {
            total += current;
            long temp = current;
            current = current*4 + previous;
            previous = temp;
        }
        cout<<total<<endl;
    }
    return 0;
}

