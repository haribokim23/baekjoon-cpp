// 제목 : 사파리월드

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;

    std::cout << (n > m ? n - m : m - n);
}

// 조건문 없는 버전

/*
#include <cmath>
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;

    std::cout << std::abs(n - m);
}
*/
