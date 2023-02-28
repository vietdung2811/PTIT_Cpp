/*I need your help to design a simple pocket calculator for my daily fish business. Because I am quite poor, I will only ask you to do 4 functions of addition, subtraction, multiplication and division. That is enough to meet the needs of using for my fish sales as well as help me spend the least amount of money.

The specific computer I want is as follows:

• If you enter a+b, print the sum, the result a+b.

• If a−b is entered, print the signal, the result of a−b.

• If a*b is entered, print the product and result of a*b.

• If a/b is entered, print the quotient, the result of a/b.

where a and b are real numeric values.(0 ≤ a, b ≤ 10000). “+  −  *  / “ represent the respective operators of addition, subtraction, multiplication and division, respectively.*/
#include <bits/stdc++.h>

using namespace std;

int main(){
  double a,b,s;
  char x;
  cin>>a>>x>>b;
  switch(x){
    case '+':
      s=a+b;
      break;
    case '-':
      s=a-b;
      break;
    case '*':
      s=a*b;
      break;
    case '/':
      s=a/b;
      break;
  }
  cout<<fixed<<setprecision(2)<<s<<endl;
  return 0;
}
