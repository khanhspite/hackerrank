#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    private:
        int mark[5];
    public:
        void input(){
            for(int i = 0; i < 5; i++){
                std::cin >> mark[i];
            }
        }
        int caculate(){
            int result = 0;
            for(int i = 0; i < 5; i++){
                result += mark[i];
            }
            return result;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; std::cin >> n;
    Student *s = new Student[n];
    
    for(int i = 0; i < n; i++)
        s[i].input();
    
    int Kristen = s[0].caculate();
    int count = 0;
    
    for(int i = 0; i < n; i++){
        if(s[i].caculate() > Kristen)
            count++;
    }
    
    std::cout<<count;
        
    return 0;
}
