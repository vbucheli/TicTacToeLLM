#include <iostream>
#include "TicTacToeModel.h"
#include "TicTacToeView.h"
#include "TicTacToeController.h"

int main() {
    // Crear las instancias del modelo, vista y controlador
    TicTacToeModel model;
    TicTacToeView view;
    TicTacToeController controller(&model, &view);

    // Mensaje inicial
    view.displayMessage("¡Bienvenido al juego de Tic Tac Toe!\n");

    // Mostrar el tablero inicial
    view.displayBoard(model.getBoardState());

    // Iniciar el juego
    controller.startGame();

    // Mensaje de despedida
    view.displayMessage("Gracias por jugar. ¡Hasta la próxima!\n");
    
    return 0;
}
