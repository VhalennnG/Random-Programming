#include <iostream>
using namespace std;
 
int main(int argc, char const *argv[]){
    string a, b;
    cin >> a >> b;
    string s(a.size(),'0');
    string t(b.size(),'0');
    s += b;
    t += a;
    cout << (t > s ? '>' : t==s ? '=' : '<');
    return 0;
}
