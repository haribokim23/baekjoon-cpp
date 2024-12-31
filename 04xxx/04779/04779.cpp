// 제목 : 칸토어 집합

#include <iostream>
#include <string>

std::string function(int n) {
    if (n == 0) {
        return "-";
    }

    std::string previous = function(n - 1);
    return previous + std::string(previous.size(), ' ') + previous;
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    for (int n; std::cin >> n;) {
        std::cout << function(n) << '\n';
    }
}

// 재귀 없는 버전

/*
#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    for (int n; std::cin >> n;) {
        std::string string = "-";

        while (n--) {
            string = string + std::string(string.size(), ' ') + string;
        }

        std::cout << string << '\n';
    }
}
*/
