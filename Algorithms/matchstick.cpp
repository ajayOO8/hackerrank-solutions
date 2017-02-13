#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long n,c;
    cin>>n;cin>>c;
    vector<long > a(c);
    vector<long> b(c);
    for(long i=0;i<c;i++)
        {
        long rr,s;
        cin>>rr>>s;
        a[i]=rr; b[i]=s;
    long temp=0,val,r,ar,aval=a[i];
    
        temp=i-1;
        val=b[i];
        
       while(temp>=0&&val>b[temp])
            {r=b[temp]; ar=a[temp];
            b[temp]=val; a[temp]=aval;
            b[temp+1]=r; a[temp+1]=ar;
             temp--;}
     }
    long sum=0;
   for(int i=0;i<a.size();i++)
       {if(a[i]>n)
       {sum=sum+n*b[i]; break;}
        else {sum=sum+ a[i]*b[i]; n=n-a[i];}
      
   }
    cout<<sum;
    return 0;
}
