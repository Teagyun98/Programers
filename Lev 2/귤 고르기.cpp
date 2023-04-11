#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;

    map<int, int> tan;

    for (int i = 0; i < tangerine.size(); i++) // �������� �з�
    {
        tan[tangerine[i]]++;
    }

    vector<int> num;

    for (auto s : tan) // auto �ڷ����� �̿��Ͽ� map�� value���� ����
    {
        num.push_back(s.second);
    }

    sort(num.begin(), num.end(), greater<int>());

    int x = 0;

    for (int i = 0; i < num.size(); i++)
    {
        if (x >= k)
            break;
        answer++;
        x += num[i];
    }

    return answer;
}