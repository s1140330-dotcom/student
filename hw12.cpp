#include <iostream>
using namespace std;

int main() {
    int grade [5] = {98, 20, 30, 40, 50}; // 範例陣列
    int sum = 0;                     // 用來存總和

    // 計算總和
    for (int i = 0; i < 5; i++) {
        sum += grade[i];
    }

    // 計算平均
    double avg = sum / 5.0; // 5.0 用 double 避免整數除法

    cout << "總和 = " << sum << endl;
    cout << "平均 = " << avg << endl;

    return 0;
}
