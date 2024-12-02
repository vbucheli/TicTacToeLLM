#ifndef TICTACTOECONTROLLER_H
#define TICTACTOECONTROLLER_H

#include "IModel.h"
#include "IView.h"

/**
 * Class: TicTacToeController
 * Responsibilities:
 * - Coordina las interacciones entre el modelo (IModel) y la vista (IView).
 * Collaborators:
 * - IModel proporciona la lógica del juego.
 * - IView se encarga de mostrar la interfaz.
 */
class TicTacToeController {
private:
    IModel* model;
    IView* view;

public:
    TicTacToeController(IModel* model, IView* view);

    void startGame();
    void handlePlayerMove(int row, int column);
    void updateView();
};

#endif // TICTACTOECONTROLLER_H
