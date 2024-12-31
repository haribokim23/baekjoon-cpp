// 제목 : 세탁소 사장 동혁

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int t;
    std::cin >> t;

    while (t--) {
        int c;
        std::cin >> c;

        std::cout << c / 25 << ' ';

        c %= 25;

        std::cout << c / 10 << ' ';

        c %= 10;

        std::cout << c / 5 << ' ' << c % 5 << '\n';
    }
}
