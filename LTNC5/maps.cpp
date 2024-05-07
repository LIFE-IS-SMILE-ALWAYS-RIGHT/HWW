#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    map <string, int> res;
    while(q--)
    {
        int type;
        string X;
        cin >> type >> X;
        if(type == 1)
        {
            int Y;
            cin >> Y;
            res[X] += Y;
        }
        else if(type == 2) res.erase(X);
        else if(type == 3) cout << res[X] << endl;
    }   
    return 0;
}
