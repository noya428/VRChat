#include <iostream>
#include "Character.h"

using namespace std;

int main()
{
    // Characterオブジェクトを作成
    Character character("Player");

    // 名前を表示
    cout << "名前：" << character.GetName() << endl;

    // 攻撃
    character.Attack();

    return 0;
}
