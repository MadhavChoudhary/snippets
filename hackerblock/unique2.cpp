/***
 *                                    _____           _                 _____ _             _     
 *      /\                           |  __ \         | |               / ____(_)           | |    
 *     /  \   _ __ ___   __ _ _ __   | |__) | __ __ _| |_ __ _ _ __   | (___  _ _ __   __ _| |__  
 *    / /\ \ | '_ ` _ \ / _` | '_ \  |  ___/ '__/ _` | __/ _` | '_ \   \___ \| | '_ \ / _` | '_ \ 
 *   / ____ \| | | | | | (_| | | | | | |   | | | (_| | || (_| | |_) |  ____) | | | | | (_| | | | |
 *  /_/    \_\_| |_| |_|\__,_|_| |_| |_|   |_|  \__,_|\__\__,_| .__/  |_____/|_|_| |_|\__, |_| |_|
 *  @apsknight, </www.amanpratapsingh.in>                     | |                      __/ |      
 *  Indian Institute of Techology Bhubaneswar                 |_|                     |___/       
 */
 
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<int> vi;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define fogg(i,a,b) for(int i = (a); i <= (b); ++i)
#define ford(i,a,b) for(int i = (a); i >= (b); --i)
#define test int t; cin >> t; while(t--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxx 1e6+7

int main() {
	off;
	int n;
	int a[100007];
	cin >> n;
	rep(i, n) {
		cin >> a[i];
	}
	int x = a[0];
	fogg(i, 1, n) {
		x = x ^ a[i];
	}

	int mask = 0;
	while(!(x & 1)) {
		mask++;
		x = x >> 1;
	}

	mask = 1 << mask;
	int p = -1, q = -1;

	rep(i, n) {
		if(a[i] & mask) {
			if (p == -1) {
				p = a[i];
			}
			else 
				p = p ^ a[i];
		}
		else {
			if (q == -1) {
				q = a[i];
			}
			else
				q = q ^ a[i];
		}
	}
	if (p > q) swap(p, q);
	cout << p << " " << q << endl;

  	return 0;
}