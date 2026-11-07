#pragma once
#include "MagicalGirl.h"

// まどかクラス
class Madoka : public MagicalGirl
{
public:
    // 戦闘行動をオーバーライド
    void Fight() override
    {
        cout << "まどか：弓の攻撃！" << endl;
    }
};
