#include <iostream>
// #include <numbers>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>

int main() {
	int n(0), r(0);
	std::cin >> n >> r;
	std::cout << std::setprecision(8) << (r * (sin(M_PI / n))) / (1 - sin(M_PI / n)) << std::endl;
	return 0;
}