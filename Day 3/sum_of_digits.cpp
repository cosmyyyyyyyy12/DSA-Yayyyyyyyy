#include <iostream>
using namespace std;
int main() {
    int n,i,sum = 0;
    cout << "enter the number:";
    cin >> n;
    while (n>0){
        sum += n%10;
        n /= 10;
    }
    cout << sum;
    return 0;
}