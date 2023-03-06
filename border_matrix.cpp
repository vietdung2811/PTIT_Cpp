/*Given a square matrix A[N][N], your task is to print its border elements in the format as of following:*/
#include <bits/stdc++.h>

using namespace std;

void printBorder(int A[], int n){
  int i,j;
  for (i=0;i<n*n;i++){
    if (i<n||i%n==0||i%n==n-1||i>=n*n-n){
      cout<<A[i]<<' ';
      if (i%n==n-1){
        cout<<endl;
      }
    }
    else cout<<' ';
  }
}

int main(){
  int t; cin>>t;
  while(t--){
    int i, n, A[10001];
    cin>>n;
    for (i=0;i<n*n;i++){
      cin>>A[i];
    }
    printBorder(A,n);
    cout<<endl;
  }
  return 0;
}
