#include <string>
#include <stack>
using namespace std;

int solution(string s) {

    stack<char> str;

    for (int i = 0; i < s.length(); i++)
    {
        if (str.empty() || str.top() != s[i]) // stack str이 비어있거나 마지막 원소가 s[i]와 같지 않을 경우
            str.push(s[i]);                   // stack에 s[i]를 마지막 원소로 추가
        else if (str.top() == s[i]) // stack str의 top원소가 s[i]와 같은 경우
            str.pop();              // 마지막 원소 제거
    }

    if (str.empty())
        return 1;

    return 0;
}