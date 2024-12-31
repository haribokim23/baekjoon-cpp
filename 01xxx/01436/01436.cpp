// 제목 : 영화감독 숌

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int number = 666;

    while (n) {
        if (std::to_string(number).find("666") != std::string::npos) {
            n--;
        }

        number++;
    }

    std::cout << --number;
}
