#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    answer += toupper(s[0]); //ù ���Ҵ� �տ� ���⸦ �ν��� �� ���� ���� ó��

    for (int i = 1; i < s.length(); i++) // ù ���Ҹ� ���� ó���Ͽ� 1���� ����
    {
        if (s[i - 1] == ' ') //�ٷ� ���� ���Ұ� �����̸� �빮�� �ƴϸ� �ҹ���
            answer += toupper(s[i]);
        else
            answer += tolower(s[i]);
    }

    return answer;
}

//string������ ���⸦ �ν��Ͽ� ���� ���ڸ� �빮�ڷ� �������� �ҹ��ڷ� ����� Ǯ�̸� �Ͽ����ϴ�.