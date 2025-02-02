// 제목 : 분해합

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for (int number = 1; number < n; number++) {
        int sum = number;

        for (int temp = number; temp; temp /= 10) {
            sum += temp % 10;
        }

        if (sum == n) {
            std::cout << number;
            return 0;
        }
    }

    std::cout << 0;
}
