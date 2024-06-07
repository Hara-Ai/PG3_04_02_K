#include <iostream>

// クラステンプレートを定義
template <typename T>

class Compare {
public:
    // Minメンバ関数の定義
    T Min(T a, T b) {
        return (a < b) ? a : b;
    }
};

int main() { 
    // 各型の組み合わせでCompareクラスのインスタンスを作成
    Compare<int> compInt;
    Compare<float> compFloat;
    Compare<double> compDouble;

    // 同じ型での計算結果表示
    std::cout << "Min(3, 5) int: " << compInt.Min(3, 5) << std::endl;
    std::cout << "Min(3.5f, 2.5f) float: " << compFloat.Min(3.5f, 2.5f) << std::endl;
    std::cout << "Min(7.8, 2.3) double: " << compDouble.Min(7.8, 2.3) << std::endl;

    // 型を混ぜた組み合わせのインスタンスを生成
    Compare<int> compIntFloat;
    Compare<int> compIntDouble;
    Compare<float> compFloatDouble;

    // 型変換での計算結果表示
    std::cout << "Min(3, 5.5f) int-float: " << compInt.Min(3, static_cast<int>(5.5f)) << std::endl;
    std::cout << "Min(3, 6.7) int-double: " << compInt.Min(3, static_cast<int>(6.7)) << std::endl;
    std::cout << "Min(5.5f, 6.7) float-double: " << compFloat.Min(5.5f, static_cast<float>(6.7)) << std::endl;

    return 0;
}
