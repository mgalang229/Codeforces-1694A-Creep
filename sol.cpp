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
		string ans = "";
		char prev = '?';
		while (a > 0 || b > 0) {
			if (a > 0) {
				if (prev != '0' || b == 0) {
					ans += '0';
					prev = '0';
					a--;
				}
			}
			if (b > 0) {
				if (prev != '1' || a == 0) {
					ans += '1';
					prev = '1';
					b--;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
