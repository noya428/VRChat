#include <iostream>
#include "Player.h"

using namespace std;

// プレイヤーのターン
void Player::Turn(Character* enemy)
{
    int choice;

    cout << "\n【プレイヤーのターン】" << endl;
    cout << "1：攻撃  2：回復" << endl;
    cout << "行動を選択：";
    cin >> choice;

    while (choice != 1 && choice != 2)
    {
        cout << "1か2を入力してください：";
        cin >> choice;
    }

    if (choice == 1)
    {
        AttackCharacter(enemy);
    }
    else
    {
        Heal();
    }
}
