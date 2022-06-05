#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int x, y, a, b;
    a = 0, b = 0, x = 0, y = 0;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='5' && x==0){ 
            x = 1; 
            continue;
        }
        if(x==1 && (s[i]=='2' || s[i]=='7')) break;
        a++;
    }
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='0' && y==0){ 
            y = 1; 
            continue;
        }
        if(y==1 && (s[i]=='5' || s[i]=='0')) break;
        b++;
    }
    cout << min(a, b) << '\n';
}

int main(int argc, char const *argv[]){
    int t; cin >>t; 
    while(t--) solve();
    return 0;
}
