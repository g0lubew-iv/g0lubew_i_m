#include <iostream>
#include <vector>
 
int main() {
    int t(0);
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n;
		std::cin >> n;
		std::vector<int> a;
		int x = 1;
		while (n > 0) {
			if (n % 10 > 0) {
				a.push_back(x * (n % 10));
			}
			n /= 10;
			x *= 10;
		}
		std::cout << a.size() << "\n";
		for (int j = 0; j < a.size(); j += 1) {
		    std::cout << a[j] << " ";
		}
		std::cout << "\n";
    }
    return 0;
}