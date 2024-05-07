#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tests;
    scanf("%d", &tests);
    char str[10000];
    for(int k = 0; k < tests; k++) {
        scanf("%s", str);

        for(int i = 0; i < strlen(str); i += 2) {
            printf("%c", str[i]);
        }
        cout << " ";
        for(int i = 1; i < strlen(str); i += 2) {
            printf("%c", str[i]);
        }
        printf("\n");
    }
    
    return 0;
}
