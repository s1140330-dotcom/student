#include <iostream>
#include <cstdlib>  // 用於 rand() 和 srand()
#include <ctime>    // 用於 time()

using namespace std;

int main() {
    // 設定隨機數種子
    srand(time(0));

    // 隨機生成 1 到 10 之間的數字
    int target = rand() % 10 + 1;

    int guess; // 用來存放使用者的猜測
    int attempts = 0; // 記錄猜測的次數

    cout << "歡迎來到猜數字遊戲！\n";
    cout << "我已經選擇了一個 1 到 10 之間的數字，請你猜一下！\n";

    // 使用 while 迴圈來重複猜測
    while (true) {
        cout << "請輸入你的猜測: ";
        cin >> guess;
        attempts++; // 每次猜測後猜測次數增加

        // 判斷猜測的結果
        if (guess < target) {
            cout << "你的猜測太小了！再試試看吧！\n";
        } else if (guess > target) {
            cout << "你的猜測太大了！再試試看吧！\n";
        } else {
            cout << "恭喜你猜對了！\n";
            cout << "你總共猜了 " << attempts << " 次。\n";
            break;  // 結束迴圈
        }
    }

    return 0;
}

