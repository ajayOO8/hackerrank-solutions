#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long max(long a,long b)
    {
    return a>=b?a:b;
}

int main() {
   long sum, n;
    cin>>sum>>n;
    vector<long> a(n);
    vector<long> b(sum+1);
    for(long i=0;i<n;i++) cin>>a[i];
    b.resize(sum+1,0);
    b[0]=1;
    for(long i=0;i<n;i++)
       { for(long j=1;j<=sum;j++)
        {if(j>=a[i])   
        b[j]=b[j]+b[j-a[i] ];
         //cout<<b[j];
        
        }//cout<<endl;
     // for(long k=0;k<sum+1;k++) cout<<b[k]<<" "; cout<<endl;
       }cout<<b[sum];
    return 0;
}
