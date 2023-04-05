#include <iostream>
using namespace std;

//대진표를 그렸을 때 위로 올라 갈 수록 각 그룹의 짝수/2가 된다.

int solution(int n, int a, int b)
{
    int answer = 0;

    while (a != b) {
        a = (a + 1) >> 1; // 비트 연산자를 사용하여 홀수의 경우 짝수로 만들어 2로 나누고
        b = (b + 1) >> 1; // 짝수의 경우 1 더해져도 비트 연산자의 결과가 같다

        answer++;
    }

    return answer;
}