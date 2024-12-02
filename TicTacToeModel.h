#ifndef TICTACTOEMODEL_H
#define TICTACTOEMODEL_H

#include "IModel.h"
#include "Board.h"
#include "Player.h"
#include <vector>

/**
 * Class: TicTacToeModel
 * Responsibilities:
 * - Implementa la lógica del juego Tic Tac Toe.
 * - Administra el estado del tablero y los jugadores.
 * Collaborators:
 * - TicTacToeController utiliza esta clase para gestionar el estado del juego.
 * - Depende de las clases Board y Player.
 */
class TicTacToeModel : public IModel {
private:
    Board board;
    std::vector<Player> players;
    int currentPlayerIndex;

public:
    TicTacToeModel();

    void initializeGame(const std::string &player1Name, const std::string &player2Name) override;

    bool isValidMove(int row, int column) const override;
    void makeMove(int row, int column) override;
    bool checkWinner() const override;
    bool isDraw() const override;
    const std::vector<std::vector<char>>& getBoardState() const override;
    void switchPlayer() override;
    char getCurrentPlayerSymbol() const override;
    std::string getCurrentPlayerName() const override;
};

#endif // TICTACTOEMODEL_H
