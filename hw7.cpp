#include <iostream>
using namespace std;

int main() {
    double height, weight, bmi;

    cout << "請輸入身高(cm): ";
    cin >> height;

    cout << "請輸入體重(kg): ";
    cin >> weight;

    // 將身高轉換為公尺
    height = height / 100.0;

    // 計算 BMI
    bmi = weight / (height * height);

    cout << "您的 BMI = " << bmi << endl;
    
    if (bmi < 18.5) {
    cout << "您可能過輕" << endl;
} else if (bmi < 24.9) {
    cout << "您屬於正常" << endl;
} else {
    cout << "您可能過重" << endl;
}

   return 0;
}
