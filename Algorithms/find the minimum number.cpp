#include<bits/stdc++.h>
using namespace std;
int main()
{string min="min(int, ";
string intt="int";
string pclose=")";
long n;
cin>>n;
cout<<min;
for(long i=2;i<=n;i++)
{if(i==n)cout<<intt;
else cout<<min;
}
for(long i=1;i<n;i++)
cout<<pclose;

return 0;
}
