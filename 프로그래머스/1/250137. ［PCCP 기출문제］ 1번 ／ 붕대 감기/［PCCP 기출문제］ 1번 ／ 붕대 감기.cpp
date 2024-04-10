#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int maxHealth, vector<vector<int>> attacks) {
    int currentHealth = maxHealth; // 현재 체력
    int prevTime = 0; // 이전 공격 시간

    // bandage의 요소에 명확한 이름 할당
    int seqTime = bandage[0]; // 연속 회복 시간
    int secHeal = bandage[1]; // 초당 회복량
    int plusHeal = bandage[2]; // 추가 회복량

    for(vector<int> attack : attacks) {
        int attackTime = attack[0]; // 공격 시간
        int damage = attack[1]; // 공격 데미지

        // 이전 공격 이후로 경과한 시간 계산
        int elapsedTime = attackTime - prevTime;

        // 공격 사이에 체력 회복
        currentHealth += (elapsedTime - 1) * secHeal; // 초당 회복량 적용
        if (elapsedTime > seqTime) {
            currentHealth += (elapsedTime - 1) / seqTime * plusHeal; // 추가 회복량 적용
        }

        // 최대 체력을 초과하지 않도록 조정
        currentHealth = min(currentHealth, maxHealth);

        // 공격으로 인한 체력 감소
        currentHealth -= damage;

        // 현재 체력이 0 이하이면 종료
        if (currentHealth <= 0) {
            return -1; // 체력이 모두 소진되어 실패
        }

        prevTime = attackTime; // 이전 공격 시간 갱신
    }

    // 모든 공격을 견디고 남은 체력 반환
    return currentHealth;
}
