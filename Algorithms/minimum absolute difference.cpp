#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
long k; cin>>k;
string c="hackerrank";
    while(k--)
        {
        string s;
        cin>>s; long j=0;
        for(int i=0;i<s.length();i++)
            {if(c[j]==s[i]) j++;
             
            
        }
        if(j>8) cout<<"YES";
        else cout<<"NO"; cout<<endl;
        
    }
 return 0;
}
