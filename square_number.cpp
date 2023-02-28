/*Given 2 positive integers a and b. Find the sum of the perfect squares in the range a to b. Know that the square is the square of a natural number.*/
#include <bits/stdc++.h>

using namespace std;

int isSqrt(int a){
  int k;
  k=sqrt(a);
  if (k*k==a){
    return 1;
  }
  return 0;
}

int main(){
  int a,b,s=0;
  cin>>a>>b;
  for (int i=a;i<=b;i++){
    if (isSqrt(i)==1){
      s=s+i;
    }
  }
  cout<<s<<endl;
  return 0;
}
