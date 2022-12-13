#include <iostream>
#include <vector>
#include <string>

void to_3(int number, std::string& res) {
	while (number) {
		res += (char) ('0' + number % 3);
		number /= 3;
	}
	// return res;
}

int main() {
	int a = 0, b = 0, c = 0;
	std::cin >> a >> c;
	std::string a_s = "", b_s = "", c_s = "";
	to_3(a, a_s);
	to_3(c, c_s);

	for (int i = 0; i < (-a_s.size() + c_s.size()); i += 1) {
        a_s += '0';
    }
    for (int i = 0; i < (a_s.size() - c_s.size()); i += 1) {
        c_s += '0';
    }

    // std::cout << a_s << " " << c_s << std::endl;

    for (int i = a_s.size() - 1; i >= 0; i -= 1) {
        b_s += (char) ('0' + (3 + c_s[i] - a_s[i]) % 3);
    }

    for (int i = 0; i < b_s.size(); i += 1) {
        b *= 3;
        b += b_s[i] - '0';
    }

    std::cout << b << std::endl;
	return 0;
}