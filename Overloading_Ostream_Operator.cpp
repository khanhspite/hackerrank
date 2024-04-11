#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Get_name{  
public:
    Get_name(std::string first_name, std::string last_name) : fst_name(first_name), lst_name(last_name) {}

    const string& get_first_name() const {
      return fst_name;
    }
    const string& get_last_name() const {
      return lst_name;
    }
private:
    std::string fst_name;
    std::string lst_name;
};
ostream& operator<<(ostream& os, const Get_name& p) {
    os << "first_name=" + p.get_first_name() + ",last_name=" + p.get_last_name();
    return os;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    std::string _1st_name;
    std::string _lst_name;
    std::string event_;
    std::cin >> _1st_name >> _lst_name >> event_;
    auto p = Get_name(_1st_name, _lst_name);
    std::cout << p << " " << event_ << std::endl;
    return 0;
}
