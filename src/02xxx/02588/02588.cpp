// 제목 : 곱셈

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int first, second;
    std::cin >> first >> second;

    std::cout << first * (second % 10) << '\n'
        << first * ((second % 100) / 10) << '\n'
        << first * (second / 100) << '\n'
        << first * second;
}
