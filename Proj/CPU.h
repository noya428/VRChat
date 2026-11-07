#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

class CPU
{
public:
    // CPUの手をランダムに決定
    int SelectHand()
    {
        return rand() % 3 + 1;
    }

    // 手を表示
    void ShowHand(int hand)
    {
        cout << "CPU：" << GetHandName(hand) << endl;
    }

    // 手の名前を取得
    string GetHandName(int hand)
    {
        if (hand == 1) return "グー";
        if (hand == 2) return "チョキ";
        return "パー";
    }
};
