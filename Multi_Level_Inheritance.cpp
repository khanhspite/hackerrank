#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class A{
public:
    void a(){
        std::cout << "I am a triangle\n";
    }
};

class B : public A{
public:
    void b(){
        std::cout << "I am an isosceles triangle\n";
    }
};

class C : public B{
public:
    void b(){
        std::cout << "I am an equilateral triangle\n";
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    C print2;
    print2.b();   
    B print1;
    print1.b();
    print1.a();
    return 0;
}
