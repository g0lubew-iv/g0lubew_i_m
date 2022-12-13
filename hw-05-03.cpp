#include <iostream>
#include <cmath>

float fact(int number) {
	int res = 1;
	while (number > 1) {
		res *= number;
		number -= 1;
	}
	return (float) res;
}

float f(float n) {
	return exp(2 * n);
}

float s(float n, int e) {
	float S = 0;
	int i = -1;
	float x_a = 0;
	float x_b = 0;
	while (abs(x_a - x_b) >= e) {
		i += 1;
		if (x_a == x_b) {
			x_b = pow(2*x_b, i) / fact(i);
			S += x_b;
			continue;
		}
		x_a = x_b;
		x_b = pow(2*x_b, i) / fact(i);
		S += x_b;
	}
	return S;
}	

int main() {
	double delta = 0.1, epsilon = 0.0001, y = 0, p = 1, x = 1, s = 0, f = 0, a = 0, b = 1;
    int i = 0;
    std::cout << 'x' << '\t' << "s(x)"<< '\t' << '\t' << "f(x)" << '\n';
    for (i = 0, a; a <= b && (!p || (std::abs(p) > epsilon)); a += delta, i += 1) {
        x = a;
        if (std::abs(x) < delta) {
            x = 0;
        }
        for (i = 0; (p) && (std::abs(p) > epsilon); i += 1) {
            p = std::pow(2 * x, i) / std::tgamma(i + 1);
            s += p;
        }
        f = std::pow(M_E,2 * x);
		std::cout << x << '\t' << s << '\t' << '\t' << f << '\n';
	}
	return 0;
}