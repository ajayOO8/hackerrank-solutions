#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long ver;
    long layer;
    cin>>ver; cin>>layer;
    if(layer>ver) cout<<"-1";
    else if(layer==2&& ver>2) cout<<"-1";
    else{
        long edge=0;
        ver=ver-layer;
        edge=edge+layer-1;
        edge=edge+ver*2;
        cout<<edge;
        
    }
    return 0;
}
