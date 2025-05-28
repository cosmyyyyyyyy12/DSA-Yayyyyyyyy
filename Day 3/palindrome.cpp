#include <iostream>
using namespace std;
int main() {
    int rev=0,r,a,x;
    cout << "enter a number to check palindrome:";
    cin >> x;
    if (x<0){
        cout << "num is not palindrome";
    }
    else{
        a=x;
        while (x>0){
            r = x%10;
            rev = rev*10+r;
            x = x/10;
        }
        if (a==rev){
            cout << "num is palindrome";
        }
        else{
            cout << "num is not palindrome";
        }
    }
return 0;
}
