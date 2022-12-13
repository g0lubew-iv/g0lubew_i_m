#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

/*float fact(int number) {
	int res = 1;
	while (number > 1) {
		res *= number;
		number -= 1;
	}
	return (float) res;
}

float f(float n) {
	return cos(n);
}

float s(float n, int e) {
	float S = 0;
	int i = -1;
	float x_a = 0;
	float x_b = 0;
	while (abs(x_a - x_b) >= e) {
		i += 1;
		if (x_a == x_b) {
			x_b = pow(-1.0, i) * pow(x_b, 2*i) / fact(2*i);
			S += x_b;
			continue;
		}
		x_a = x_b;
		x_b = pow(-1.0, i) * pow(x_b, 2*i) / fact(2*i);
		S += x_b;
	}
	return S;
}	*/

int main() {
    double delta = 0.1, epsilon = 0.001, y = 0, p = 1, x = 1, s = 0, f = 0, a = -1, b = 1;
    int i = 0;
    std::cout << 'x' << '\t' << "s(x)"<< '\t' << '\t' << "f(x)" << '\n';
    for (a; a < b + delta; a += delta) {
        x = a;
        p = 0;
        s = 0;
        if (std::abs(x) < delta) {
        	a = 0;
            x = 0;
        }
        p = 1;
        for (i = 0; (std::abs(p) > epsilon) || (!p && x); i += 1) {
            p = std::pow(-1, i) * std::pow(x, 2 * i) / std::tgamma(2 * i + 1);
            s += p;
        }
        f = std::cos(x);
        std::cout << x << '\t' << s << '\t' << f << '\n';
    }
	return 0;
}