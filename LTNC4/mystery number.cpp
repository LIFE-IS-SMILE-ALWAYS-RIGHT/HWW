#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    // Reading first set of integers
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sum ^= x;
    }

    // Reading second set of integers
    for (int i = 0; i < n + 1; ++i) {
        int x;
        cin >> x;
        sum ^= x;
    }

    cout << sum << endl;

    return 0;
}

