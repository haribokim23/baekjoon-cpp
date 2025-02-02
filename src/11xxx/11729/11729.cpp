// 제목 : 하노이 탑 이동 순서

#include <cmath>
#include <iostream>

void function(int n, int from, int to) {
    if (n > 1) {
        function(n - 1, from, 6 - from - to);
    }

    std::cout << from << ' ' << to << '\n';

    if (n > 1) {
        function(n - 1, 6 - from - to, to);
    }
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::cout << std::fixed << (int) std::pow(2, n) - 1 << '\n';
    function(n, 1, 3);
}
