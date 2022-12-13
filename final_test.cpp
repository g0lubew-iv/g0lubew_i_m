#include <iostream>
#include <cmath>
#include <RV.hpp>

int main() {
	Rdec2D r_m = { 0, -13 };
	Rdec2D r_c = { 13, -5 };
	Rdec2D v_m = { 0, 3 };
	double n = norm(v_m);
	Rdec2D delta = r_m + r_c;
	double r = norm(delta);
	double dt = 1;
	double epsilon = 0.0001;
	while (std::abs(n - r) >= epsilon) {
		n = (n + r) / 2;
	}
	std::cout << n / r;
	std::cout << std::endl;
	return 0;
}
