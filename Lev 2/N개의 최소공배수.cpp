#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int Gcd(int a, int b) // 유클리드 호제법
{
    int A = max(a, b); // 둘 중 큰수
    int B = min(a, b); // 작은 수

    while (A % B != 0)
    {
        int R = A % B;
        A = B;
        B = R;
    }
    return B;
}

int solution(vector<int> arr)
{
    int answer = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        int LCM = answer * arr[i] / Gcd(answer, arr[i]); // 최소공배수 = 두 수의 곱 / 최대공약수
        answer = LCM;
    }
    return answer;
}