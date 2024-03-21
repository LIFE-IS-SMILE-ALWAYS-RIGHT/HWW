#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k) {
    string ans = "";
    for(char c : s)
    {
        switch (c)
        {
            case 'a'... 'z':
            {
                 int charStart = int(c) - int('a');
                int charRes = (charStart + k) % 26;
                int foo = (int)'a' + charRes;
                char res = (char)foo;
                ans += res;
            }
                break;
            
            case 'A' ... 'Z':
            {
                 int charStart1 = int(c) - int('A');
                int charRes1 = (charStart1 + k) % 26;
                int foo1 = (int)'A' + charRes1;
                char res1 = (char)foo1;
                ans += res1;
            }
                break;
            default:
                ans += c;
                break;
        }
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

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
