#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    answer += toupper(s[0]); //첫 원소는 앞에 띄어쓰기를 인식할 수 없어 따로 처리

    for (int i = 1; i < s.length(); i++) // 첫 원소를 따로 처리하여 1부터 시작
    {
        if (s[i - 1] == ' ') //바로 앞의 원소가 띄어쓰기이면 대문자 아니면 소문자
            answer += toupper(s[i]);
        else
            answer += tolower(s[i]);
    }

    return answer;
}

//string값에서 띄어쓰기를 인식하여 다음 문자를 대문자로 나머지를 소문자로 만들어 풀이를 하였습니다.