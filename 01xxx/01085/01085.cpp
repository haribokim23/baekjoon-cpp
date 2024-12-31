// 제목 : 직사각형에서 탈출

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int x, y, w, h;
    std::cin >> x >> y >> w >> h;

    int distance = x;

    if (w - x < distance) {
        distance = w - x;
    }

    if (y < distance) {
        distance = y;
    }

    if (h - y < distance) {
        distance = h - y;
    }

    std::cout << distance;
}
