#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {

    int answer = 0;

    sort(people.begin(), people.end());//정렬

    int idx = 0;

    while (idx < people.size())//가장 무거운 사람이 확정적으로 나가고 가장 가벼운 사람이 같이 나갈 수 있으면 같이 보낸다.
    {
        int back = people.back();
        people.pop_back();

        if (people[idx] + back <= limit)
        {
            answer++;
            idx++;
        }
        else
            answer++;
    }
    return answer;
}