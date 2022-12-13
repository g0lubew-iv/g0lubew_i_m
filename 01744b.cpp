#include <iostream>

int main()
{
    int t; 
    std::cin >> t;
    while (t--) {
        int n(0), q(0); 
        std::cin >> n >> q;
        long long sum(0), odd(0), even(0);
        for (int i = 0; i < n; i += 1) {
            long long number;
            std::cin >> number;
            if (number & 1) {
                odd += 1;
            }
            else {
                even += 1;
            }
            sum += number;
        }
 
        while (q--) {
            long long a(0), b(0);
            std::cin >> a >> b;
            if (!a) {
                sum += even * b;
                if (b & 1) {
                    odd += even;
                    even = 0;
                }
            }
            else {
                sum += odd * b;
                if (b & 1) {
                    even += odd;
                    odd = 0;
                }
            }
            std::cout << sum << std::endl;
        }
    }
    return 0;
}