
#include <iostream>
using namespace std;
 
void solve(){
    int n, m, x1, x2, y1, y2, z = 0;
    cin >> n >> m;
    while(n--){
        cin >> x2 >> x1 >> y1 >> y2;
        if(x1==y1) z = 1;
    }
    cout << (z==1 && m%2==0 ? "YES\n" : "NO\n");
}
 
int main(int argc, char const *argv[]){
    int t; cin >> t; 
    while(t--) solve();
    return 0;
}
