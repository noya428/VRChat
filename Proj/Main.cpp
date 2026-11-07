#include <iostream>
#include "MagicalGirl.h"
#include "Madoka.h"
#include "Homura.h"

using namespace std;

int main()
{
    // オブジェクトを作成
    Madoka madoka;
    Homura homura;

    // 基底クラス型のポインタ配列
    MagicalGirl* girls[2];

    girls[0] = &madoka;
    girls[1] = &homura;

    // 共通処理で戦闘とプロフィールを表示
    for (int i = 0; i < 2; i++)
    {
        girls[i]->Fight();
        girls[i]->ShowProfile();

        cout << endl;
    }

    return 0;
}
