#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    vector<int>::iterator it;
    
    int q;
    cin >> q;
    while(q > 0)
    {
        int x;
        cin >> x;
        it = lower_bound(a.begin(), a.end(), x);
        if(*it == x)
        {
            cout << "Yes " << it - a.begin() + 1 << endl;
        }
        else cout << "No " << it - a.begin() + 1 << endl;
        q--;
    }
       
    return 0;
}
