#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

bool solution(string s)
{
    stack<char> stk; // 스택 선언
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(') // '('이면 스택에 '(' 원소추가
            stk.push('(');
        else //'('가 아닐시
        {
            if (!stk.empty() && stk.top() == '(') // 스택이 비어있지 않거나 '('가 마지막에 있을시 원소 제거
                stk.pop();
            else // 스택이 비여있을 때 ')' 원소 추가
                stk.push(')');
        }
    }

    if (stk.empty()) // 스택이 비어있으면 true
        return true;
    else // 스택에 원소가 있으면 false
        return false;
}