#include <cmath>
#include <cstdio>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  string s;
    cin>>s;
    long t;
    cin>>t;
    set<long> af;
     long f=1;
         char aa=s[0];
         af.insert(aa-96);
     for(int i=1;i<s.length();++i)
             {if(aa==s[i])
             {f++; 
             }else {f=1;aa=s[i];}
              af.insert(f*(s[i]-96));     }
        
    
    while(t--)
        {long a;
         cin>>a;
        if(af.find(a)!=af.end()) cout<<"Yes\n";
         else cout<<"No\n";
        }
  
    return 0;
}
