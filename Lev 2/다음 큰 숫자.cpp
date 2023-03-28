#include <string>
#include <vector>

using namespace std;

//�־��� n���� ū �� �� ������ȭ�� n�� 1�� ������ ���� ���� ���� ��

int solution(int n) {
    int answer = n;

    int one = 0; // n�� 1�� ������ �����ϴ� ����
    int nextone = 0; // n���� ū���� 1�� ������ �����ϴ� ����
    int num = 0;

    while (n > 0) // ���� ���� ���ϱ�
    {
        if (n % 2)
            one++;
        n /= 2;
    }

    while (one != nextone)
    {
        answer++;
        num = answer;
        nextone = 0;
        while (num > 0)
        {
            if (num % 2)
                nextone++;
            num /= 2;
        }
    }

    return answer;
}

