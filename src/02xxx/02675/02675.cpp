// 제목 : 문자열 반복

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int t;
    std::cin >> t;

    while (t--) {
        int r;
        std::string s;
        std::cin >> r >> s;

        for (char& character : s) {
            for (int count = 0; count < r; count++) {
                std::cout << character;
            }
        }

        std::cout << '\n';
    }
}
