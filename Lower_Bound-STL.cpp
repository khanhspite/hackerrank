#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    std::cin>>n;
    std::vector<int> a(n);
    for(int i = 0; i< n; ++i){
        std::cin>>a[i];
    }
    int m;
    std::cin>>m;
    for(int i = 0; i< m; ++i){
        int k;
        std::cin>>k;
        auto it = lower_bound(a.begin(), a.end(), k);
        if(*it == k)
            std::cout<<"Yes "<<it - a.begin() + 1<<std::endl;
        else
            std::cout<<"No "<<it - a.begin() + 1<<std::endl;
    }
    return 0;
}
