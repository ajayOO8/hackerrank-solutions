#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int calc(vector<int> q)
{
    int ans = 0;
    for (int i = q.size() - 1; i >= 0; i--) {
        if (q[i] - (i + 1) > 2) {
           
            return 0;
        }
        for (int j = max(0, q[i] - 2); j < i; j++)
            if (q[j] > q[i]) ans++;
    }
    return ans;
}

int main() {
  int t=0;
    cin>>t;
    long f=0;
    vector<int> b(t);
    for(long i=0;i<t;++i)
        { cin>>f;
           int p=0;
         vector<int> z(f); 
         for(int j=0;j<f;++j)
             { cin>>z[j];
         int m=0;
        //    tz(z);
            /*  while(m<j)
                  {
                if(z[m]>z[j]) ++p;
                  ++m;
                  }
                  
              }
        if(p%2!=0) b[i]=p;      
         */}
             b[i]=calc(z);
             }
    for(int i=0;i<t;i++)
        {
        if(b[i]!=0) cout<<b[i];
        else cout<<"Too chaotic";
        cout<<"\n";
    }
         
    

    
    return 0;
}
