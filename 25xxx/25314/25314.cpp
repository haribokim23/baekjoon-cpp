// 제목 : 코딩은 체육과목 입니다

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;

    for (std::cin >> n; n; n -= 4) {
        std::cout << "long ";
    }

    std::cout << "int";
}
