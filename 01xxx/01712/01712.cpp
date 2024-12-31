// 제목 : 손익분기점

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << (b < c ? a / (c - b) + 1 : -1);
}
