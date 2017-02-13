#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void bin(long long n)
    {
   long long i=0;
    long long count=0;
    while(n!=0)
        {
        long long temp=n%2;
        if(temp==0) count=count + pow(2,i);
        n=n/2;
    ++i;}
    cout<<count<<"\n";
}

int main() {
long long x;
    long t;
    cin>>t;
    for(long i=0;i<t;++i)
        {
        cin>>x;
        bin(x);
    }
    return 0;
}
