#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
    bool check(string s)
{
    for(int i = 0; i < s.size()/ 2; i++)
    {
        if(s[i] != s[s.size() - i - 1]) return false;
    }
    return true;
}
int palindromeIndex(string s) {
    int n = s.size();
    for(int i = 0; i < n / 2; i++)
    {
        if(s[i] != s[n - i -1])
        {
            string tmp = s;
            tmp.erase(i,1);
            if(check(tmp)) return i;
            else return n - 1 - i;   
        }
    }
    return -1;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

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
