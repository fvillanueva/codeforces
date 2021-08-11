#include <iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        int d=0;
        while (s[i] == s[i+1])
        {
            d++;
            i++;

            if(d>=6){
                cout << "YES";
                return 0;
            }

        }
        
    }

    cout << "NO";
    

    return 0;
}