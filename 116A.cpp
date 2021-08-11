#include <iostream>
using namespace std;

int main(){

    int k;
    cin >> k;
    int a,b;
    int m = 0;
    int actual;
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        if(i == 0){
            m = b;
            actual = b;
        }else{
            actual = actual - a + b;
            if(actual > m)
                m = actual;
        }
    }

    cout << m;    

    return 0;
}