#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
long a; bool leap=false;
    cin>>a;
    if(a==1918) cout<<"26.09.1918";
else{   if(a>1918)
        { if(a%4==0&&a%100!=0) leap=true;
         if(a%400==0) leap=true;
         
        }
    else if(a%4==0) leap=true;
        if(leap==true) cout<<"12.09."<<a;
        else cout<<"13.09."<<a;
}   
    
    return 0;
}
