#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    vector<int> z(26);
    string k;
    cin>>k;
    int f=0;
for(int i=0;i<k.length();++i)
    {f=k[i]-97;
 
     ++z[f];
}
 float r=0;
    float m=0;
    vector<int> zz(26);
for(int i=0;i<26;++i)
{ if(z[i]!=0) {//cout<<(char)(i+97)<<" "<<z[i]<<"\n";
               zz[m++]=z[i];}
} 
    
for(int i=1;i<m;++i)
    { for(int j=i;j<m;++j)
    {if(zz[i]!=zz[j]) {//cout<<i<<" "<<j<<"\n";
        r++;} } 
} 
    
    if(r==(m-2)||r==0||r==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
