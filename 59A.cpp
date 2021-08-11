#include <iostream>
#include <cctype>
#include <locale>

using namespace std;

int main(){

    string s;
    cin >> s;

    int m = s.length() /2;
    int u = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(isupper(s[i])){
            u++;
        }
    }

    if(u > m)
        
        for (int i = 0; i < s.length(); i++)
        {
            char c = toupper(s[i]);
            cout<<c;
        }
    else
        for (int i = 0; i < s.length(); i++)
        {
            char c = tolower(s[i]);
            cout << c;
        }

    

    return 0;
}