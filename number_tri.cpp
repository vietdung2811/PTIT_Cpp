/*Enter the height of the triangle (no more than 9).

Draw a number triangle according to the principle of correspondence according to the pattern in the example below.*/
#include <bits/stdc++.h>

using namespace std;

int main(){
  int i;
  cin>>i;
  int t=1;
  for (int k=1;k<=i;k+=1){
    for (int m=1;m<=t;m++){
      cout<<m;
    }
    cout<<endl;
    t+=2;
  }
  return 0;
}
