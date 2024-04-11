#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

std::vector<std::string> tag;
std::map<std::string, std::string> attrs;

void insert_arr(std::string& name, std::string& val){
    std::string full;
    for(std::string& str : tag)
        full += str + ".";
    full.pop_back();
    full += "~" + name;
    attrs[full] = val;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    std::cin>>n>>q;
    for(int i = 0; i< n; i++){
        char c; 
        std::cin>>c; // <
        if(cin.peek() == '/'){
            std::string cn;
            std::cin>>cn;
            tag.pop_back();
        }
        else{
            std::string name;
            std::cin>>name; // value
            
            if(name.back() == '>'){
                name.pop_back();
                tag.push_back(name);
            }
            else{
                tag.push_back(name);
                
                while(1){
                    std::string attr_name, attr_val, eq;
                    std::cin>>attr_name>>eq>>attr_val;
                    if(attr_val.back()=='>'){
                        attr_val.pop_back();
                        attr_val.pop_back();
                        attr_val = attr_val.substr(1);
                        insert_arr(attr_name, attr_val);
                        break;
                    }
                    else {
                        attr_val.pop_back();
                        attr_val = attr_val.substr(1);
                        insert_arr(attr_name, attr_val);
                    }
                }
            }
        }
    }
    
    for(int i = 0; i < q; i++){
        std::string qu;
        std::cin>>qu;
        if(attrs.find(qu) != attrs.end()){
            std::cout << attrs[qu] <<std::endl;
        }
        else{
            std::cout << "Not Found!" <<std::endl;
        }
    }
    
    return 0;
}
