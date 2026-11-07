#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Player.h"
#include "CPU.h"
#include "Judge.h"

int main()
{
    srand((unsigned int)time(NULL));

    Player player;
    CPU cpu;
    Judge judge;

    // クラスのポインタ
    Player* pPlayer = &player;
    CPU* pCPU = &cpu;
    Judge* pJudge = &judge;

    // 手を選択
    int playerHand = pPlayer->SelectHand();
    int cpuHand = pCPU->SelectHand();

    // 手を表示
    pPlayer->ShowHand(playerHand);
    pCPU->ShowHand(cpuHand);

    // 勝敗判定
    pJudge->CheckResult(playerHand, cpuHand);

    return 0;
}
