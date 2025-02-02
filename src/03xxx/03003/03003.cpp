// 제목 : 킹, 퀸, 룩, 비숍, 나이트, 폰

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int counts[] = { 1, 1, 2, 2, 2, 8 };

    for (int& count : counts) {
        int current;
        std::cin >> current;

        std::cout << count - current << ' ';
    }
}
