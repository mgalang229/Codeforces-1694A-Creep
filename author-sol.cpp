#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b;
		cin >> a >> b;
		for (int i = 0; i < min(a, b); i++) {
			cout << "01";
		}
		for (int i = 0; i < abs(a - b); i++) {
			cout << (a < b ? 1 : 0);
		}
		cout << '\n';
	}
	return 0;
}
