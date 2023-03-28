#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";

    vector<int> v;
    string tmp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ') // 띄어쓰기가 나올때 까지 tmp에 값 저장
            tmp += s[i];
        else //띄어쓰기가 나오면 v에 int형으로 값 전달
        {
            v.push_back(stoi(tmp)); // push_back : 벡터 끝에 원소 추가, stoi : string to int
            tmp.clear(); // tmp 초기화
        }
    }

    v.push_back(stoi(tmp)); // 마지막 값 처리

    sort(v.begin(), v.end()); // 정렬

    answer += to_string(v.front()) + " " + to_string(v.back());
    return answer;
}