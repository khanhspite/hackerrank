/*#include<bits/stdc++.h>

int main(){
  int n, a[100];
  int max = 0;
  int min = 1000000;
  std::cin >> n;
  for(int i = 0; i < n; i++){
    std::cin>>a[i];
  }
  for(int i = 0; i < n; i++){
    if(a[i] > max){
      //std::cout<<a[i];
      max = a[i];
    }
    if(a[i] < min){
      //std::cout<<a[i];
      min = a[i];
    }
  }
  std::cout<< max - min;
}*/

#include<bits/stdc++.h>

#define toStr(str) #str
#define foreach(v, i) for(int i = 0; i < v.size(); i++)
#define io(vec) std::cin >> vec
#define FUNCTION(a, b)
#define minimum(a, b) a = (a < b) ? a : b
#define maximum(a, b) a = (b < a) ? a : b
#define INF 0
#define INF1 10000000


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    foreach(v, i){
        io(v)[i];
    }
    int max = INF;
    int min = INF1;
    foreach(v, i){
        maximum(max, v[i]);
        minimum(min, v[i]);
    }
    //std::cout << max <<" " << min;
    int ans = max - min;
    std::cout<<"Result = "<<ans;
    return 0;
}
