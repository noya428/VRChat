
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Character
{
private:
    // キャラクターの名前
    string name;

public:
    // コンストラクタ
    Character(string n)
    {
        name = n;
    }

    // 名前を取得
    string GetName()
    {
        return name;
    }

    // 攻撃処理（子クラスでオーバーライド可能）
    virtual void Attack()
    {
        cout << "攻撃した！" << endl;
    }
};
