#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q; cin >> n >> q;
    vector<vector<int>> store;
    vector<int> each_row;
    int input;
    for(int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        each_row.clear();
        for(int i = 0; i < s; i++)
        {
            cin >> input;
            each_row.push_back(input);
        }
        store.push_back(each_row);
    }
    int r, c;
    for(int i = 0; i < q; i++)
    {
        cin >> r >> c;
        cout << store[r][c] << endl;
    }
    return 0;
}
