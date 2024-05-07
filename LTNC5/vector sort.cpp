#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector <int> arr;
    int n;
    cin >> n;
    while(n > 0)
    {
        int i;
        cin >> i;
        arr.push_back(i);
        n--;
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i : arr) cout << i << " ";
    
    
    return 0;
}
