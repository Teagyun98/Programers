#include <iostream>
using namespace std;

//������ ���͸� �Ҹ� 1, �����̵��� ���� �϶� n�� �����ϴµ� ���� ���� ���͸� �Ҹ�

int solution(int n)
{
    int ans = 0;

    while (n != 0) 
    {
        if (n % 2 == 0) // n�� ¦���� /2�� �����̵�
            n /= 2;
        else // Ȧ���̸� --�� ���� �Ҹ��� ���͸����� ans�� ����
        {
            n--;
            ans++;
        }
    }

    return ans;
}