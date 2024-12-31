// 제목 : OX퀴즈

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int t;
    std::cin >> t;

    while (t--) {
        std::string result;
        std::cin >> result;

        int score = 0;
        int point = 1;

        for (char& character : result) {
            if (character == 'O') {
                score += point++;
            } else {
                point = 1;
            }
        }

        std::cout << score << '\n';
    }
}
