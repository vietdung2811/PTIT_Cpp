/*Given an array A[] of n integers, find the maximum difference of any two elements such as the higher one comes after the lower – if no such pair of elements exists, output -1.

For example, if A[] = {2, 3, 10, 6, 4, 8, 1}, the result is 8 = 10 - 2.

If A[] = {7, 9, 5, 6, 3, 2}, the result is 2 = 9 - 7.*/

#include <bits/stdc++.h>

using namespace std;

int main(){
  int A[1001],i,k;
  int t; cin>>t;
  while(t--){
    int ans=0,t;
    int n; cin>>n;
    for (i=0;i<n;i++){
      cin>>A[i];
    }
    for (i=0;i<n-1;i++){
      for (k=i+1;k<n;k++){
        t=A[i]-A[k];
        if (t<0){
          if (t<ans){
            ans=t;
          }
        }
    }
  }
    if (ans!=0){
      cout<<abs(ans)<<endl;
    }
    else cout<<"-1";
}
return 0;
}
