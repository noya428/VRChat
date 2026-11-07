#pragma once
#include "Character.h"

class Player : public Character
{
public:
    Player() : Character("Player")
    {
    }

    void Attack() override
    {
        cout << "Playerは剣で攻撃した！" << endl;
    }
};
