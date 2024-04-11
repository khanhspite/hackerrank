
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

using namespace std;

class exception_handling{
public:
    int largest_proper_divisor(int n1){
        for(int i = n1/2; i >= 1; --i){
            if(n1 % i == 0)
              return i;
        }
        return -1;
    }
    void process_input(int n2){
        try{
            if(n2 == 1 || n2 == 0){
                throw std::invalid_argument("largest proper divisor is not defined for n=");
            }
            else{
                int d = largest_proper_divisor(n2);
                std::cout<<"result="<< d << std::endl;
            }
        }
        catch(std::invalid_argument& e){
            std::cout<<e.what()<<n2<<std::endl;
        }
        std::cout<<"returning control flow to caller";
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    exception_handling a;
    int new_n;
    std::cin >> new_n;
    a.process_input(new_n);
    return 0;
}
