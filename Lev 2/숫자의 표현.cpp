#include <string>
#include <vector>

using namespace std;

//�ڿ��� n�� �Ű������� �־��� ��, ���ӵ� �ڿ������ n�� ǥ���ϴ� ����� ��

int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; i++)  
    {
        int num = i;
        int next = num;

        while (num < n) // ���ӵ� ���ڸ� n �̻��� �� �� ���� ���ϱ�
        {
            next++;
            num += next;
        }

        if (num == n) // ����� n�� ���� �� ����
            answer++;
    } // n�� �ݺ�

    return answer;
}

