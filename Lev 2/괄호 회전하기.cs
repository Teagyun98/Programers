using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int solution(string s)
    {
        int answer = 0;
        List<char> tmp = s.ToList<char>();

        for (int i = 0; i < s.Length; i++)
        {
            bool isRight = IsRightCheck(tmp);

            if (isRight)
                answer++;

            char c = tmp[0]; //회전
            tmp.RemoveAt(0);
            tmp.Add(c);

        }
        return answer;
    }

    public bool IsRightCheck(List<char> s)
    {
        Stack<char> stack = new Stack<char>();

        foreach (char c in s)
        {
            switch (c)
            {
                case '(':
                case '{':
                case '[':
                    stack.Push(c); // 열린 괄호면 추가
                    break;
                case ')':
                case '}':
                case ']':
                    if (stack.Count == 0) // 닫힌 괄호만 있는 경우 제외
                        return false;

                    char pop_c = stack.Pop();

                    if (!(pop_c + 1 == c || pop_c + 2 == c)) // 괄호 확인
                        return false;
                    break;
            }
        }

        if (stack.Count > 0)
            return false;

        return true;
    }
}