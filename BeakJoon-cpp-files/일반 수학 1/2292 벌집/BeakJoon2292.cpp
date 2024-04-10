#include <iostream>

using namespace std;

int findHoneycombRooms(int N) {
    if (N == 1)
        return 1;

    int roomCount = 1;  // 중앙 방(1번 방)을 포함한 테두리 방의 개수
    int n = 1;          // 현재 테두리 방 중 가장 큰 번호

    while (true) {
        n += 6 * roomCount;  // 다음 테두리 방 중 가장 큰 번호
        roomCount++;         // 테두리 방의 개수 증가
        if (N <= n)          // 주어진 숫자가 현재 테두리의 범위에 속하면
            break;
    }

    return roomCount;
}

int main() {
    int N;
    cin >> N;
    cout << findHoneycombRooms(N) << endl;
    return 0;
}
