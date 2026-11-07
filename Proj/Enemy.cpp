#include <iostream>
#include <cstdlib>
#include "Enemy.h"

using namespace std;

// 敵のターン
void Enemy::Turn(Character* player)
{
    int choice = rand() % 2 + 1;

    cout << "\n【敵のターン】" << endl;

    if (choice == 1)
    {
        cout << "敵は攻撃を選択した！" << endl;
        AttackCharacter(player);
    }
    else
    {
        cout << "敵は回復を選択した！" << endl;
        Heal();
    }
}
