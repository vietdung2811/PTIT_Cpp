/*Given two non-negative integers N and K, your task is to check if this equation holds true: K = 1 % K + 2 % K + ... + N % K.

Answer 1 if the equation is true, or 0 if not.*/
#include <bits/stdc++.h>

using namespace std;

int sumRe(int n,int k){
  int s=0;
  for (int i=1;i<=n;i++){
    s=s+i%k;
  }
  return s;
}

int main(){
  int t,n,k;
  cin>>t;
  while(t--){
    cin>>n>>k;
    if (sumRe(n,k)==k){
      cout<<"1";
    }
    else cout<<"0";
    cout<<endl;
  }
  return 0;
}
