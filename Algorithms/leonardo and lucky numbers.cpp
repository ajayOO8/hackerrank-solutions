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
    int q;
    cin >> q;
    vector<int> z(q);
    for(int a0 = 0; a0 < q; a0++){
         float n;
        cin >> n;
        int i=0;
         float f;
        int c;
        while(1)
            { f=(n-7*i)/4;
          //    c=((n-7*i)/4);
        //     cout<<f<<" "<<"\n";
            if(f<0) {z[a0]=0; break;}  if(f==floor(f)) { z[a0]=1; break;}
          
        i++;
            }
    }
    for(int i=0;i<q;i++)
        {
        if(z[i]==1) cout<<"Yes";
       if(z[i]==0) cout<<"No";
        cout<<"\n";
    }
   
    return 0;
}
