using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(string[,] clothes)
    {
        int answer = 1; // 경우의 수를 곱하여 구하기 때문에 초기값 1로 설정
        Dictionary<string, int> dic = new Dictionary<string, int>();

        for (int i = 0; i < clothes.GetLength(0); i++)
        {
            if (dic.ContainsKey(clothes[i, 1])) // dic의 key값에 이미 저장되어 있으면
                dic[clothes[i, 1]]++;         // 1추가
            else
                dic.Add(clothes[i, 1], 1); //없으면 새로 저장
        }

        foreach (var item in dic)
            answer *= item.Value + 1; // 입지 않는 경우를 포함하기 위해 +1

        return answer - 1; //하나도 입지 않은 경우를 제외하기 위해 -1
    }
}