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
        cout << "‹­—Í‚È•KŽE‹Z‚ð•ú‚Á‚½I" << endl;
    }
};
