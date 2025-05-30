#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,i;
    cout << "enter no. of elements you want to enter:";
    cin >> n;
    vector <int> nums(n);
    cout << "enter the array:";
    for (i=0;i<n;i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    for (i=0;i<n-1;i+=2){
        if (nums[i]!=nums[i+1]){
            cout << nums[i]<< " ";
            return 0;
            }
        }
    if (i == n-1){
        cout << nums[i];
        return 0;
    }
}