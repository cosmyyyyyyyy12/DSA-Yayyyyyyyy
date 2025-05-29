#include <iostream>
using namespace std;
int main() {
    int rev=0,r,a,x;
    cout << "enter a num to be reverse:";
    cin >> x;
        a=x;
        while (x>0){
            r = x%10;
            rev = rev*10+r;
            x = x/10;
        }
        cout << "rev num:" << rev;
return 0;
}
