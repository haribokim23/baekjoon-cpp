// 제목 : 색종이

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int count;
    std::cin >> count;

    bool canvas[100][100] = {};
    int area = 0;

    while (count--) {
        int x, y;
        std::cin >> x >> y;

        for (int row = 0; row < 10; row++) {
            for (int column = 0; column < 10; column++) {
                if (!canvas[x + row][y + column]) {
                    canvas[x + row][y + column] = true;
                    area++;
                }
            }
        }
    }

    std::cout << area;
}
