// 제목 : 상수

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string a, b;
    std::cin >> a >> b;

    int A_reversed = (a[2] - '0') * 100 + (a[1] - '0') * 10 + (a[0] - '0');
    int B_reversed = (b[2] - '0') * 100 + (b[1] - '0') * 10 + (b[0] - '0');

    std::cout << (A_reversed > B_reversed ? A_reversed : B_reversed);
}

// 문자열 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string a, b;
    std::cin >> a >> b;

    a = (a % 10) * 100 + ((a / 10) % 10) * 10 + a / 100;
    b = (b % 10) * 100 + ((b / 10) % 10) * 10 + b / 100;

    std::cout << (a > b ? a : b);
}
*/
