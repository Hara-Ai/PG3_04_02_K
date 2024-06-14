#include <stdio.h>
#include <iostream>

// �N���X�e���v���[�g���`
template <typename T1, typename T2>
class Compare
{
public:
    auto Min(T1 a, T2 b) -> decltype(a < b ? a : b)
    {
        return (a < b) ? a : b;
    }
};

int main() {
    Compare<int, int> compInt;
    Compare<float, float> compFloat;
    Compare<double, double> compDouble;
    Compare<int, float> compIntFloat;
    Compare<int, double> compIntDouble;
    Compare<float, double> compFloatDouble;

    // �����^�ł̌v�Z���ʕ\��
    std::cout << "Min(3, 5) int: " << compInt.Min(3, 5) << std::endl;
    std::cout << "Min(3.5f, 2.5f) float: " << compFloat.Min(3.5f, 2.5f) << std::endl;
    std::cout << "Min(7.8, 2.3) double: " << compDouble.Min(7.8, 2.3) << std::endl;

    // �^���������g�ݍ��킹�̌v�Z���ʕ\��
    std::cout << "Min(3, 5.5f) int-float: " << compIntFloat.Min(3, 5.5f) << std::endl;
    std::cout << "Min(3, 6.7) int-double: " << compIntDouble.Min(3, 6.7) << std::endl;
    std::cout << "Min(5.5f, 6.7) float-double: " << compFloatDouble.Min(5.5f, 6.7) << std::endl;

    return 0;
}
