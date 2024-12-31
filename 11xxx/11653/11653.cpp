// 제목 : 소인수분해

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for (int factor = 2; n > 1; factor++) {
        while (n % factor == 0) {
            n /= factor;
            std::cout << factor << '\n';
        }
    }
}
