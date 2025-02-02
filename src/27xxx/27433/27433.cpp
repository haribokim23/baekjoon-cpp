// 제목 : 팩토리얼 2

#include <iostream>

long long function(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * function(n - 1);
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::cout << std::fixed << function(n);
}

// 재귀 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    if (n == 0) {
        std::cout << 1;
        return 0;
    }

    long long factorial = 1;

    for (int count = 2; count <= n; count++) {
        factorial *= count;
    }

    std::cout << std::fixed << factorial;
}
*/
