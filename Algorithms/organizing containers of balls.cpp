#include <cmath>
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
long t;
    cin>>t;
    while(t--)
        {
        long n,k;
        cin>>n;
        set<long> have;
        vector<long> a[n];
        vector<long> total(n);
        vector<long> totalf(n);
        for(long i=0;i<n;i++)
            {
            for(long j=0;j<n;j++)
          {
            cin>>k;
                a[i].push_back(k);
                totalf[j]+=k; total[i]+=k;
        }
        
        }
    bool flag=true;
        for(long i=0;i<n;i++)
            {long j=0;
            for(;j<n;j++)
        {if(totalf[i]==total[j])
            {if(have.find(j)==have.end()) 
                {have.insert(j); break;}
            }
                
            }
            if(j==n) {flag=false; break;}
            }
    
    if(flag) cout<<"Possible\n";
    else cout<<"Impossible\n";}
    
    return 0;
}
