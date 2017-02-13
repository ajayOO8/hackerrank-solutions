#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 unsigned long long a;
    cin>>a;
   unsigned long long c=0;
 while(a>0)
       {if(a%2==1) ;//c++;
           if(a%2==0) {c++;}
     a=a/2;
 } 
    
    cout<<(unsigned long long)pow(2,c);
    return 0;
}
