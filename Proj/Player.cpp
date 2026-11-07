#include "Player.h"

// Playerの初期化
Player::Player(string name)
{
    this->name = name;
    chips = 11;
}

string Player::GetName()
{
    return name;
}

int Player::GetChips()
{
    return chips;
}

// チップを支払う
bool Player::PayChip()
{
    if (chips <= 0)
    {
        return false;
    }

    chips--;
    return true;
}

// カードとチップを獲得
void Player::TakeCard(int card, int pot)
{
    cards.push_back(card);
    chips += pot;
}

// 得点計算
int Player::CalculateScore()
{
    sort(cards.begin(), cards.end());

    int score = 0;
    int previous = -1;

    for (int card : cards)
    {
        // 連続していない場合のみ加算
        if (card != previous + 1)
        {
            score += card;
        }

        previous = card;
    }

    // チップによる減点
    score -= chips;

    return score;
}

// 人間プレイヤーの初期化
HumanPlayer::HumanPlayer(string name)
    : Player(name)
{
}

// 人間の行動
bool HumanPlayer::ChooseAction(int card, int pot)
{
    cout << "\n公開カード：" << card << endl;
    cout << "カード上のチップ：" << pot << endl;
    cout << "所持チップ：" << GetChips() << endl;

    if (GetChips() == 0)
    {
        cout << "チップがないためカードを取ります。\n";
        return true;
    }

    int choice;

    while (true)
    {
        cout << "1：カードを取る  2：パスする\n";
        cout << "選択：";
        cin >> choice;

        if (choice == 1)
        {
            return true;
        }
        else if (choice == 2)
        {
            return false;
        }

        cout << "1か2を入力してください。\n";
    }
}

// CPUプレイヤーの初期化
CPUPlayer::CPUPlayer(string name)
    : Player(name)
{
}

// CPUの行動
bool CPUPlayer::ChooseAction(int card, int pot)
{
    // チップがない場合は強制取得
    if (GetChips() == 0)
    {
        cout << GetName() << "：カードを取ります。\n";
        return true;
    }

    // カードの数字が小さい、または
    // チップが多く置かれている場合は取得
    if (card <= 15 || card - pot <= GetChips() / 2)
    {
        cout << GetName() << "：カードを取ります。\n";
        return true;
    }

    cout << GetName() << "：パスします。\n";
    return false;
}