#include <iostream>
#include <iomanip>
#include "H1.h"
#include "H2.h"
#include "H3.h"
using namespace std;
int main() {
	cout << "n\t" << "n!" << endl;
	for (int i = 1; i <= 10; i++)
		cout << i << "\t" << fact(i) << endl;
	cout << endl;

	double pi = 3.14159265359;
	cout << "x\t" << "sin(x)" << endl;
	for (double x = 0; x <= pi / 4; x = x + pi / 180) {
		if (x == 0)
			continue;
		cout << setprecision(4) << x << "\t" << sinx(5, x) << endl;
	}
	cout << endl;

	cout << "k1\t" << "C(k, 10)" << endl;
	for (int k1 = 1; k1 <= 10; k1++)
		cout << k1 << "\t" << soch(k1, 10) << endl;

}