#include <iostream>
using namespace std;
int main(){
    int n,max;
    cout << "enter no. of elements you want to enter:";
    cin >> n;
    int arr[n],i;
    for (i=0;i<n;i++){
        cin >> arr[i];
    }
    max = arr[0];
    for (i=1;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    cout << "max:" << max;
}