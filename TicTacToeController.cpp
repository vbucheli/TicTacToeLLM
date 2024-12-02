#include "TicTacToeController.h"
#include <iostream>

TicTacToeController::TicTacToeController(IModel* model, IView* view) : model(model), view(view) {}

void TicTacToeController::startGame() {
    model->initializeGame("Jugador 1", "Jugador 2");
    updateView();

    while (true) {
        int row, col;
        view->displayMessage("Entre su movimiento (fila y columna): ");
        std::cin >> row >> col;

        if (model->isValidMove(row, col)) {
            handlePlayerMove(row, col);
            if (model->checkWinner()) {
                view->showWinner(model->getCurrentPlayerName());
                break;
            }
            if (model->isDraw()) {
                view->showDraw();
                break;
            }
            model->switchPlayer();
        } else {
            view->displayMessage("movimiento invalido. Juega de nuevo.");
        }
    }
}

void TicTacToeController::handlePlayerMove(int row, int column) {
    model->makeMove(row, column);
    updateView();
}

void TicTacToeController::updateView() {
    view->displayBoard(model->getBoardState());
}
