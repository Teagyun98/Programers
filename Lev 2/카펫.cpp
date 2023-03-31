#include <string>
#include <vector>

using namespace std;

//테두리가 갈색, 안쪽에 노란색의 카펫의 가로 세로 길이를 구하는 문제

vector<int> solution(int brown, int yellow) {

    vector<int> answer;

    int num = brown + yellow;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0 && (num / i * 2 + i * 2) - 4 == brown) // 각 짝이 되는 약수들이 테두리의 크기와 맞아 떨어지는지 확인
        {
            if (num / i > i) // 가로 세로 중 큰수가 먼저 들어감
            {
                answer.push_back(num / i);
                answer.push_back(i);
                return answer;
            }
            else //짝이 되는 약수가 같은 수일 경우 순서 상관없음
            {
                answer.push_back(i);
                answer.push_back(num / i);
                return answer;
            }
        }
    }

}