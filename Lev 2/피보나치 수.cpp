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

// 문제가 좀 이상함 문제만 보면 n번째 피보나치 수에 만 1234567의 나머지를 리턴하는 함수를 구현하는 것인데 값을 구할 때 계속 나머지를 구해 주어야 테스트 7부터 답이 맞음


