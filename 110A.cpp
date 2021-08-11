#include <iostream>
using namespace std;

int main(){

    long long n;
    cin >> n;

    int c = 0;
    while (n != 0)
    {
        int l = n%10;
        n = n/10;
        
        if(l == 4 || l == 7){
            c++;
        }

    }

    
    if(c == 7 || c == 4)
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;

    return 0;
}