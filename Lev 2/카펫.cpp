#include <string>
#include <vector>

using namespace std;

//�׵θ��� ����, ���ʿ� ������� ī���� ���� ���� ���̸� ���ϴ� ����

vector<int> solution(int brown, int yellow) {

    vector<int> answer;

    int num = brown + yellow;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0 && (num / i * 2 + i * 2) - 4 == brown) // �� ¦�� �Ǵ� ������� �׵θ��� ũ��� �¾� ���������� Ȯ��
        {
            if (num / i > i) // ���� ���� �� ū���� ���� ��
            {
                answer.push_back(num / i);
                answer.push_back(i);
                return answer;
            }
            else //¦�� �Ǵ� ����� ���� ���� ��� ���� �������
            {
                answer.push_back(i);
                answer.push_back(num / i);
                return answer;
            }
        }
    }

}