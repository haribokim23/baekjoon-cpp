// 제목 : 약수들의 합

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;

    for (std::cin >> n; n != -1; std::cin >> n) {
        int sum = 1;
        std::string factors = " = 1";

        for (int factor = 2; factor < n; factor++) {
            if (n % factor == 0) {
                sum += factor;
                factors += " + " + std::to_string(factor);
            }
        }

        std::cout << n << (sum == n ? factors : " is NOT perfect.") << '\n';
    }
}
