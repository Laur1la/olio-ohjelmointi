#include <iostream>
#include <cstdlib>
#include "Game.h"
using namespace std;

Game::Game(int maxNumber) : maxNumber(maxNumber), playerGuess(0), numOfGuesses(0) {
    srand(time(0));
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
}

Game::~Game() {
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play() {
    int targetNumber = rand() % maxNumber + 1;
    cout << "Give your guess between 1-" << maxNumber << endl;
    while (true) {
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < targetNumber) {
            cout << "Your guess is too small" << endl;
        } else if (playerGuess > targetNumber) {
            cout << "Your guess is too big" << endl;
        } else {
            cout << "Your guess is right = " << playerGuess << endl;
            printGameResult();
            break;
        }
        cout << "Give your guess between 1-" << maxNumber << endl;
    }
}

void Game::printGameResult() {
    cout << "You guessed the right answer = " << playerGuess << " with " << numOfGuesses << " guesses" << endl;
}
