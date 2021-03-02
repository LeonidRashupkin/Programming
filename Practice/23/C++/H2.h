#ifndef sinxh
#define sinxh
double sinx(double k, double x) {
	double countsin = x;
	for (int n = 1; n <= k; n++)
		countsin = countsin + pow(-1, n) * (pow(x, (2 * n + 1)) / fact(2 * n + 1));
	return countsin;



}
#endif