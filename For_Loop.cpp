#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
        int first, second;
    std::string t[9]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    std::cin>>first>>second;
    
    for(int i = first; i <= second; i++){
        if(i <= 9){
            std::cout<<t[i-1]<<std::endl;
        }
        else std::cout<<((i%2==0)?"even":"odd")<<std::endl;
    }
}
