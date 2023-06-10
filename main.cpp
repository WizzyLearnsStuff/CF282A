#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	string s;
	int x = 0;
	for (int i = 0; i < n; i++) {
		cin >> s;
		x += ((s[0] != 'X') ? ((s[0] == '+') ? 1 : -1) : ((s[1] == '+') ? 1 : -1));
	}
	cout << x;
}
