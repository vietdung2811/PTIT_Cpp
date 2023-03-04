/*Given two natural numbers n and m, your task is to determine if it is possible to split the integers from 1 to n into two sets, such as the difference of two sets’ sums is m, and those sums are coprimal.*/

#include <bits/stdc++.h>

using namespace std;

bool isSplitable(int a, int b){
  int sum,s1,s2;
  sum=(1+a)*a/2;
  s1=(sum+b)/2;
  s2=sum-s1;
  if (sum<b)
    return false;
  if (s1+s2==sum&&s1-s2==b)
    return (__gcd(s1,s2)==1);
  return false;
}

int main(){
  int t;cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    if (isSplitable(a,b)){
      cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
  }
  return 0;
}
