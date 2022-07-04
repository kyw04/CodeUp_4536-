#include <iostream>
using namespace std;

int cnt[101];
int main()
{
	int arr[10];
	int max = 0, maxIndex, avg = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		cnt[arr[i] / 10]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (max < cnt[arr[i] / 10])
		{
			max = cnt[arr[i] / 10];
			maxIndex = i;
		}
		avg += arr[i];
	}
	avg /= 10;
	cout << avg << endl;
	cout << arr[maxIndex];
	return 0;
}