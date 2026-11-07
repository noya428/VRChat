#include <iostream>
#include <cstdlib>
#include "Character.h"

using namespace std;

// 初期能力値を設定
Character::Character()
{
    hp = MAX_HP;
    attack = rand() % MAX_VALUE + MIN_VALUE;
    defense = rand() % MAX_VALUE + MIN_VALUE;
    evade = rand() % MAX_VALUE + MIN_VALUE;
}

// HPを取得
int Character::GetHP()
{
    return hp;
}

// 攻撃処理
void Character::AttackCharacter(Character* target)
{
    int randomValue = rand() % MAX_RANDOM + MIN_VALUE;

    cout << "攻撃！" << endl;
    cout << "攻撃時のランダム値：" << randomValue << endl;

    // 回避判定
    if (randomValue > target->evade)
    {
        int damage = attack + randomValue - target->defense;

        // ダメージが0未満にならないようにする
        if (damage < 0)
        {
            damage = 0;
        }

        target->hp -= damage;

        cout << damage << "のダメージ！" << endl;
    }
    else
    {
        cout << "攻撃は回避された！" << endl;
    }
}

// 回復処理
void Character::Heal()
{
    int healValue = rand() % MAX_RANDOM + MIN_VALUE;

    hp += healValue;

    // HP上限を100にする
    if (hp > MAX_HP)
    {
        hp = MAX_HP;
    }

    cout << healValue << "回復した！" << endl;
}

// 生存判定
bool Character::IsAlive()
{
    return hp > 0;
}

// ステータス表示
void Character::ShowStatus()
{
    cout << "HP：" << hp << endl;
    cout << "攻撃力：" << attack << endl;
    cout << "防御力：" << defense << endl;
    cout << "回避力：" << evade << endl;
}
