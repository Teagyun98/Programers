#include <string>
#include <vector>

using namespace std;

//주어진 n보다 큰 수 중 이진변화시 n과 1의 개수가 같은 가장 작은 수

int solution(int n) {
    int answer = n;

    int one = 0; // n의 1의 개수를 저장하는 변수
    int nextone = 0; // n보다 큰수의 1의 개수를 저장하는 변수
    int num = 0;

    while (n > 0) // 일의 개수 구하기
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

