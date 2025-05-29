#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout << "enter no. of elements you want to enter:";
    cin >> n;
    int arr[n],i;
    for (i=0;i<n;i++){
        cin >> arr[i];
    }
    for (i=0;i<n;i++){
        sum+=arr[i];
    } 
    cout << "sum = " << sum;
}