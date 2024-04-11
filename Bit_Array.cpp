#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long n, s, p, q, v;
    std::cin >> n >> s >> p >> q;
    unsigned long long i, a0 = s, ap = 0, a = s, k = 0;
    v = pow(2, 31);
    for(i = 0; i < n; i++){
        a = (a*p+q);
        a = a%v;
        
        if(a == a0 || a == ap && i != 0){
            k = i+1;
            break;
        }
        ap = a;
    }
    if(i == n)
        k = i;
    std::cout << k;
        
    return 0;
}
