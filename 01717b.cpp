#include <iostream>

int main() {
	int t(0), n(0), k(0), r(0), c(0);
	std::cin >> t;
	for (int q = 0; q < t; q += 1) {
		std::cin >> n >> k >> r >> c;
		for (int i = 1; i <= n; i += 1) {
			for (int j = 1; j <= n; j += 1)
				std::cout << ((i + j) % k == (r + c) % k ? 'X' : '.');
			std::cout << '\n';
		}
	}
	return 0;
}