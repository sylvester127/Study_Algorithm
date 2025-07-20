//
//  자리배정.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 2. 26..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

/*
 대기 번호는 (1,1)에서 시작하여 (1,2), (1,3), (1,4), (1,5) ,.... 순으로 증가하다가 (1,R)에서 방 향을 바꿔 (2,R) , (3,R) ... 순으로 나아가게 된다. 이렇게 대기번호를 한 단계씩 늘려가면서 시뮬레이션을 통해 대기번호에 따른 좌표를 구할 수 있다.
 */

/*
#include <stdio.h>
#define N 1024
#include "FileIO.h"

int arr[N][N];

int main()
{
    FileIO();
    int p = 0, q = 0;   // p = y의 좌표, q는 x의 좌표
    int C, R, K, count = 1;   // C = 가로, R = 세로, K = 대기번호
    scanf("%d %d %d", &C, &R, &K);
    
    // 관객에게 좌석을 배정할 수 없는 경우
    if(C * R < K)
    {
        printf("0");
        return 0;
    }
    
    arr[p][q] = count++;
    while(count <= C * R && K + 1 != count)
    {
        while(arr[p][q+1] == 0 && q + 1 < R && K + 1 != count) arr[p][++q]=count++;    // 오른방향
        while(arr[p+1][q] == 0 && p + 1 < C && K + 1 != count) arr[++p][q]=count++;    // 아랫방향
        while(arr[p][q-1] == 0 && q > 0 && K + 1 != count) arr[p][--q]=count++;    // 왼쪽방향
        while(arr[p-1][q] == 0 && p > 0 && K + 1 != count) arr[--p][q]=count++;    // 윗방향
    }
    printf("%d %d",p+1,q+1);
    return 0;
}
*/

/*
 처음에 위로 R-1만큼 올라간 뒤, 오른쪽으로 C-1만큼 가고, 밑으로 R-1만큼 내려온 뒤 왼쪽으로 C-2만큼 가고, ..., 규칙적이게 번호가 매겨진다. 대기번호가 C-1, R-1, C-2, R-2, C-3, R-3, ... 씩 지났을 때 방향을 바꾸게 된다. 이를 이용하여 위에서 설명한 시뮬레이션을 묶음 단위로 할 수 있다.
 */

/*
#include <stdio.h>
#include "FileIO.h"

int main()
{
    FileIO();
    int x = 1, y = 1;   // 좌표
    int C, R, K, count = 1;     // C = 가로, R = 세로, K = 대기번호
    int i = 1;
    int flag = 1;   //1일 때 x, y 증가
    scanf("%d %d %d", &C, &R, &K);
    
    // 관객에게 좌석을 배정할 수 없는 경우
    if(C * R < K)
    {
        printf("0");
        return 0;
    }
    
    if(R < K)
    {
        y += (R - 1);
        count += (R - 1);
    }
    else
    {
        y = K;
        printf("%d %d", x, y);
        return 0;
    }
    
    while(1)
    {
        if(count + (C - i) < K)
        {
            if(flag == 1) x += C - i;
            else x -= C - i;
            count += C - i;
        }
        else
        {
            if(flag == 1) x += (K - count);
            else x -= (K - count);
            break;
        }
        
        if(count + (R - i) < K)
        {
            if(flag == 1) y -= R - i;
            else y += R - i;
            count += R - i;
        }
        else
        {
            if(flag == 1) y -= (K - count);
            else y += (K - count);
            break;
        }
        
        i++;
        flag *= -1;
    }
    printf("%d %d", x, y);
    return 0;
}
*/

/*
const int dx[] = { 1,0,-1,0 };
const int dy[] = { 0,1,0,-1 };

int n, m, c, a[1002][1002];

int main() {
    scanf("%d %d %d", &n, &m, &c);
    
    for (int i = 0; i <= 1001; i++) a[i][0] = a[0][i] = a[m + 1][i] = a[i][n + 1] = 1;
    
    int x = 0, y = 1, d = 0;
    for (int i = 1; i <= n*m; i++) {
        x += dx[d], y += dy[d];
        a[x][y] = 1;
        if (a[x + dx[d]][y + dy[d]]) d = (d + 1) % 4;
        if (i == c) {
            printf("%d %d", y, x);
            return 0;
        }
    }
    
    printf("0");
    
    return 0;
}
*/
