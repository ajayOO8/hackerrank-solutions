#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long lengthh(long x)
    { long i=0; if (x==0) return 1;
     while(x) {x=x/10; i++;}
     return i;
}

bool checkk(string s, long n)
    {long j=0; long x,y; x=y=0; 
    for(long i=0;i<s.length();)
    { j=0; y=0;
     
     if(x==0){
         while(i<n) x=x*10+(int)s[i++]-48; continue;}
     x++;
     j=lengthh(x);
     
     for(j;j;j--) y=y*10+(int)s[i++]-48; 
     if(x==y) x=y;
     else return false;
    // if(!(i+n<s.length())) return false;
     //for(j;j<=n;j++) y=y*10+(int)s[i++]-48; 
     //if(x==0) {x=y; continue;}
     //if((x+1)==y) {x=y;continue;} 
      // else return false;
    
    }

   return true; }

int main() {
    long t=0;
    cin>>t;
    while(t--)
        {
        string s;
        cin>>s;
        bool check=false;
        long i=1,n=s.length();
        if(s[0]=='0') {cout<<"NO"<<endl; continue;}
        while(n/i>=2)
    {  
        check=checkk(s,i);
   
            if(check==true) break;
     i++;
            
        }
        
       if(check==true)  {long temp=0; for(long j=0;j<i;) temp=temp*10+(int)s[j++]-48;
                          cout<<"YES "<<temp<<endl;}
        else cout<<"NO"<<endl;
    }
    return 0;
}
