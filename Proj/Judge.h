#pragma once
#include <iostream>
using namespace std;

class Judge
{
public:
    // 勝敗判定
    void CheckResult(int playerHand, int cpuHand)
    {
        if (playerHand == cpuHand)
        {
            cout << "結果：引き分け！" << endl;
        }
        else if (
            (playerHand == 1 && cpuHand == 2) ||
            (playerHand == 2 && cpuHand == 3) ||
            (playerHand == 3 && cpuHand == 1))
        {
            cout << "結果：プレイヤーの勝ち！" << endl;
        }
        else
        {
            cout << "結果：CPUの勝ち！" << endl;
        }
    }
};
