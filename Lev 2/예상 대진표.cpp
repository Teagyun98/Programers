#include <iostream>
using namespace std;

//����ǥ�� �׷��� �� ���� �ö� �� ���� �� �׷��� ¦��/2�� �ȴ�.

int solution(int n, int a, int b)
{
    int answer = 0;

    while (a != b) {
        a = (a + 1) >> 1; // ��Ʈ �����ڸ� ����Ͽ� Ȧ���� ��� ¦���� ����� 2�� ������
        b = (b + 1) >> 1; // ¦���� ��� 1 �������� ��Ʈ �������� ����� ����

        answer++;
    }

    return answer;
}