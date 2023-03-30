#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool wordCheck(int i, vector<string> words) //이전 단어와 겹치는지 확인
{
    for (int j = 0; j < i; j++)
    {
        if (words[j] == words[i])
            return true;
    }
    return false;
}

vector<int> solution(int n, vector<string> words) {

    vector<int> answer;

    int num = 1;
    int round = 1;

    for (int i = 0; i < words.size(); i++)
    {
        if (i == 0)
        {
            if (words[i].length() == 1)
            {
                answer.push_back(1);
                answer.push_back(1);
                return answer;
            }
        }
        else if (words[i].length() == 1 || words[i - 1].back() != words[i].front() || wordCheck(i, words))
        {
            answer.push_back(num);
            answer.push_back(round);
            return answer;
        }

        if (num == n) // 순서가 다 돌면 다시 처음 순서로 돌아가고 라운드++
        {
            num = 1;
            round++;
        }
        else
            num++;
    }

    //아무도 걸리지 않았을 시 [0, 0] 반환
    answer.push_back(0);
    answer.push_back(0);

    return answer;
}