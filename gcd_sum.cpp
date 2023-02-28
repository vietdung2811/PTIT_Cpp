/*The gcdSum of a positive integer is the gcd of that integer with its sum of digits. Formally, gcdSum(x)=gcd(x, sum of digits of x) for a positive integer x. gcd(a,b) denotes the greatest common divisor of a and b — the largest integer d such that both integers a and b are divisible by d.

For example: gcdSum(762) = gcd(762,7+6+2) = gcd(762,15) = 3.

Given an integer n, find the smallest integer x ≥ n such that gcdSum(x) > 1.*/
#include <bits/stdc++.h>

using namespace std;

int sumChar(long long int a){
  int s=0;
  while(a){
    s+=a%10;
    a/=10;
  }
  return s;
}

int gcd(long long int a,long long int b){
  int s;
  s= __gcd(a,b);
  return s;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    long long int n;
    cin>>n;
    int g=1,m,i=0;
    while(g==1){
      m=n+i;
      g=gcd(m,sumChar(m));
      i++;
    }
    cout<<m<<endl;
  }
  return 0;
}
