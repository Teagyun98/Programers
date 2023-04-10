#include <string>
#include <vector>

using namespace std;

//1,2,3,5,8 ���� ��ȹ�� ����

long long solution(int n) {
    long long answer = 0;

    int dp[2001]; // �ð� ���۵��� �þ�� �ʵ��� ���� ���� �迭�� �����Ѵ�.
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1234567;

    answer = dp[n];

    return answer;
}