#!/bin/python3
# Author: Mohammad Faisal
# Dated: 17/06/2019
import sys
# import math


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    res = n*(n+1)//2
    ans = n*(n+1)*(2*n+1)//6
    res = res * res
    print(res-ans)
    t-=1
