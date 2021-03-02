#ifndef sochh
#define sochh
using namespace std;
int soch(int k1, int n) {
	int counts;
	counts = fact(n) / (fact(k1) * fact(n - k1));
	return counts;
}
#endif