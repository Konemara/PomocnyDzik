#include <bits/stdc++.h>
using namespace std;

int main(){
    string Napis;
    cin >> Napis;
    for(int i = 0; i < Napis.size(); ++i){
        char temp;
        temp = Napis[i];
        switch(temp){
            
            case 'a':
                Napis[i] = '4';
                break;
            
            case 'e':
                Napis[i] = '3';
                break;

            case 'o':
                Napis[i] = '0';
                break;
            
            case 'i':
                Napis[i] = '1';
                break;
            
            case 's':
                Napis[i] = '5';
                break;
            
            default:
                break;
        }
    }
    cout << Napis;
    return 0;
}
