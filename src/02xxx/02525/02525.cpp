// 제목 : 오븐 시계

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b, c;
    std::cin >> a >> b >> c;

    b += c;

    if (b >= 60) {
        a += b / 60;
        b %= 60;
    }

    if (a >= 24) {
        a %= 24;
    }

    std::cout << a << ' ' << b;
}

// 조건문 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b, c;
    std::cin >> a >> b >> c;

    int minutes = (a * 60 + b + c) % (24 * 60);

    std::cout << minutes / 60 << ' ' << minutes % 60;
}
*/
