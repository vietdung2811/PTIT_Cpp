/*A number is called a special even number, if it is even and all digits are even. Write a program to check if a given number is a special even number.*/
#include <bits/stdc++.h>

using namespace std;

int evenCheck(long long a){
    int i,cDigit=0,cEven=0;
    while(a){
        i=a%10;
        a/=10;
        cDigit++;
        if (i%2==0){
            cEven++;
        }
    }
    if (cDigit==cEven){
        return 1;
    }
    else return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if (evenCheck(n)==1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}