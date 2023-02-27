/*Given four positive integers X, Y, Z and N, your task is to find the lowest positive integer having N digits and being divisible by X, Y and Z.

For example, with X = 2, Y = 3, Z = 5, N = 4, our desired number is 1020*/
// C++ program to find smallest n digit number
// which is divisible by x, y and z.
#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b)
{
	if(b==0) return a;
	else return ucln(b,a%b);
}
long long gcd(long long a,int b)
{
	return 1ll*a/ucln(a,b) *b;
}
int dem(long long k)
{
	int dem = 0;
	while(k != 0)
	{
		dem++;
		k/=10;
	}
	return dem;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int x ,y ,z,n;
		cin >> x >> y >> z >> n;
		long long k = gcd(x,gcd(y,z));
		if(dem(k) > n) cout << "-1" << endl;
		else
		{
			long long m = pow(10,n-1);
			if(m % k == 0) cout << m << endl;
			else cout << (m/k+1)*k << endl;
		}
	}
}
