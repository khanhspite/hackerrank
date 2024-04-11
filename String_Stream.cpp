#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

std::vector<int>str_val(std::string str){
    std::stringstream ss(str);
    std::vector<int> reasult;
    char ch;
    int tmp;
    
    while(ss >> tmp){
        reasult.push_back(tmp);
        ss >> ch;
    }    
    return reasult;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::string str;
    std::cin>>str;
    
    std::vector<int>interger = str_val(str);
    for(int i = 0; i < interger.size(); i++){
        std::cout<<interger[i]<<std::endl;
    }
    return 0;
}
