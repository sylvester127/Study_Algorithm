#include <stdio.h>
#include "FileIO.h"
#define N 16
#define SIZE 3
int arr[N][N];

void q(int num, int h, int w);

int main()
{
    // 파일 입출력
    FileIO();
    
    // 입력
    for (int i = 1; i <= SIZE * SIZE; i++)
    {
        for (int j = 1; j <= SIZE * SIZE; j++)
            scanf("%d", &arr[i][j]);
    }
    
    for (int i = 1; i <= SIZE * SIZE; i++)
        q(i, 1, 1);
    
    return 0;
}

void q(int num, int h, int w)
{
    int i, j, temph, tempw;
    
    // 행렬 체크
    for (i = 1; i <= SIZE * SIZE; i++)
    {
        if (arr[i][w] == num || arr[h][i] == num)
            return;
    }
    
    // 정사각형 체크
    for (i = h - (h - 1) % SIZE; i <= h - (h - 1) % SIZE + (SIZE-1); i++)
    {
        for (j = w - (w - 1) % SIZE; j <= w - (w - 1) % SIZE + (SIZE-1); j++)
        {
            if (arr[i][j] == num)
                return;
        }
    }
    
    arr[h][w] = num;	// write
    
    // 출력
    if (h == SIZE * SIZE && w == SIZE * SIZE)
    {
        for (i = 1; i <= SIZE * SIZE; i++)
        {
            for (j = 1; j <= SIZE * SIZE; j++)
            {
                printf("%2d", arr[i][j]);
            }
            printf("\n");
        }
        arr[SIZE * SIZE][SIZE * SIZE] = 0;	//리셋
        printf("\n");
        return;
    }
    
    // 엔진
    for (i = 1; i <= SIZE * SIZE; i++)
    {
        temph = h;
        tempw = w;
        
        // 빈공간 찾기 temph, tempw
        while (1)
        {
            if (tempw == SIZE * SIZE)
            {
                temph++;
                tempw = 1;
            }
            else tempw++;
            
            if (arr[temph][tempw] == 0)
                break;
        }
        q(i, temph, tempw);
    }
    arr[h][w] = 0;	//리셋
}
