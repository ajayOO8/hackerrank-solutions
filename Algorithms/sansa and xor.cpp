#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long t=0,n;
    cin>>t;
    while(t--)
        {cin>>n;
         vector<unsigned long > a(n);
         
         for(int i=0;i<n;i++)
        {cin>>a[i];
         
             
         }
         if(n%2==0) cout<<"0\n";
         else {long m=a[0];
               for(long i=2;i<n;i+=2)
                   m=a[i]^m; cout<<m<<"\n";}
    }
    return 0;
}
