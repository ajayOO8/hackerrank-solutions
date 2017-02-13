#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long n,k;
    cin>>n>>k;
    vector<long> a(n);
long max=-9999;
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        if(a[i]>max) max=a[i];
    }
    if(max>k) cout<<max-k;
    else cout<<"0";
    return 0;
}
