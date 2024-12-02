#ifndef IMODEL_H
#define IMODEL_H

#include <string>

/**
 * Interface: IModel
 * Responsibilities:
 * - Define las operaciones principales que debe realizar un modelo de juego.
 * Collaborators:
 * - TicTacToeController interactúa con esta interfaz para gestionar la lógica del juego.
 */
class IModel {
public:
    virtual ~IModel() = default;

    virtual bool isValidMove(int row, int column) const = 0;
    virtual void makeMove(int row, int column) = 0;
    virtual bool checkWinner() const = 0;
    virtual bool isDraw() const = 0;
    virtual const std::vector<std::vector<char>>& getBoardState() const = 0;
    virtual char getCurrentPlayerSymbol() const = 0;
    virtual std::string getCurrentPlayerName() const = 0;
    virtual void switchPlayer() = 0;
    virtual void initializeGame(const std::string &player1Name, const std::string &player2Name) = 0;
};

#endif // IMODEL_H
