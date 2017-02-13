#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 long a;
    cin>>a;
    int arr[6]={0,0,0,0,0,0};
long k;    while(a--)
        {cin>>k; arr[k]++;}
    long j;
   long max=0; for(int i=1;i<=5;i++)
   {if(max<arr[i]) {j=i;max=arr[i];}
        
    }
    cout<<j;
    return 0;
}
