#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    int num1 = 0;
    int num2 = 1;
    int num3;

    for (int i = 2; i <= n; i++)
    {
        num3 = (num1 + num2) % 1234567;
        num1 = num2;
        num2 = num3;
    }

    answer = num3;

    return answer;
}

// ������ �� �̻��� ������ ���� n��° �Ǻ���ġ ���� �� 1234567�� �������� �����ϴ� �Լ��� �����ϴ� ���ε� ���� ���� �� ��� �������� ���� �־�� �׽�Ʈ 7���� ���� ����


