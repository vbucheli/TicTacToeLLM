#ifndef TICTACTOEVIEW_H
#define TICTACTOEVIEW_H

#include "IView.h"
#include <string>
#include <iostream>

/**
 * Class: TicTacToeView
 * Responsibilities:
 * - Muestra el tablero y los mensajes relevantes al usuario.
 * Collaborators:
 * - TicTacToeController interactúa con esta clase para actualizar la interfaz.
 */
class TicTacToeView : public IView {
public:
    void displayBoard(const std::vector<std::vector<char>>& grid) const override;
    void displayMessage(const std::string &message) const override;
    void showWinner(const std::string &playerName) const override;
    void showDraw() const override;
};

#endif // TICTACTOEVIEW_H
