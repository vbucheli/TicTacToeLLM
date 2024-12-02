#include "TicTacToeView.h"
#include <iostream>
#include <vector>
void TicTacToeView::displayBoard(const std::vector<std::vector<char>>& grid) const {
    std::cout << "Tablero actual:" << std::endl;
    for (size_t row = 0; row < grid.size(); ++row) {
        for (size_t col = 0; col < grid[row].size(); ++col) {
            std::cout << grid[row][col];
            if (col < grid[row].size() - 1) std::cout << " | ";
        }
        std::cout << std::endl;
        if (row < grid.size() - 1) std::cout << "---------" << std::endl;
    }
}

void TicTacToeView::displayMessage(const std::string &message) const {
    std::cout << message << std::endl;
}

void TicTacToeView::showWinner(const std::string &playerName) const {
    std::cout << "Felicitaciones! " << playerName << " Ganaste!" << std::endl;
}

void TicTacToeView::showDraw() const {
    std::cout << "Es un empate!" << std::endl;
}
