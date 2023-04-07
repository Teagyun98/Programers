#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int Gcd(int a, int b) // ��Ŭ���� ȣ����
{
    int A = max(a, b); // �� �� ū��
    int B = min(a, b); // ���� ��

    while (A % B != 0)
    {
        int R = A % B;
        A = B;
        B = R;
    }
    return B;
}

int solution(vector<int> arr)
{
    int answer = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        int LCM = answer * arr[i] / Gcd(answer, arr[i]); // �ּҰ���� = �� ���� �� / �ִ�����
        answer = LCM;
    }
    return answer;
}