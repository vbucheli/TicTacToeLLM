#ifndef PLAYER_H
#define PLAYER_H

#include <string>

/**
 * Class: Player
 * Responsibilities:
 * - Representa un jugador en el juego Tic Tac Toe.
 * Collaborators:
 * - TicTacToeModel utiliza esta clase para gestionar los jugadores.
 */
class Player {
private:
    std::string name;
    char symbol;

public:
    Player(const std::string &name, char symbol);

    std::string getName() const;
    char getSymbol() const;
};

#endif // PLAYER_H
