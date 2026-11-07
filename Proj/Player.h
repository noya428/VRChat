#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// プレイヤーの親クラス
class Player
{
private:
    string name;
    int chips;
    vector<int> cards;

public:
    Player(string name);

    string GetName();
    int GetChips();

    bool PayChip();
    void TakeCard(int card, int pot);

    int CalculateScore();

    // 行動を決める関数
    virtual bool ChooseAction(int card, int pot) = 0;
};

// 人間プレイヤー
class HumanPlayer : public Player
{
public:
    HumanPlayer(string name);

    bool ChooseAction(int card, int pot) override;
};

// CPUプレイヤー
class CPUPlayer : public Player
{
public:
    CPUPlayer(string name);

    bool ChooseAction(int card, int pot) override;
};