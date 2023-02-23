#include<iostream> // use cin and cout
#include<string.h> // use character
using namespace std;
 
int main(){
  int k;
  char a;
  cin>>k;
  while(k--){
    cin>>a;
    if ((a>='A')&&(a<='Z'))
    {
      int n = int (a) + 32;
      cout<<char(n);
    }
    else if ((a>='a')&&(a<='z'))
    {
      int n = int (a) -32;
      cout<<char(n);
    }
    cout<<endl;
  }
  return 0;
}
