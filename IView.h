#ifndef IVIEW_H
#define IVIEW_H

#include <string>

/**
 * Interface: IView
 * Responsibilities:
 * - Define cómo se muestra el estado del juego y los mensajes al usuario.
 * Collaborators:
 * - TicTacToeController interactúa con esta interfaz para actualizar la vista.
 */
class IView {
public:
    virtual ~IView() = default;

    virtual void displayBoard(const std::vector<std::vector<char>>& grid) const = 0;
    virtual void displayMessage(const std::string &message) const = 0;
    virtual void showWinner(const std::string &playerName) const = 0;
    virtual void showDraw() const = 0;
};

#endif // IVIEW_H
