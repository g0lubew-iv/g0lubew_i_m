#include <iostream>
#include "vector"
#include <cmath>

int main() {
	int t = 0;
	std::cin >> t;
	for (int t_count = 0; t_count < t; t_count += 1) {
		int n(0), m(0), cnt(0), k(0);
	    std::cin >> n;
	    std::vector<int> a(n);
	    for (int i = 0; i < n; i += 1) {
	        std::cin >> a[i];
	    }
	    for (int i = n - 1; i >= 0; i -= 1) {
	        cnt = std::max(a[i], cnt - 1);
	        if (cnt) {
	        	a[i] = 1;
	        }
	    }

	    for (int i = 0; i < n; i += 1){
	        if (i) {
	        	std::cout << " ";
	        }
	        std::cout << a[i];
	    }
	    std::cout << std::endl;
	}
	return 0;
}