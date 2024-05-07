#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, string> PhoneBook;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        string name;
        string phone;
        cin >> name;
        cin >> phone;
        PhoneBook[name] = phone;
    }
    
    map<string, string>::iterator check;
    string query;
    while(cin >> query)
    {
        check = PhoneBook.find(query);
        if(check != PhoneBook.end())
        {
            cout << check->first << "=" << check->second << endl;   
        }
        else{
            cout << "Not found" << endl;
        }
        
    }    
    return 0;

}
