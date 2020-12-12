#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
vector<int> rr(unsigned int x) {
	vector<int> digit;
	int sz = x;
	for (int cn = 2; cn <= sz; cn++) {

		if (x % cn == 0) {
			x = x / cn;
			digit.push_back(cn);
			cn = 1;
		}
		else if (cn == x) {
			digit.push_back(cn);
			return digit;
		}
	}
	return digit;
}
void tt(unsigned int x) {
	vector<int> digit;
	digit = rr(x);
	int sz = digit.size();
	if (sz == 1) {
		cout << digit[0];
		exit(1);
	}
	bool e = false;
	cout << digit[0];
	for (int i = 1; i < sz; i++) {
		if (digit[i - 1] == digit[i]) {
			int dg = 1;

			for (int i2 = i; i2 < sz; i2++) {
				if (e == true)
					break;
				else if (digit[i2 - 1] == digit[i2])
					dg++;

			}if (!e)
				cout << "^" << dg;
			e = true;
			if (sz > 2 and digit[2] == digit[1] and x % 8 != 0 and x % 90 != 0)
				i++;
		}
		else {
			cout << "*" << digit[i];
			e = false;
		}
	}
}

int main() {
	unsigned int x;
	cin >> x;
	tt(x);
}
