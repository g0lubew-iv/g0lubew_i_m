#include <iostream>
#include <array>

int main() {
	int t(0), n(0);
	std::cin >> t;
	while (t--) {
		std::array<int, 100> a{0};
		std::cin >> n;
		for (int i = 0; i < n; i += 1) {
			std::cin >> a[i];
		}
		int res = a[0];
		for (int i = 1; i < n; i += 1) {
			res = res & a[i];
		}
		std::cout << res << std::endl;
	}
	return 0;
}