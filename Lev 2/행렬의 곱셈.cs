using System;

public class Solution
{
    public int[,] solution(int[,] arr1, int[,] arr2)
    {

        int[,] answer = new int[arr1.GetLength(0), arr2.GetLength(1)];

        //if(arr1.GetLength(1)==arr2.GetLength(0)) 행렬 필수조건

        for (int i = 0; i < arr1.GetLength(0); i++)
        {
            for (int j = 0; j < arr1.GetLength(1); j++)
            {
                for (int k = 0; k < arr2.GetLength(1); k++)
                {
                    answer[i, k] += arr1[i, j] * arr2[j, k];
                    //case 1 ex) [[1*3+4*3,1*3+4*3],[3*3+2*3,3*3+2*3],[4*3+1*3,4*3+1*3]]
                }
            }
        }
        return answer;
    }
}