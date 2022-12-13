    #include <iostream>
    #include <algorithm>
    #include <vector>
     
    int main() {
        int n(0), A(0), B(0), sum(0), counter(0);
        std::vector<int> array;
        std::cin >> n >> A >> B;
        for (int i = 0; i < n; i += 1) {
            int x(0);
            std::cin >> x;
            array.push_back(x);
            sum +=x;
        }
        std::sort(array.begin() + 1, array.end());
        while (((array[0] * A) / sum) < B) {
            sum -= array[n - 1];
            n -= 1;
            counter += 1;
        }
        std::cout << counter;
        return 0;
    }