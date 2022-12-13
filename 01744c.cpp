#include <iostream>
#include <string>
#include <cmath>

int main() {
	int t(0), n(0);
	const char GREEN = 'g';
	char c = ' ';
	std::string s = "";
	std::cin >> t;
	for (int u = 0; u < t; u += 1) {
		std::cin >> n >> c >> s;
		s += s;
		// std::cout << s << std::endl;
		/*int g_last = s.size() - s.rfind('g') - 1;
		int c_last = s.size() - s.rfind(c) - 1;*/
		int shift(0), last(0);
		/*if (g_last > c_last) {
			shift_max = g_last - c_last;
		}*/
		for (int i = 2 * n - 1; i >= 0; i -= 1) {
			if (s[i] == GREEN) {
				last = i;
			}
			if (s[i] == c) {
				shift = std::max(shift, last - i);
			}
		}
		std::cout << shift << std::endl;
	}
	return 0;
}