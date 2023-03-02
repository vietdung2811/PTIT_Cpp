//Given 4 positive integers a, b, c, d. Find the largest number e such that a%e = b%e = c%e = d%e.
#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) 
    { 
        if (a == 0) return b; 
        if (b == 0) return a; 
        if (a == b) return a; 
        if (a > b) return gcd(a-b, b); 
        return gcd(a, b-a); 
    } 

int gcd3(int a, int b, int c){
  int s;
  s=gcd(gcd(a,b),c);
  return s;
}

int main(){
  long long int a, b, c, d, h1, h2, h3, s;
  cin>>a>>b>>c>>d;
  h1=abs(a-b);
  h2=abs(b-c);
  h3=abs(c-d);
  s=gcd3(h1,h2,h3);
  cout<<s;
  return 0;
}
