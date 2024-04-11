#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

void printKmax(int arr[], int n, int k){
    std::deque<int> mydeque(arr, arr + k);
    int max = *std::max_element(mydeque.begin(), mydeque.begin()+k);
    std::cout << max << ' ';
    for(int i = k; i< n; i++){
        int front = mydeque[0];
        mydeque.push_back(arr[i]);
        mydeque.pop_front();
        if(arr[i] > max)
            max = arr[i];
        else if(max == front)
            max = *std::max_element(mydeque.begin(), mydeque.begin()+k);
        std::cout << max << ' ';
    }
    std::cout << std::endl;
}

int main(){
    int n, k;
    int arr[n];
    int t;
    std::cin >> t;
    while(t--){
        std::cin>> n >> k;
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }
        printKmax(arr, n, k);
    }
    return 0;
}

