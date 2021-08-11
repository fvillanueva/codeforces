#include <iostream>
using namespace std;

int main(){

    string a;
    cin >> a;

    int repetido = 0;
    int aparece = 1;
    for (int i = 0; i < a.length(); i++){
        
        for (int j = 0; j < i; j++){
        
            if (a[i] == a[j]){
                repetido++;
            }
            
        }
        
        if (repetido ==  0)
            aparece++;


        repetido = 0;

    }

    if (aparece%2 == 0)
        cout << "IGNORE HIM!"<<endl;
    else
        cout << "CHAT WITH HER!" << endl;
    

    return 0;
}

