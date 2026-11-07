#pragma once

class Character
{
protected:
    int hp;
    int attack;
    int defense;
    int evade;

    static const int MAX_HP = 100;
    static const int MIN_VALUE = 1;
    static const int MAX_VALUE = 20;
    static const int MAX_RANDOM = 12;

public:
    Character();

    int GetHP();

    void AttackCharacter(Character* target);
    void Heal();

    bool IsAlive();
    void ShowStatus();
};
