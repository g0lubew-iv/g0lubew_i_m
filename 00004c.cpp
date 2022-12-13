#include <iostream>
#include <map>
#include <string>

int main() {
	int n(0);
	std::map<std::string, int> base;
	std::string s = "";
	std::cin >> n;
	while (n--) {
		std::cin >> s;
		if (!base[s]) {
			std::cout << "OK" << std::endl;
		}
		else {
			std::cout << s << base[s] << std::endl;
		}
		base[s] += 1;
	}
	return 0;
}