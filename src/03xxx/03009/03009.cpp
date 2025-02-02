// 제목 : 네 번째 점

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int x_1, y_1, x_2, y_2, x_3, y_3;
    std::cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3;

    std::cout << (x_1 == x_2 ? x_3 : x_1 == x_3 ? x_2 : x_1) << ' '
        << (y_1 == y_2 ? y_3 : y_1 == y_3 ? y_2 : y_1);
}
