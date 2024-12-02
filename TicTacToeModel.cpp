#include "TicTacToeModel.h"

TicTacToeModel::TicTacToeModel() : currentPlayerIndex(0) {}

void TicTacToeModel::initializeGame(const std::string &player1Name, const std::string &player2Name) {
    players.emplace_back(player1Name, 'X');
    players.emplace_back(player2Name, 'O');
    board.reset();
}

bool TicTacToeModel::isValidMove(int row, int column) const {
    return board.isCellEmpty(row, column);
}

void TicTacToeModel::makeMove(int row, int column) {
    board.placeMark(row, column, getCurrentPlayerSymbol());
}

bool TicTacToeModel::checkWinner() const {
    const auto& grid = board.getGrid(); // Obtiene referencia constante al tablero
    // Revisión de filas y columnas
    for (int i = 0; i < 3; ++i) {
        if ((grid[i][0] != ' ' && grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) || 
            (grid[0][i] != ' ' && grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i])) {
            return true;
        }
    }
    // Revisión de diagonales
    return (grid[0][0] != ' ' && grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) ||
           (grid[0][2] != ' ' && grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]);
}

bool TicTacToeModel::isDraw() const {
    const auto& grid = board.getGrid(); // Obtiene referencia constante al tablero
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            if (grid[row][col] == ' ') {
                return false;
            }
        }
    }
    return !checkWinner();
}

const std::vector<std::vector<char>>& TicTacToeModel::getBoardState() const {
    return board.getGrid(); // Retorna referencia constante al tablero
}

void TicTacToeModel::switchPlayer() {
    currentPlayerIndex = 1 - currentPlayerIndex;
}

char TicTacToeModel::getCurrentPlayerSymbol() const {
    return players[currentPlayerIndex].getSymbol();
}

std::string TicTacToeModel::getCurrentPlayerName() const {
    return players[currentPlayerIndex].getName();
}
