
#pragma once
#include "Character.h"

class Wizard : public Character
{
public:
    Wizard() : Character("魔法使い")
    {
    }

    void Attack() override
    {
        cout << "魔法で攻撃する！" << endl;
    }
};
