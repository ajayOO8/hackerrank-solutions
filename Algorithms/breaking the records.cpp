#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long long t;cin>>t;
   long long x,max,min,maxc,minc;
    max=min=maxc=minc=0;
   cin>>x; min=max=x; t--;
    while(t--)
    {cin>>x;
     if(max<x) {max=x; maxc++;}
     if(min>x){min=x;minc++;}
    }
    cout<<maxc<<" "<<minc;
    return 0;
}
