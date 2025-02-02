// 제목 : 세로읽기

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string lines[5];
    int max_column = 0;

    for (std::string& line : lines) {
        std::cin >> line;

        int length = line.size();

        if (length > max_column) {
            max_column = length;
        }
    }

    for (int column = 0; column < max_column; column++) {
        for (std::string& line : lines) {
            if (line.size() > column) {
                std::cout << line[column];
            }
        }
    }
}
