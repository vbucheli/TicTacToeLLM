#ifndef BOARD_H
#define BOARD_H

#include <vector>

/**
 * Class: Board
 * Responsibilities:
 * - Gestiona el estado del tablero de juego.
 * Collaborators:
 * - TicTacToeModel utiliza esta clase para representar el tablero.
 */
class Board {
private:
    std::vector<std::vector<char>> grid;

public:
    Board();
    void reset();
    bool isCellEmpty(int row, int column) const;
    void placeMark(int row, int column, char symbol);
    const std::vector<std::vector<char>>& getGrid() const;
};

#endif // BOARD_H
