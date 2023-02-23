#include <iostream>

using namespace std;

int main(){
  long long int s=0;
  long long int i, m, k=1;
  cin>>m;
  for (i=1;i<=m;i=i+1){
    k=k*i;
    s=s+k;
  }
  cout<<s;
  return 0;
}
