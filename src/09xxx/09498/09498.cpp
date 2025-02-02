// 제목 : 시험 성적

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int score;
    std::cin >> score;

    std::cout << (score >= 90 ? "A"
        : score >= 80 ? "B"
        : score >= 70 ? "C"
        : score >= 60 ? "D"
        : "F");
}
