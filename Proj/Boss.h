#pragma once
#include "Character.h"

class Boss : public Character
{
public:
    Boss() : Character("Boss")
    {
    }

    void Attack() override
    {
        cout << "Bossは強力な魔法を放った！" << endl;
    }
};
