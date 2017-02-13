#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int t=0;
    cin>>t;
    int f=0;
    vector<int> b(t);
    for(int i=0;i<t;++i)
        { cin>>f;
           int p=0;
         vector<int> z(f); 
         for(int j=0;j<f;++j)
             { cin>>z[j];
         int m=0;
            
              while(m<j)
                  {
                if(z[m]>z[j]) ++p;
                  ++m;
                  }
                  
              }
        if(p%2==0) b[i]=1;      
         }
    for(int i=0;i<t;i++)
        {
        if(b[i]) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
         
    
      
    return 0;
}
