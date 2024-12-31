// 제목 : 대지

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int N, x, y;
    std::cin >> N >> x >> y;

    int x_max = x, x_min = x, y_max = y, y_min = y;

    while (--N) {
        std::cin >> x >> y;

        if (x > x_max) {
            x_max = x;
        } else if (x < x_min) {
            x_min = x;
        }

        if (y > y_max) {
            y_max = y;
        } else if (y < y_min) {
            y_min = y;
        }
    }

    std::cout << (x_max - x_min) * (y_max - y_min);
}
