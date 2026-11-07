#pragma once
#include <iostream>
using namespace std;

// 魔法少女の基底クラス
class MagicalGirl
{
public:
    // 戦闘行動（派生クラスで必ず実装）
    virtual void Fight() = 0;

    // 共通プロフィール表示
    virtual void ShowProfile()
    {
        cout << "魔法少女：プロフィール" << endl;
    }

    // 仮想デストラクタ
    virtual ~MagicalGirl()
    {
    }
};

