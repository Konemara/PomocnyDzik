#include <bits/stdc++.h>
using namespace std;

int main(){
    short a, b, c; cin >> a >> b >> c;
    short tab[3];
    tab[0] = a; tab[1] = b; tab[2] = c;
    sort(tab, tab + 3);
    if(tab[0] != 0)
        cout << tab[0] << tab[1] << tab[2];
    else if(tab[1] != 0){
        cout << tab[1] << tab[0] << tab[2];
    }
    else{
        cout<< tab[2] << tab[0] << tab[1];
    }
}
