#include <iostream>

using namespace std;

int main()
{
    int N, M; // N ��(3�ʰ�)�� ī��� M �����
    int arr[100]; // �迭 ����
    cin >> N >> M; // �Է� N�� M
    for (int i = 0; i < N; i++) // N���� ���� �ݺ��ؼ� �Է�
    {
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < N - 2; i++) // 3�� �������� N���� ī�忡�� M�� ����� �ִ� ���� �����
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
    cout << max; // �ִ밪 ���
}