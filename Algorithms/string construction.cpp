#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long t;
    cin>>t;
    while(t--)
        {long r=0;
        string s;
        cin>>s;
         vector<char> m;
        for(long i=0;i<s.length();++i)
            {
             if(find(m.begin(),m.end(),s[i])==m.end()) m.push_back(s[i]);
            
        }
        cout<<m.size()<<endl;
    }
    return 0;
}
