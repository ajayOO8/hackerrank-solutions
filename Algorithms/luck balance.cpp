#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long long t, k,sum=0,i=0;
    
    cin>>t; cin>>k;
   vector<long long> as;
    while(t--)
        {
        long a,b;
        cin>>a; cin>>b;
        if(b==0) 
            sum=sum+a;
        else
       as.push_back(a);
        
    }
    sort(as.begin(),as.end());
    for( long long j=0;j<as.size();j++)
        {if(as.size()<k) sum=sum+as[j];
        else if(j<as.size()-k) sum=sum-as[j];
         else sum=sum+as[j];
       //cout<<sum<<" ";
    }
    cout<<sum;
    return 0;
}
