#include <iostream>
#include <string>
using namespace std;

int main(){
  long long int k, m;
  string n;
  cin>>k;
  while(k--){
    cin>>n;
    m=n.find("084");
    n.erase(m,3);
    cout<<n;
    cout<<endl;
  }
  return 0;
}
