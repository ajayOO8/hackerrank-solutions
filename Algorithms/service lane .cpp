#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    unsigned int N,T;
    cin>>N; 
    cin>>T; 
    unsigned int nStartWidth, nEndWidth;
    
    unsigned int *a = new unsigned int[N];
    for(int i = 0 ; i < N;i++){
        cin>>a[i];
    }
    
    for(int i = 0; i < T;i++){
        cin>>nStartWidth;
        cin>>nEndWidth;
        cout<<*min_element(a+nStartWidth, a+nEndWidth+1)<<endl;
    }
    delete[] a;
    return 0;
}