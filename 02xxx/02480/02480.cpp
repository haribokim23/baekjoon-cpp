// 제목 : 주사위 세개

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int count_1, count_2, count_3;
    std::cin >> count_1 >> count_2 >> count_3;

    if (count_1 == count_2 && count_1 == count_3) {
        std::cout << 10000 + count_1 * 1000;
    } else if (count_1 == count_2 || count_1 == count_3) {
        std::cout << 1000 + count_1 * 100;
    } else if (count_2 == count_3) {
        std::cout << 1000 + count_2 * 100;
    } else {
        int max = count_1;

        if (count_2 > max) {
            max = count_2;
        }

        if (count_3 > max) {
            max = count_3;
        }

        std::cout << max * 100;
    }
}
