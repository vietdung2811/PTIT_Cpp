/*#include <iostream>
#include <math.h>
using namespace std;

int isSphenic(long long int n){
  long long int res=0;
  for(int i=2; i<=sqrt(n); i++){
    long long int cnt=0;
    while(n%i==0){
      ++cnt;
      n/=i;
    }
    if(cnt>=2) return 0;
    ++res;
  }
  if(n!=1)
    ++res;
  return res==3;
}

int main(){
  long long int i,t;
  cin>>i;
  while(i--){
    cin>>t;
    cout<<isSphenic(t);
    cout<<endl;
  }
  return 0;
}
*/

#include <iostream>
#include <math.h>
using namespace std;



int prime[10001];

void sieve_uoc_prime()

{

	for (int i = 1; i <= 10000; i++)

	{

		prime[i] = i;

	}

	for (int i = 2; i <= sqrt(10000); i++)

	{

		if (prime[i] == i)

		{

			for (int j = i*i; j <= 10000; j += i)

			{

				if (prime[j] == j)

				{

					prime[j] = i;

				}

			}

		}

	}

}

bool Check_Sphenic(int n)

{

	int cnt = 0;

	while (prime[n] != 1)

	{

		if (prime[n] == prime[n / prime[n]])

			return 0;

		cnt++;

		n /= prime[n];

	}

	return cnt==3;

}

int main()

{

	int Test;

	cin >> Test;

	sieve_uoc_prime();

	while (Test--)

	{

		int n;

		cin >> n;

		cout << Check_Sphenic(n) << endl;

	}

	return 0;

}
