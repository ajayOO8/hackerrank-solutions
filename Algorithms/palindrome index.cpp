#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        long t;
    cin>>t;
    bool flag=true;
    while(t--)
        {long sum=0; bool flag=true;
        string s;
        cin>>s;
        long len=s.length()-1,m;
        //if(len%2!=0) m=len/2;
        for(long i=0;i<(s.length())/2;i++)
            {
           if(s[i]!=s[len-i])
               {
               if(s[i]==s[len-i-1]&&s[i+1]==s[len-i-1-1]) {cout<<len-i<<endl; flag=false;break;}
               if(s[i+1]==s[len-i]&&s[i+2]==s[len-i-1]) {cout<<i<<endl; flag=false;break;}
           }
        }
        if(flag) cout<<"-1"<<endl;
    }
    
    return 0;
}
