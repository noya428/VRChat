
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Boss.h"

using namespace std;

int main()
{
    Player player;
    Enemy enemy;
    Boss boss;

    cout << "yPlayerz" << endl;
    player.ShowName();
    player.Attack();

    cout << endl;

    cout << "yEnemyz" << endl;
    enemy.ShowName();
    enemy.Attack();

    cout << endl;

    cout << "yBossz" << endl;
    boss.ShowName();
    boss.Attack();

    return 0;
}
