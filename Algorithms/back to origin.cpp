#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
   long a,b;
    cin>>a>>b;
    long t;
    long c,d;
    cin>>t;
    while(t--)
        {
        cin>>c>>d;
        a=a-c;
        b=b-d;
    }
    cout<<a<<" "<<b;
    return 0;
}
