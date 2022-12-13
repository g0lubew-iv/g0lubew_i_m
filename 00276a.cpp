#include <iostream>
 
int main() {
    int N = 0;
    int K = 0;
    int maxP = -2000000000;
    int cP = 0;
    int f(0), t(0);
    std::cin >> N >> K;
    for (int i = 0; i < N; i += 1) {
        std::cin >> f >> t;
        cP = f;
        if (t > K) {
            cP -= (t - K);
        }
        if (cP > maxP) {
            maxP = cP;
        }
    }
    std::cout << maxP;
    return 0;
}