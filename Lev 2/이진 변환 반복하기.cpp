#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int round = 0;
    int zero = 0;

    while (s != "1") // 반복
    {
        string tmp = "";
        round++;
        for (int i = 0; i < s.size(); i++) // 0 제거 및 개수 체크
        {
            if (s[i] == '0')
                zero++;
            else
                tmp += "1";
        }

        s = "";
        int num = tmp.size();

        while (num > 0) // 이진 변환
        {
            s += to_string(num % 2);
            num /= 2;
        }
    }

    answer.push_back(round);
    answer.push_back(zero);

    return answer;
}