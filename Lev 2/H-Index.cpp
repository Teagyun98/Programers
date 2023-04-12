#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;

    sort(citations.begin(), citations.end(), greater<int>());

    if (!citations[0]) // 최대인용수가 0이면 0반환
        return 0;

    for (int i = 0; i < citations.size(); i++)
    {
        if (citations[i] >= i + 1)
            answer++; // case 6 5 3 1 0  
                      //      1 2 3 4 5
        else
            break;
    }

    return answer;
}