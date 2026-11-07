
#include <iostream>
#include "Character.h"
#include "Wizard.h"

using namespace std;

int main()
{
    Wizard wizard;

    Character* character = &wizard;

    cout << "–¼‘OF" << character->GetName() << endl;

    character->Attack();

    return 0;
}
