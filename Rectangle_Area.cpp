#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class acreage{
private:
    int width;
    int height;
public:
    void read_input() {
        std::cin >> width >> height;
    }
    void display() {
        std::cout << width <<' '<< height<< std::endl;
        std::cout << width * height;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int result;
    acreage a;
    a.read_input();
    a.display() ;   
    return 0;
}
