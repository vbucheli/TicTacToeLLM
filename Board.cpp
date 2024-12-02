#include "Board.h"

Board::Board() : grid(3, std::vector<char>(3, ' ')) {
    // Inicializa un tablero 3x3 con espacios en blanco.
}

void Board::reset() {
    for (auto& row : grid) {
        std::fill(row.begin(), row.end(), ' ');
    }
}

bool Board::isCellEmpty(int row, int column) const {
    return grid[row][column] == ' ';
}

void Board::placeMark(int row, int column, char symbol) {
    if (isCellEmpty(row, column)) {
        grid[row][column] = symbol;
    }
}

const std::vector<std::vector<char>> &Board::getGrid() const {
    return grid;
}
