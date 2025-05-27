#include <iostream>
using namespace std;
int main() {
    int n,i,fac=1;
    cout << "print the value of n:";
    cin >> n;
    for (i=1;i<=n;i++){
        fac*=i;
    }
    cout << fac;
    return 0;
}