// https://school.programmers.co.kr/learn/courses/30/lessons/148653?language=cpp

#include <string>
#include <vector>

using namespace std;

int find(int now, int count, int c) {
    if (now == 0 || c == 9) {
        return count;
    }
    int plusValue = 10 - now % 10;
    int miusValue = now % 10;
    int plusCount = find((now + plusValue) / 10, count + plusValue, c + 1);
    int minusCount = find((now - miusValue) / 10, count + miusValue, c + 1);
    return plusCount < minusCount ? plusCount : minusCount;
}

int solution(int storey) {
    return find(storey, 0, 0);
}