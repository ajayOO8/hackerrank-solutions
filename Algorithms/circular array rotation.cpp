#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
   
    int j=k,temp,temp1;
 /*   while(k)
    { temp=a[0];temp1=a[0];
        for(j=1;j<n;j++)
            {temp=a[j];
             a[j]=temp1;
             temp1=temp;
                    }a[0]=temp1;
     k--;}
   */
  //y[0]=a[n-1];
    
   
        
    vector<int> z(q);
    for(int i = 0; i < q; i++){
        
        cin >> z[i];
    } k=k%n;
     for(int i = 0; i < q; i++){
        int temp1=z[i]-k,temp;
         if(temp1>=0) temp =temp1 % n;
         else   temp=temp1+n;
       cout<< a[temp]<<'\n';
    }
    
    return 0;
}
