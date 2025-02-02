// 제목 : 분수찾기

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int x;
    std::cin >> x;

    int row = 1;

    while (row < x) {
        x -= row++;
    }

    std::cout << (++row % 2 ? x : row - x) << '/' << (row % 2 ? row - x : x);
}
