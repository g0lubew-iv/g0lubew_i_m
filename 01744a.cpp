#include <iostream>
#include <string>
#include <vector>
#include <map>

int main() {
	int t(0), n(0);
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		std::vector<int> array(n, 0);
		std::string s;
		for (int i = 0; i < n; i += 1) {
			std::cin >> array[i];
		}
		std::cin >> s;
		std::map<int, char> mapp;
		bool f = true;
		for (int i = 0; i < n; i += 1) {
			if (mapp.count(array[i]) && mapp[array[i]] != s[i]) {
				std::cout << "NO" << std::endl;
				f = false;
				break;
			}
			mapp[array[i]] = s[i];
		}
		if (f) {
			std::cout << "YES" << std::endl;
		}
	}
	return 0;
}