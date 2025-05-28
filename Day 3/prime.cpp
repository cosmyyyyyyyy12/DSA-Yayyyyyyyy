#include <iostream>
using namespace std;
int main() {
    int n,i,p = 0;
    cout << "enter the number:";
    cin >> n;
    if (n<2){
        p++;
    }
    else{
        for (i=2;i<n/2;i++){
            if (n%i==0){
                p++;
                break;
            }
        }
    }
    if (p!=0){
        cout << "number is not prime";
    }
    else {
        cout << "number is prime";
    }
    return 0;
}