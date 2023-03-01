/*Given an array A[] of n integers, such as it could be splitted into two subarrays: the left one is in ascending order and the right one is in descending order, your task is to find the array’s maximum element.

For example, with A[] = {1, 2, 3, 4, 5, 2, 1}, the answer is 5.
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
		cout << a[n]<< endl;
	}
}
