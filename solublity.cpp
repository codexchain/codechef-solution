#include <bits/stdc++.h>
#define ll long long int
#define N '\n'
#define pb push_back
#define s(n) scanf("%d",&n)
#define sl(n) scanf("%ld",&n)
#define MX INT_MAX
#define MN INT_MIN
#define d(x) cout << #x <<" "<<x <<'\n'

using namespace std;


int main()
{

	//cout << fixed << setprecision(10);

#ifndef ONLINE_JUDGE
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
#endif

	int t;

	cin >> t;

	while(t--)
	{
		int x , a , b;

		cin >> x >> a >> b;

		cout << (a + (100 - x)*b)*10 <<N;
	}

	
	return 0;
}