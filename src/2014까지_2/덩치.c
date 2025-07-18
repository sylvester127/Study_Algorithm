#include <stdio.h>
#define N 50
int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, x, y;
	int arr[N][3];	//Å°, ¸ö¹«°Ô, µ¢Ä¡ ¼ø
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
		scanf_s("%d %d", &arr[i][0], &arr[i][1]);

	for (int i = 0; i < n; i++)
	{
		int cnt = 1;
		x = arr[i][0]; y = arr[i][1];
		for (int j = 0; j < n; j++)
		{
			int tempX = arr[j][0], tempY = arr[j][1];

			if (tempX > x && tempY > y)
				cnt++;
		}
		arr[i][2] = cnt;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i][2]);
	return 0;
}