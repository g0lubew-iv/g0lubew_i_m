#include <iostream>
#include <array>
#include <cmath>

int main() {
	int t(0), n(0);
	std::cin >> t;
	for (int t_count = 0; t_count < t; t_count += 1) {
		std::array <int, 100> a{0}, b{0}, tm{0};
		a[0] = 0;
        b[0] = 0;
        tm[0] = 0;
        int time_summary = 0;
        std::cin >> n;
        for (int i = 1; i <= n; i++) {
            std::cin >> a[i] >> b[i];
        }
        for (int i = 1; i <= n; i += 1) {
        	std::cin >> tm[i];
        }

        for (int i = 0; i < n; i += 1) {
            time_summary = std::max(time_summary + (b[i] - a[i] + 1) / 2, b[i]);
            time_summary += a[i + 1] - b[i] + tm[i + 1];
        }
        std::cout << time_summary << std::endl;
	}
	return 0;
}