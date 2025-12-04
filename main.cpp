#include <iostream>
using namespace std;

int main() {
    // 外層迴圈控制行數 (1到9)
    for (int i = 1; i <= 9; ++i) {
        // 內層迴圈控制列數 (1到9)
        for (int j = 1; j <= 9; ++j) {
            // 輸出乘法表的每一項，使用 "\t" 來對齊
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        // 每列後換行
        cout << endl;
    }
    return 0;
}
