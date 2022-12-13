#include <iostream>

int main() {
	int t(0), n(0), m(0), sX(0), sY(0), d(0);
	std::cin >> t;
	for (int q = 0; q < t; q += 1) {
		std::cin >> n >> m >> sX >> sY >> d;
		if ((std::min(sX - 1, m - sY) <= d) && (std::min(sY - 1, n - sX) <= d)) {
			std::cout << -1 << "\n";
		}
		else {
			std::cout << n + m - 2 << "\n";
		}
	}
	return 0;
}