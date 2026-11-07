#pragma once
#include <iostream>
using namespace std;

class Player
{
public:
    // プレイヤーの手を入力
    int SelectHand()
    {
        int hand;

        cout << "じゃんけん！" << endl;
        cout << "1: グー  2: チョキ  3: パー" << endl;
        cout << "手を選んでください：";
        cin >> hand;

        // 入力チェック
        while (hand < 1 || hand > 3)
        {
            cout << "1～3を入力してください：";
            cin >> hand;
        }

        return hand;
    }

    // 手を表示
    void ShowHand(int hand)
    {
        cout << "プレイヤー：" << GetHandName(hand) << endl;
    }

    // 手の名前を取得
    string GetHandName(int hand)
    {
        if (hand == 1) return "グー";
        if (hand == 2) return "チョキ";
        return "パー";
    }
};

