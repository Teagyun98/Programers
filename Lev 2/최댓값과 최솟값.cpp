#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";

    vector<int> v;
    string tmp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ') // ���Ⱑ ���ö� ���� tmp�� �� ����
            tmp += s[i];
        else //���Ⱑ ������ v�� int������ �� ����
        {
            v.push_back(stoi(tmp)); // push_back : ���� ���� ���� �߰�, stoi : string to int
            tmp.clear(); // tmp �ʱ�ȭ
        }
    }

    v.push_back(stoi(tmp)); // ������ �� ó��

    sort(v.begin(), v.end()); // ����

    answer += to_string(v.front()) + " " + to_string(v.back());
    return answer;
}