
#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,b;
        cin>>n>>k>>b;
        if(b>k){
            cout<<-1<<endl;
        }
        ll sum=0;
        vector<ll> a;
        for(ll i=1;i<=b;i++){
            a.push_back(i);
            sum+=i;
        }
        if(sum > n){
            cout<<-1<<endl;
            continue;
        }
        for(ll i=b-1;i>=0;i--){
            ll temp = min(n-sum , k-(b-1-i)-a[i]);
            sum += temp;
            a[i] += temp;
        }
        if(sum != n){
            cout<<-1<<endl;
            continue;
        }
        for(ll i=0;i<b-1;i++) cout<<a[i]<<" ";
        cout<<a[b-1]<<endl;
         
    }
return 0;}