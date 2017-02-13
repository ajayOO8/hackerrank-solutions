#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long t;
      cin>>t;
   long a[t+1];
    for(long f=0;f<t;f++) 
{        cin>>a[f];
    
}
 // cout<<a[0]<<a[1]<<a[2]<<a[3];
    long k=0;
    bool flag=0;
    long l=2;
    for(long i=2;1;)
        { k=0;
        for(long j=0;j<t;j++)
        {if((a[j]%i)!=0)
        {k++;}
        // cout<<a[j]<<" "<<i;
        }
      //  cout<<k<<" ";
        if(k==1)
            {cout<<i<<"\n"; break;}
         if(k==0) { flag=true;  }
            if(flag==true)
                {
             i=i*l;
                l++;
            }
         if(flag==false) i++;
    }
    return 0;
}
