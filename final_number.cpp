//This is an exercise on reducing numbers. The reduction is done as follows: from an initial number, a new number is formed by adding together the digits of the original number.
//The reduction process ends when the number obtained has only 1 digit.
//Find the last digit of the reduction!
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

int main(){
  long long int t;
  cin>>t;
  while(t--){
    long long int n;
    cin>>n;
    while(n>=10){
      n=sumChar(n);
    }
    cout<<n<<endl;
  }
  return 0;
}
