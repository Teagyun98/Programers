#include <string>
#include <vector>

using namespace std;

//1,2,3,5,8 동적 계획법 문제

long long solution(int n) {
    long long answer = 0;

    int dp[2001]; // 시간 복작도가 늘어나지 않도록 이전 값을 배열로 저장한다.
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1234567;

    answer = dp[n];

    return answer;
}