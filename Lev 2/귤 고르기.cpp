#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;

    map<int, int> tan;

    for (int i = 0; i < tangerine.size(); i++) // 종류별로 분류
    {
        tan[tangerine[i]]++;
    }

    vector<int> num;

    for (auto s : tan) // auto 자료형을 이용하여 map의 value값에 접근
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