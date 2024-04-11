#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, b;
    std::cin>>n;
    std::vector<int> a;
    for(int i = 0; i < n; i++){
        std::cin >> b;
        a.push_back(b);
    }
    
    sort(a.begin(), a.end());
    
    for(auto x : a){
        std::cout << x << ' ';
    }
    return 0;
}
