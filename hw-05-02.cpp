#include <iostream>
#include <cmath>
#include <algorithm>
#define _USE_MATH_DEFINES

/*float f(float n) {
	return n * pow(2, -0.5) / (1 - 2 * n * pow(2, -0.5));
}

float s(float n, int e) {
	float S = 0;
	int i = -1;
	float x_a = 0;
	float x_b = 0;
	while (abs(x_a - x_b) >= e) {
		i += 1;
		if (x_a == x_b) {
			x_b = pow(x_b, i) * sin(i * pow(2, -0.5));
			S += x_b;
			continue;
		}
		x_a = x_b;
		x_b = pow(x_b, i) * sin(i * 0.5 * asin(1.0));
		S += x_b;
	}
	return S;
}	*/

int main() {
	double delta = 0.05, epsilon = 0.001, y = 0, p = 1, x = 1, s = 0, f = 0, a = 0, b = 1;
    int i = 0;
    std::cout << 'x' << '\t' << "s(x)" << '\t' << '\t' << "f(x)" << '\n';
    for (i = 0, a; a <= b; a += delta, i += 1) {
        x = a;
        s = 0;
        p = 0;
        if (std::abs(x) < delta) {
            x = 0;
        }
        for (i = 0; (!p && x) || (std::abs(p) > epsilon); i += 1) {
            p = std::pow(x, i) * std::sin(i * M_PI / 4);
            s += p;
        }
        f = (x * std::sin(M_PI / 4)) / (1 - 2 * x * std::cos(M_PI / 4));
        std::cout << x << '\t' << s << '\t' << '\t' << f << '\n';
    }
	return 0;
}