#include <iostream>
using namespace std;


int main() {
   int n;
    cin>>n;
    int m;
    int c;
    cin>>m;
    cin>>c;
    int r=m*c;
    bool flag=1;
    int k;
    for(int i=0;i<n;++i)
        {
        cin>>k;
        if(k>r) {flag=0;break;}
        
    }
    if(flag) cout<<"Yes";
    else cout<<"No";
    return 0;
}
