#include <iostream>

// �N���X�e���v���[�g���`
template <typename T>

class Compare {
public:
    // Min�����o�֐��̒�`
    T Min(T a, T b) {
        return (a < b) ? a : b;
    }
};

int main() { 
    // �e�^�̑g�ݍ��킹��Compare�N���X�̃C���X�^���X���쐬
    Compare<int> compInt;
    Compare<float> compFloat;
    Compare<double> compDouble;

    // �����^�ł̌v�Z���ʕ\��
    std::cout << "Min(3, 5) int: " << compInt.Min(3, 5) << std::endl;
    std::cout << "Min(3.5f, 2.5f) float: " << compFloat.Min(3.5f, 2.5f) << std::endl;
    std::cout << "Min(7.8, 2.3) double: " << compDouble.Min(7.8, 2.3) << std::endl;

    // �^���������g�ݍ��킹�̃C���X�^���X�𐶐�
    Compare<int> compIntFloat;
    Compare<int> compIntDouble;
    Compare<float> compFloatDouble;

    // �^�ϊ��ł̌v�Z���ʕ\��
    std::cout << "Min(3, 5.5f) int-float: " << compInt.Min(3, static_cast<int>(5.5f)) << std::endl;
    std::cout << "Min(3, 6.7) int-double: " << compInt.Min(3, static_cast<int>(6.7)) << std::endl;
    std::cout << "Min(5.5f, 6.7) float-double: " << compFloat.Min(5.5f, static_cast<float>(6.7)) << std::endl;

    return 0;
}
