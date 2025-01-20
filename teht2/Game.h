#ifndef GAME_H
#define GAME_H

class Game {
public:
    Game(int maxNumber);
    ~Game();
    void play();

private:
    int maxNumber;
    int playerGuess;
    int numOfGuesses;
    void printGameResult();
};

#endif
