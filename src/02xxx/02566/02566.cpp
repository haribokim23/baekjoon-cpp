// 제목 : 최댓값

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int board[9][9];

    for (int(&row)[9] : board) {
        for (int& column : row) {
            std::cin >> column;
        }
    }

    int max = 0;
    int max_row = 0;
    int max_column = 0;

    for (int row = 1; row <= 9; row++) {
        for (int column = 1; column <= 9; column++) {
            int& number = board[row - 1][column - 1];

            if (number > max) {
                max = number;
                max_row = row;
                max_column = column;
            }
        }
    }

    std::cout << max << '\n' << max_row << ' ' << max_column;
}

// 배열 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int max = 0;
    int max_row = 0;
    int max_column = 0;

    for (int row = 1; row <= 9; row++) {
        for (int column = 1; column <= 9; column++) {
            int number;
            std::cin >> number;

            if (number > max) {
                max = number;
                max_row = row;
                max_column = column;
            }
        }
    }

    std::cout << max << '\n' << max_row << ' ' << max_column;
}
*/
