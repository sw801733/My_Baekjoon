#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left = 10;
    int right = 12;

    for(int i = 0; i < numbers.size(); i++) {
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
            answer += "L";
            left = numbers[i];
        } else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
            answer += "R";
            right = numbers[i];
        } else {
            if(numbers[i] == 0) numbers[i] = 11;

            // 현재 손가락 위치를 (x, y) 좌표로 변환
            int left_x = (left - 1) / 3, left_y = (left - 1) % 3;
            int right_x = (right - 1) / 3, right_y = (right - 1) % 3;
            int target_x = (numbers[i] - 1) / 3, target_y = (numbers[i] - 1) % 3;

            // 왼손과 오른손의 거리 계산
            int leftlen = abs(target_x - left_x) + abs(target_y - left_y);
            int rightlen = abs(target_x - right_x) + abs(target_y - right_y);

            // 거리 비교 후 손 결정
            if(leftlen < rightlen) {
                answer += "L";
                left = numbers[i];
            } else if(leftlen > rightlen) {
                answer += "R";
                right = numbers[i];
            } else {
                if(hand == "left") {
                    answer += "L";
                    left = numbers[i];
                } else {
                    answer += "R";
                    right = numbers[i];
                }
            }
        }
    }
    return answer;
}
