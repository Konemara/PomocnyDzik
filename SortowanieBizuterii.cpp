#include <bits/stdc++.h>
using namespace std;

bool Sort(string a, string b){
    if(a.size() != b.size()){
        return a.size() < b.size();
    }
    return a < b;
}
int main(){
    ios_base::sync_with_stdio(NULL); cin.tie(0);
    short int N; cin >> N;
    string tab[N];
    for(int i = 0; i < N; ++i){
        cin >> tab[i];
    }
    sort(tab, tab + N, Sort);
    for(int i = 0; i < N; ++i){
        cout << tab[i] << endl;
    }
    return 0;
}
