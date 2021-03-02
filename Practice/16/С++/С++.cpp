#include<string>;
#include<iostream>;
using namespace std;
int main() {
	int n, m;
	m = -1;
	string k;
	cin >> n;
	int l = 0;
	char a1, a2, a3, a4, a5, a6, a7, a8, a9;
	for (int i = 1; i <= n; i++) {
		cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9;
		if (a1 == 'a' and a5 == '5' and a6 == '5' and a7 == '6' and a8 == '6' and a9 == '1') {
			char arr[9] = { a1, a2, a3, a4, a5, a6, a7, a8, a9 };
			while (l <= 8) {
				k += arr[l];
				l++;
			}
			cout << k << " ";
			m = 1;
		}
		else
			continue;
	}
	if (m == -1)
		cout << m;
}