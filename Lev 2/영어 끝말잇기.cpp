#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool wordCheck(int i, vector<string> words) //���� �ܾ�� ��ġ���� Ȯ��
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

        if (num == n) // ������ �� ���� �ٽ� ó�� ������ ���ư��� ����++
        {
            num = 1;
            round++;
        }
        else
            num++;
    }

    //�ƹ��� �ɸ��� �ʾ��� �� [0, 0] ��ȯ
    answer.push_back(0);
    answer.push_back(0);

    return answer;
}