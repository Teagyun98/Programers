#include <string>
#include <vector>

using namespace std;

//자연수 n이 매개변수로 주어질 때, 연속된 자연수들로 n을 표현하는 방법의 수

int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; i++)  
    {
        int num = i;
        int next = num;

        while (num < n) // 연속된 숫자를 n 이상이 될 때 까지 더하기
        {
            next++;
            num += next;
        }

        if (num == n) // 결과가 n과 같을 시 실행
            answer++;
    } // n번 반복

    return answer;
}

