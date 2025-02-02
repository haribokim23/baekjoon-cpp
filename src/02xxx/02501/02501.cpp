// 제목 : 약수 구하기

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, k;
    std::cin >> n >> k;

    for (int number = 1; number <= n; number++) {
        if (n % number == 0 && --k == 0) {
            std::cout << number;
            break;
        }
    }

    if (k) {
        std::cout << 0;
    }
}
