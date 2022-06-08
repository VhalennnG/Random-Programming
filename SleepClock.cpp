#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int a, b, c, d, n;
    scanf("%d:%d%d:%d", &a, &b, &c, &d);
    n = (a * 60 + b - c * 60 - d + 1440) % 1440;
    printf("%02d:%02d", n/60, n%60);
    return 0;
}
