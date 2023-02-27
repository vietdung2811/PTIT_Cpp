/*Given an array A[] of n non-negative integers, your task is to find the longest subsequence consisting of Fibonacci numbers only. Here we consider 0 as the first Fibonacci number.*/
#include<iostream>

using namespace std;

int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;

    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

int main(){
  int i,k,m,t,n,z;
  cin>>z;
  while(z--){
    cin>>k;
    int A[100];
    int B[100];
    int h=0;
    for (i=0;i<k;i++){
      cin>>A[i];
      for (t=0;t<1000;t++){
        n=fibonacci(t);
        if (n==A[i]){
          B[h]=A[i];
          h=h+1;
          break;
        }
      }
}
    for (m=0;m<h;m++)
{
    cout<<B[m]<<' ';
}
    cout<<endl;
}
return 0;
}
