#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 long long n,e;
    cin>>n>>e;
    long long x,y;
    cin>>x>>y;
    long long count=0;
    count+=n+n+-1-1;
    count+=(n-max(x,y))+(min(x,y)-1)+(min(n-x,y-1))+(min(x-1,n-y));;
    
 //  cout<<count<<" ";
    long long aa,bb,cc,dd,ee,ff,gg,hh;
    aa=bb=cc=dd=ee=ff=gg=hh=0;
    while(e--)
        {
        long long a,b;
        cin>>a>>b;
    a=a-x; b=b-y;
        if(a>0&&b==0) {if(aa==0) aa=(n-x-a+1); else aa=max(aa,(n-x-a+1));}
        if(a>0&&b>0&&a==b) {long long s=(n-max(x,y)); if(bb==0) bb=(n-max(x,y)-a+1); else bb=max(bb,(n-max(x,y)-a+1));}
        if(a==0&&b>0) {if(cc==0) cc=(n-y-b+1); else cc=max(cc,(n-y-b+1));}
     
        if(a<0&&b>0&&abs(a)==abs(b)) {if(dd==0) dd=((min(x-1,n-y))+a+1); else dd=max(((min(x-1,n-y))+a+1),dd);}
     
        if(a<0&&b==0) {if(ee==0) ee=(x-1+a+1); else ee=max(ee,(x-1+a+1));}
       
        if(a<0&&b<0&&abs(a)==abs(b)) {if(ff==0) ff=((min(x,y)-1)+a+1); else ff=max(((min(x,y)-1)+a+1),ff);}
        if(a==0&&b<0) { if(gg==0) gg=(y-1+b+1); else gg=max(gg,(y-1+b+1));}
        if(a>0&&b<0&&a==abs(b)) {if(hh==0) hh=(min(n-x,y-1)-a+1); else hh=max((min(n-x,y-1)-a+1),hh);}
        
    }
    
 /*   cout<<aa<<" ";
    cout<<bb<<" ";
    cout<<cc<<" ";
    cout<<dd<<" ";
    cout<<ee<<" ";
    cout<<ff<<" ";
    cout<<gg<<" ";
    cout<<hh<<" ";
    //cout<<aa<<" ";
   */ 
    cout<<count-aa-bb-cc-dd-ee-ff-gg-hh;
    return 0;
}
