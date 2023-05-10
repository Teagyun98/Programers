using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(int[] elements)
    {
        int answer = 0;
        int index = 0;
        List<int> sum = new List<int>(); // 리스트 선언 및 초기화


        for (int i = 0; i < elements.Length; i++) //모든 배열 원소 돌기
        {
            for (int j = 1; j < elements.Length; j++)// 더할 수의 개수
            {

                for (int k = 0; k < j; k++) //
                {
                    index += elements[(i + k) % elements.Length]; // 배열의 크기를 넘어가서 오류가 나지 않고 순환하기 위해 배열의 크기만큼 나머지 연산
                }

                sum.Add(index);
                index = 0; // index 마지막에 재활용 하려고 끝에 0으로 초기화
            }
        }

        sum.Sort();// 정렬

        foreach (int i in sum) // 리스트를 돌며 겹치는 수는 제외하고 다른 수만 answer에 더함
        {
            if (i != index)
            {
                index = i;
                answer++;
            }
        }

        return ++answer; //마지막 전부 더한 수 추가
    }
}