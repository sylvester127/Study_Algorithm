//
//  과자.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 11. 21..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <stdio.h>
#include "FileIO.h"
int main()
{
    FileIO();
    int K, N, M;
    scanf("%d %d %d", &K, &N, &M);
    
    (K * N) >= M ? printf("%d", K * N - M) : printf("0");
    return 0;
}
