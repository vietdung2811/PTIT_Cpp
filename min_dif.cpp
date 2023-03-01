/*Given an array A[] of N elements, your task is to find the minimum difference between any two elements of that array.

Input:

    The first line contains a single integer T denoting the number of test cases. (T ≤ 10).
    Each test case consists of two lines: the first line contains a single integer N (1 ≤ N ≤ 100 000), the second line contains N integers A[i], separated by spaces (0 ≤ A[i] ≤ 109).
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n+1];
		for(int i = 1 ; i <= n ; i++) cin >> a[i];
		sort(a+1,a+n+1);
		int min1 = 1e9+1;
		for(int i = 2 ; i <= n ; i++)
		{
			min1 = min(min1,a[i] - a[i-1]);
		}
		cout << min1 << endl;
	}
}
