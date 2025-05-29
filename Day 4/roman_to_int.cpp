#include <iostream>
using namespace std;
int main() {
    int n,i,ans=0;
    string s;
    cout << "enter roman no.:";
    cin >> s;
    n = s.length();
    for (i=0;i<n;i++){
        if (s[i]=='I'){
             ans+=1;
        }
        else if (s[i]=='V'){
            ans+=5;
        }
        else if (s[i]=='X'){
            ans+=10;
        }
        else if (s[i]=='L'){
            ans+=50;
        }
        else if (s[i]=='C'){
            ans+=100;
        }
        else if (s[i]=='D'){
            ans+=500;
        }
        else if (s[i]=='M'){
            ans+=1000;
        }
    }
    for (i=0;i<n;i++){
        if ((s[i] == 'I' && s[i+1] == 'V') || (s[i] == 'I' && s[i+1] == 'X')){
            ans-=2;
        }
        else if ((s[i] == 'X' && s[i+1] == 'L') || (s[i] == 'X' && s[i+1] == 'C')){
            ans-=20;
        }
        else if ((s[i] == 'C' && s[i+1] == 'D') || (s[i] == 'C' && s[i+1] == 'M')){
            ans-=200;
        }
    }
    cout << ans;
}