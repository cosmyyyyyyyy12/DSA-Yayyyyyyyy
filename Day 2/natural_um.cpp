#include <iostream>
using namespace std;
int main() {
    int n,i,sum=0;
    cout << "print the value of n:";
    cin >> n;
    for (i=1;i<=n;i++){
        sum+=i;
    }
    cout << sum;
    return 0;
}