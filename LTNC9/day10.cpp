#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void Decimal_to_Binary(int n)
{
    int BinaryNum[50];
    
    int i = 0;
    while (n > 0)
    {
        BinaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    int tmpCount = 0;
    int maxCount = 0;
    
    for (int j = i - 1; j >= 0; j--)
    {
        BinaryNum[j] == 0 ? tmpCount = 0 : tmpCount = tmpCount + 1;
        
        if (tmpCount > maxCount)
        {
            maxCount = tmpCount;
        }
    }
    
    
    
    cout << maxCount;
    
    
}


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    Decimal_to_Binary(n);
    
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
