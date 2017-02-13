#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int t;
    cin>>t;
    vector<long> rr(t+1);
    for(int i=1; i<=t;i++)
        cin>>rr[i];
   // for(int i=1; i<=t;i++)
     //   cout<<rr[i]<<" ";
    
    long j=0,k=0;
    for(int i=1;i<=t;i++)
        {
        for( j=1;j<=t;j++)
            {if(rr[j]==i) break;
            
        }
         
        for( k=1;k<=t;k++)
            {if(rr[k]==j) break;
            
        }   
            cout<<k<<"\n";
    }
    //cin>>t;
    return 0;
}
