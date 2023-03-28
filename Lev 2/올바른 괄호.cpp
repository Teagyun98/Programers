#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

bool solution(string s)
{
    stack<char> stk; // ���� ����
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(') // '('�̸� ���ÿ� '(' �����߰�
            stk.push('(');
        else //'('�� �ƴҽ�
        {
            if (!stk.empty() && stk.top() == '(') // ������ ������� �ʰų� '('�� �������� ������ ���� ����
                stk.pop();
            else // ������ ������ �� ')' ���� �߰�
                stk.push(')');
        }
    }

    if (stk.empty()) // ������ ��������� true
        return true;
    else // ���ÿ� ���Ұ� ������ false
        return false;
}