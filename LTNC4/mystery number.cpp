#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <map>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; ++ i) {
        int x;
        scanf("%d", &x);
        sum ^= x;
    }
    for (int i = 0; i < n + 1; ++ i) {
        int x;
        scanf("%d", &x);
        sum ^= x;
    }
    printf("%d\n", sum);

    return 0;
}
