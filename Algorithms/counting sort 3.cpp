#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int n,*array,numbers[100] = {0};
    std::string data;
    std::cin>>n;
    array =  new int[n];
    for(int i=0;i<n;i++) {
        std::cin>>array[i];
        numbers[array[i]]++;
        std::cin>>data;
    }
    for(int i=0;i<100;i++) {
        int sum = 0;
        for(int j=0;j<=i;j++)
            sum+=numbers[j];
        std::cout<<sum<<" ";
    }
    return 0;
}