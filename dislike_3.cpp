/*Nam doesn't like integers that are divisible by 3 or end with the digit 3 in their decimal representation. Integers that meet both conditions are disliked by Nam, too.

Nam starts to write out the positive (greater than 0) integers which he likes: 1,2,4,5,7,8,10,11,14,16,…*/
#include <bits/stdc++.h>

using namespace std;

int A[1001];

int main(){
   int t;
   int ans=1;
    for (int i=1;i<2000;i++){
        if (i%3!=0 && i%10!=3){
            A[ans++]=i;
        }
    }
    int n;
    cin>>n;
    cout<<A[n];
    return 0;
}