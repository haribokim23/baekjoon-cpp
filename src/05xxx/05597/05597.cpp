// 제목 : 과제 안 내신 분..?

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    bool students[30] = {};

    for (int count = 0; count < 28; count++) {
        int n;
        std::cin >> n;

        students[n - 1] = true;
    }

    for (int index = 0; index < 30; index++) {
        if (!students[index]) {
            std::cout << index + 1 << '\n';
        }
    }
}
