#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Boss.h"
#include "BattleManager.h"

using namespace std;

int main()
{
    Player player;
    Enemy enemy;
    Boss boss;

    BattleManager manager;

    // 各キャラクターの戦闘を開始
    manager.StartBattle(&player);
    manager.StartBattle(&enemy);
    manager.StartBattle(&boss);

    return 0;
}
