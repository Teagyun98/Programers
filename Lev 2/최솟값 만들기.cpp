#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

//길이가 같은 배열을 받아 각 각 곱하여 더했을 때 가장 작은 숫자

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end()); // 오름차순
    sort(B.begin(), B.end(), greater<int>()); // 내림차순

    for (int i = 0; i < A.size(); i++)
    {
        answer += A[i] * B[i];
    }

    return answer;
}