#include <iostream>
#include <cmath>

int main() {
	const double eps(0.0001);
	const double dx(0.05);

	for (double x = 0.1; x < 1.05; x += dx) {
		double sum(0.0);
		double sum_i(0.0);
		int i = 1;
		while (sum_i <= eps) {
			sum_i = std::pow(-1, i + 1) * std::pow(x, 2 * i + 1) / (4 * std::pow(i, 2) - 1);
			sum += sum_i;
			i += 1;
		}
		std::cout << x << '\t' << sum << '\n';
	}
	return 0;
}