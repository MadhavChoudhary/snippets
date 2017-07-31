/**
*	Aman Pratap Singh (@apsknight)
*	Indian Institute of Technology Bhubaneswar
*	www.apsknight.cf
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define test int t; cin >> t; while(t--)
#define fori(a,b) for(int i = (a); i <= (b); i++)
#define ford(a,b) for(int i = (a); i >= (b); i--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool desc(int x, int y) {
	return x > y;
}

int main() {
	off;

	ll n;
	cin >> n;

	ll a[200009];

	rep(i, n) {
		cin >> a[i];
	}

	sort(a, a+n, desc);

	ll res = 0;
	rep(i, n) {
		res += (n - 1 - 2*i) * a[i]; 
	}

	cout << res << "\n";

  	return 0;
}