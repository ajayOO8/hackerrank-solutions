#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 1000000
using namespace std;


int main() {
    int n;
    char s[MAX];
    cin>>n;
    while(n--)
        {
        cin>>s;
        int len;
        len=strlen(s);
        if(next_permutation(s,s+len))
            cout<<s<<endl;
        else
            cout<<"no answer"<<endl;
    }
    return 0;
}#include <map>
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
    long long t;
    cin >> t;
   // t--;
    long k=3,f=3;
    while(t>f)
        {k=k*2;
        f=f+k;
        
    }
    
    /*long long r=6;long long k=3;
    
    long long i=1;
    while(i!=t)
        {
        if(i==t)
            {
            break;
        }
        if(k==1)
            { k=r;
             r=r*2;
             i++;
            
        }
        else    if((i+k-1)<t)
            {i=i+k-1;
             k=1;            
        }
        
        else {k--; i++;}
    }
    
    cout<<k;
    */
    cout<<f-t+1;
    return 0;
}