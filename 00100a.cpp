#include <iostream>
#include <array>

int main() {
	int n(0), p(0);
	std::cin >> n;
	std::array<int, 101> a{0};
	for (int i = 1; i <= n; i += 1) {
		std::cin >> p;
		a[p] = i;
	}
	for (int j = 1; j <= n; j += 1) {
		std::cout << a[j] << " ";
	}
	return 0;
}