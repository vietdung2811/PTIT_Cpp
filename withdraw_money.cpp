//At the bank, there are coins of 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000.
//Nam has an amount of N to withdraw, so the minimum number of  coins that Nam can How much is the draw?
#include<bits/stdc++.h>
using namespace std;
int a[] = {1000,500,200,100,50,20,10,5,2,1};
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int ans = 0;
		int i = 0;
		while(n != 0)
		{
			ans+= n/a[i];
			n%=a[i]; i++;
		}
		cout << ans << endl;
	}
}
