#include <iostream>

using namespace std;

int main()
{
    int N, M; // N 개(3초과)의 카드로 M 만들기
    int arr[100]; // 배열 생성
    cin >> N >> M; // 입력 N개 M
    for (int i = 0; i < N; i++) // N개의 숫자 반복해서 입력
    {
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < N - 2; i++) // 3중 포문으로 N개의 카드에서 M에 가까운 최대 값을 만들기
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) > max && (arr[i] + arr[j] + arr[k]) <= M)
                    max = arr[i] + arr[j] + arr[k];
            }
        }
    }
    cout << max; // 최대값 출력
}