#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    if (n<m){
            printf("n is lesser");
        }
        else if (n==m){
            printf("equal");
        }
        else{
            printf("n is greater");
        }
    return 0;
}