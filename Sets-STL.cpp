#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> p;
    int n;
    std::cin >> n;
    while(n--){
        int q, x;
        std::cin>> q >> x;
        switch (q) {
            case 1:
                p.insert(x);
                break;
            case 2:
                p.erase(x);
                break;
            case 3:
                auto itr = p.find(x);
                if(itr == p.end())
                    std::cout << "No" << std::endl;
                else 
                    std::cout << "Yes" << std::endl;
                break;
        }
    }
    return 0;
}
