#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n=0,k=0;
    cin>>n;
    cin>>k;
    long a;
    vector<int> b(k); 
    for(int i=0; i<n;++i)
        {
        cin>>a;
        a=a%k;
        ++b[a];
    }
    int t=0;
    if (b[0]!=0) ++t;
    if(k%2==0&&b[k/2]!=0) ++t;
    int j=0;
    if(k%2==0) j=k/2;
    else j=k/2 +1;
    for(int i=1;i<j;++i)
        { if(b[i]>=b[k-i]) t=t+b[i];
         else t=t+b[k-i];
         
        
    }
    cout<<t;
    return 0;
}
