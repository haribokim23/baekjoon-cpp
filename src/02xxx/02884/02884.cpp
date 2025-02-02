// 제목 : 알람 시계

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int h, m;
    std::cin >> h >> m;

    m -= 45;

    if (m < 0) {
        h--;
        m += 60;
    }

    if (h < 0) {
        h += 24;
    }

    std::cout << h << ' ' << m;
}

// 조건문 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int h, m;
    std::cin >> h >> m;

    int minutes = ((h * 60 + m - 45) + 24 * 60) % (24 * 60);

    std::cout << minutes / 60 << ' ' << minutes % 60;
}
*/
