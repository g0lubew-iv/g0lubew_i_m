#include <iostream>
#include <cmath>
#include <vector>

int main() {
	int n(0), k(0), x(0), e(0), s(0);
	std::cin >> n >> k;
	std::vector<int> a;
	for (int i = 0; i < n; i += 1) {
		std::cin >> x;
		a.push_back(x);
		(x > 0) ? e += 1 : s += 1;
	}
	int j = 0, res = -1;
	while (j < k) {
		int s_temp = s, e_temp = e;
		for (int i = j; i < n; i += k) {
			(a[i] > 0) ? e_temp -= 1 : s_temp -= 1;
		}
		if (res < std::abs(e_temp - s_temp)) {
			res = std::abs(e_temp - s_temp);
		}
		j += 1;
	}
	std::cout << res << std::endl;
	return 0;
}