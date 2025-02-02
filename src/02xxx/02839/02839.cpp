// 제목 : 설탕 배달

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int min = 1667;

    for (int five = n / 5; five >= 0; five--) {
        int remainder = n - 5 * five;

        if (remainder % 3 == 0) {
            int count = five + remainder / 3;

            if (count < min) {
                min = count;
            }
        }
    }

    std::cout << (min == 1667 ? -1 : min);
}
