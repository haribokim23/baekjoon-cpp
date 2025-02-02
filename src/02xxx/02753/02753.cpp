// 제목 : 윤년

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int year;
    std::cin >> year;

    std::cout << (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}
