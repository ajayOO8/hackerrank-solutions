#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
long t=0;
    cin>>t;
    vector<long> a(t);
    for(long i=0;i<t;i++)
{long n,m,s;
 cin>>n>>m>>s;
 long k;
 k=m+s-1;
 if(k>n)
 {if(k%n==0) k=n;
  else k=k%n;
 }
 a[i]=k;
 
 
        
    }
 long   i=0;
    while(i<t)
   { cout<<a[i]<<"\n";
i++;}
        return 0;
}
