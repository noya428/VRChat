#pragma once
#include "Player.h"

class Game
{
private:
    vector<int> deck;
    vector<Player*> players;

    int currentPlayer;
    int pot;

    void Initialize();
    void CreateDeck();
    void PlayGame();
    void ShowResult();

public:
    Game();
    ~Game();

    void Start();
};
