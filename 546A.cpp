#include <iostream>
using namespace std;

int main(){

    int w,n,k;
    cin >> k >> n >> w;

    int t = 0;
    for (int i = 1; i <= w; i++)
    {
        t += k * i;
    }
    

    if(t - n > 0)
        cout << t-n << endl;
    else
        cout << "0\n";

    return 0;
}