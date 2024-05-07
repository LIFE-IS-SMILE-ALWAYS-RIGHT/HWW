#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    set <int> res;
    while(q--)
    {
        int y, x;
        cin >> y >> x;
        
        if(y == 1) res.insert(x);
        else if(y == 2) res.erase(x);
        else if(y == 3 && res.find(x) != res.end()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
       
    return 0;
}
