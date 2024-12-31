// 제목 : 이상한 기호

#include <iostream>

long long function(long long a, long long b) {
    return (a + b) * (a - b);
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    long long a, b;
    std::cin >> a >> b;

    std::cout << std::fixed << function(a, b);
}

// 함수 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    long long a, b;
    std::cin >> a >> b;

    std::cout << std::fixed << (a + b) * (a - b);
}
*/
