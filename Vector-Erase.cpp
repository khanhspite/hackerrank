#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    std::cin >> n;
    std::vector<int> a;
    int b;
    for(int i = 0; i < n; i++){
        std::cin>>b;
        a.push_back(b);
    } 
    
    int p, f, l;
    std::cin >> p;
    a.erase(a.begin()+p-1);
    std::cin >> f >> l;
    a.erase(a.begin()+f-1, a.begin()+l-1);
    
    int count = 0;
    for(auto x : a){
        count ++;
    }
    std::cout << count << std::endl;
    
    for(auto x : a){
        std::cout << x << ' ';
    }
    return 0;
}

