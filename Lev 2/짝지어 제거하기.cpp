#include <string>
#include <stack>
using namespace std;

int solution(string s) {

    stack<char> str;

    for (int i = 0; i < s.length(); i++)
    {
        if (str.empty() || str.top() != s[i]) // stack str�� ����ְų� ������ ���Ұ� s[i]�� ���� ���� ���
            str.push(s[i]);                   // stack�� s[i]�� ������ ���ҷ� �߰�
        else if (str.top() == s[i]) // stack str�� top���Ұ� s[i]�� ���� ���
            str.pop();              // ������ ���� ����
    }

    if (str.empty())
        return 1;

    return 0;
}