// 제목 : 나머지

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << (a + b) % c << '\n'
        << ((a % c) + (b % c)) % c << '\n'
        << (a * b) % c << '\n'
        << ((a % c) * (b % c)) % c;
}
