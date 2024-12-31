// 제목 : 체스판 다시 칠하기

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;

    std::string* board = new std::string[n];

    for (int index = 0; index < n; index++) {
        std::cin >> board[index];
    }

    int min = 64;

    for (int start_row = 0; start_row < n - 7; start_row++) {
        for (int start_column = 0; start_column < m - 7; start_column++) {
            int difference = 0;

            for (int row = 0; row < 8; row++) {
                for (int column = 0; column < 8; column++) {
                    char color = board[start_row + row][start_column + column];

                    if ((row + column) % 2) {
                        if (color == 'B') {
                            difference++;
                        }
                    } else {
                        if (color == 'W') {
                            difference++;
                        }
                    }
                }
            }

            if (difference > 32) {
                difference = 64 - difference;
            }

            if (difference < min) {
                min = difference;
            }
        }
    }

    delete[] board;

    std::cout << min;
}
