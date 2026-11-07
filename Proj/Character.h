#pragma once
#include <iostream>
#include <string>
using namespace std;

class Character
{
protected:
    string name;

public:
    Character(string n)
    {
        name = n;
    }

    // 名前を表示
    void ShowName()
    {
        cout << "キャラクター：" << name << endl;
    }

    // 攻撃処理（子クラスで変更する）
    virtual void Attack() = 0;
};
