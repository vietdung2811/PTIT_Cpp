/*Given three positive integers a, x and y, your task is to find the greatest common divisor of P and Q, where P is the x-time duplication of a and Q is the y-time duplication of a. For example, if a = 2, x = 3 and y = 2, then P = 222 and Q = 22.*/
#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

void findgcd(int n, int x, int y)
{
    // Finding GCD of x and y.
    int g = gcd(x,y);
 
    // Print n, g times.
    for (int i = 0; i < g; i++)
        cout << n;
}

int main(){
  int t,a,x,y;
  cin>>t;
  while(t--){
    cin>>a>>x>>y;
    findgcd(a,x,y);
    cout<<endl;
  }
  return 0;
}
 
