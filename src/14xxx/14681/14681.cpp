// 제목 : 사분면 고르기

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int x, y;
    std::cin >> x >> y;

    std::cout << (x > 0 ? y > 0 ? 1 : 4 : y > 0 ? 2 : 3);
}
