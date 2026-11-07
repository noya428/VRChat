#include "Game.h"
#include <random>

// ゲームの初期化
Game::Game()
{
    currentPlayer = 0;
    pot = 0;

    players.push_back(new HumanPlayer("Player"));
    players.push_back(new CPUPlayer("CPU1"));
    players.push_back(new CPUPlayer("CPU2"));
}

// プレイヤーの削除
Game::~Game()
{
    for (Player* player : players)
    {
        delete player;
    }
}

// 山札の作成
void Game::CreateDeck()
{
    deck.clear();

    // 3～35のカードを作成
    for (int i = 3; i <= 35; i++)
    {
        deck.push_back(i);
    }

    // シャッフル
    random_device rd;
    mt19937 gen(rd());

    shuffle(deck.begin(), deck.end(), gen);

    // 24枚だけ使用
    deck.resize(24);
}

// ゲームの初期化
void Game::Initialize()
{
    CreateDeck();

    currentPlayer = 0;
    pot = 0;
}

// ゲーム進行
void Game::PlayGame()
{
    for (int i = 0; i < deck.size(); i++)
    {
        int card = deck[i];

        cout << "\n====================\n";
        cout << "カード：" << card << endl;

        // 誰かがカードを取るまで続ける
        while (true)
        {
            Player* player = players[currentPlayer];

            cout << "\n手番：" << player->GetName() << endl;

            bool take = player->ChooseAction(card, pot);

            if (take)
            {
                // カードとチップを獲得
                player->TakeCard(card, pot);

                cout << player->GetName()
                    << "がカードを獲得しました。\n";

                cout << "獲得チップ：" << pot << endl;

                // チップをリセット
                pot = 0;

                // 次のカードは次のプレイヤーから
                currentPlayer =
                    (currentPlayer + 1) % players.size();

                break;
            }
            else
            {
                // チップを支払う
                if (player->PayChip())
                {
                    pot++;

                    cout << player->GetName()
                        << "がチップを1枚支払いました。\n";
                }

                // 次のプレイヤーへ
                currentPlayer =
                    (currentPlayer + 1) % players.size();
            }
        }
    }
}

// 結果表示
void Game::ShowResult()
{
    cout << "\n====================\n";
    cout << "ゲーム終了！\n";
    cout << "====================\n";

    int minScore = 9999;
    int winner = -1;

    for (int i = 0; i < players.size(); i++)
    {
        int score = players[i]->CalculateScore();

        cout << players[i]->GetName() << endl;
        cout << "残りチップ：" << players[i]->GetChips() << endl;
        cout << "最終得点：" << score << endl;

        if (score < minScore)
        {
            minScore = score;
            winner = i;
        }
    }

    cout << "\n勝者：" << players[winner]->GetName() << endl;
    cout << "最終得点：" << minScore << endl;
}

// ゲーム開始
void Game::Start()
{
    Initialize();

    cout << "ゲシェンクを開始します！\n";

    PlayGame();

    ShowResult();
}
