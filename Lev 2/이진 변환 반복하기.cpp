#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int round = 0;
    int zero = 0;

    while (s != "1") // �ݺ�
    {
        string tmp = "";
        round++;
        for (int i = 0; i < s.size(); i++) // 0 ���� �� ���� üũ
        {
            if (s[i] == '0')
                zero++;
            else
                tmp += "1";
        }

        s = "";
        int num = tmp.size();

        while (num > 0) // ���� ��ȯ
        {
            s += to_string(num % 2);
            num /= 2;
        }
    }

    answer.push_back(round);
    answer.push_back(zero);

    return answer;
}