#include <iostream>
using namespace std;

int main(){

    string s,t;
    cin >> s >> t;

    bool x = true;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != t[s.length() - 1 - i])
            x = false;
    }
    
    if(x)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}