#pragma once
#include "Character.h"

class BattleManager
{
public:
    // 戦闘開始
    void StartBattle(Character* character)
    {
        cout << "\n=== 戦闘開始 ===" << endl;

        // キャラクターの名前を表示
        character->ShowName();

        // 攻撃処理
        character->Attack();

        cout << "=== 戦闘終了 ===" << endl;
    }
};
