#include <cmath>
#include <limits.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned int t;
   unsigned int a;
    unsigned int b=UINT_MAX;
 cin>>t;   while(t--)
        {
     cin>>a;   
     a=a^b;
cout<<a<<"\n";
 }
    return 0;
}
