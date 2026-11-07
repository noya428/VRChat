
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Character
{
private:
    string name;

public:
    Character(string n)
    {
        name = n;
    }

    string GetName()
    {
        return name;
    }

    virtual void Attack()
    {
        cout << "UŒ‚‚·‚éI" << endl;
    }
};
