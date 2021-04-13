#include <bits/stdc++.h>

using namespace std;

const int end = 1e9;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		for (int pw = 2; pw < 30; pw++) {
			int val = (1 << pw) - 1;
			if (n % val == 0) {
				cout << n / val << '\n';
				break;
			}
		}
	}
	return 0;
}
