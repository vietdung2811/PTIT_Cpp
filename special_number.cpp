//Viettot is a lottery company with huge prizes. At the end of the year, the company decided to randomly select a person whose lottery result was a special number. That day, Leo bought himself a lottery ticket, he was wondering if this is a special number or not. Please help test this boy.

//A special number is defined as a number whose sum of digits is a prime number.
#include <bits/stdc++.h>

using namespace std;

int isPrime(long long int a){
  int s=0;
  for (int i=2;i<=sqrt(a);i++){
    if (a%i==0){
      s=s+1;
    }
  }
  if (s==0){
    return 1;
  }
  return 0;
}

int sumChar(long long int a){
  int s=0;
  while(a){
    s=s+a%10;
    a/=10;
  }
  return s;
}

int main(){
  long long int t;
  cin>>t;
  while(t--){
    long long int a;
    cin>>a;
    if (isPrime(sumChar(a))==1){
      cout<<a<<endl;
    }
    else cout<<"-1"<<endl;
  }
  return 0;
}
