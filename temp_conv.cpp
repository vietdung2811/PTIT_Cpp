/*The formula for converting temperature units from Celsius to Fahrenheit is as follows:

F = (C * 9 / 5) + 32

Write a program to input the measured temperature in degrees Celsius, convert to degrees Fahrenheit and print it. (Note always take 2 decimal places).*/
#include <bits/stdc++.h>

using namespace std;

int main(){
  double c,f;
  cin>>c;
  f=(c*9/5)+32;
  cout<<fixed<<setprecision(2)<<f<<endl;
  return 0;
}
