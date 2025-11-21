#include <iostream>
using namespace std;

int main() {
    cout << "請輸入你的年齡" << endl;
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "你已滿 18 歲，是成年人。" << endl;
    } else {
        cout << "你未滿 18 歲，請專心於課業與自我成長。" << endl;
    }

    return 0;
}
