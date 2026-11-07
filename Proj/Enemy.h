
#pragma once
#include "Character.h"

class Enemy : public Character
{
public:
    Enemy() : Character("Enemy")
    {
    }

    void Attack() override
    {
        cout << "‚©‚Ý‚Â‚«UŒ‚I" << endl;
    }
};
