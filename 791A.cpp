#include <iostream>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    int y = 0;
    if (a == b)
        y=1;
        
    while (a < b)
    {
        a = a*3;
        b = b*2;
        y++;

        if (a == b)
            y+=1;
    }
    
    cout << y << endl;

    return 0;
}