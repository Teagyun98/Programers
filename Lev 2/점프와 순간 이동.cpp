#include <iostream>
using namespace std;

//점프시 배터리 소모 1, 순간이동은 무료 일때 n에 도달하는데 가장 적은 배터리 소모값

int solution(int n)
{
    int ans = 0;

    while (n != 0) 
    {
        if (n % 2 == 0) // n이 짝수면 /2로 순간이동
            n /= 2;
        else // 홀수이면 --로 점프 소모한 배터리양은 ans에 더함
        {
            n--;
            ans++;
        }
    }

    return ans;
}