#include <bits/stdc++.h> 
int countDigit(long long x) {
    // Write your code here.

    if (x==0) return 1;

    int counts = 0;

    while(x>0)
    {
        x = x/10;
        counts++;
    }

    return counts;
}