// 제목 : 벌집

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    n--;
    int count = 1;

    for (int layer = 1; n > 0; layer++, count++) {
        n -= layer * 6;
    }

    std::cout << count;
}
