#include <iostream>
#include <string>
#include <array>

int main() {
	std::ios_base::sync_with_stdio(false);
	int t(0), n(0), k(0);
	std::string pass = "";
	std::cin >> t;
	while (t--) {
		std::cin >> n >> pass >> k;
		unsigned char ch = 0;
		std::array<int, 128> a{0};

		for (int i = 0; i < k; i += 1) {
			std::cin >> ch;
			a[ch] = 1;
		}
		int p = -1, c = 0, max_ = -1;
		for (int j = n - 1; j >= 0; j -= 1) {
			if (a[pass[j]] == 1) {
				p = j;
				break;
			}
		}
		for (int i = p - 1; i >= 0; i -= 1) {
			c += 1;
			if (a[pass[i]] == 1) {
				if (c > max_) {
					max_ = c;
				}
				c = 0;
			}
		}

		if ((c > max_) || (max_ == -1)) {
			max_ = c;
		}
		std::cout << max_ << std::endl;
	}
	return 0;
}