#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long t;
    cin>>t;
    while(t--)
        {long a;
        cin>>a;
         if(a<38) cout<<a<<endl;
         else
             {long m= a%5;
             if(m==0||m==1||m==2) cout<<a<<endl;
              else cout<<a+5-m<<endl;
         }
    }
    return 0;
}
