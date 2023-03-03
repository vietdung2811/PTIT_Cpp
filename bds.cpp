/*Any integer can be transformed in two ways:

    Multiple with 2 or 3
    Divide by 2 or 3 (if it’s divisible)

Given 2 integers x and y. With the above transformation, check if there exists a sequence of transformations to get 2 equal numbers? If yes, print “YES”, otherwise print “NO”.*/

#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
  if (a==0) return b;
  if (b==0) return a;
  if (a==b) return a;
  if (a>b) return __gcd(a%b,b);
  return __gcd(b%a,a);
}


int main(){
  int a,b;
  int t;cin>>t;
  while(t--){
    cin>>a>>b;
    int s;
    s=gcd(a,b);
    a/=s;
    b/=s;
    while(a%2==0){
      a/=2;
    }
    while(a%3==0){
      a/=3;
    }
    while(b%2==0){
      b/=2;
    }
    while(b%3==0){
      b/=3;
    }
    if (a==b){
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
  return 0;
}
