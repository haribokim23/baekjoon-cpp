// 제목 : 별 찍기 - 10

#include <iostream>

char** stars;

void function(int row, int column, int length) {
    if (length == 1) {
        stars[row][column] = '*';
        return;
    }

    length /= 3;

    for (int row_offset = 0; row_offset < 3; row_offset++) {
        for (int column_offset = 0; column_offset < 3; column_offset++) {
            if (row_offset != 1 || column_offset != 1) {
                function(row + row_offset * length, column + column_offset * length, length);
            }
        }
    }
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    stars = new char* [n];

    for (int row = 0; row < n; row++) {
        stars[row] = new char[n];

        for (int column = 0; column < n; column++) {
            stars[row][column] = ' ';
        }
    }

    function(0, 0, n);

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            std::cout << stars[row][column];
        }

        delete[] stars[row];

        std::cout << '\n';
    }

    delete[] stars;
}
