//
//  C.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 5. 13..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <stdio.h>
#include "FileIO.h"
#define N 10010

int A[N][N];

typedef struct HashTable
{
    int TableSize;
}HashTable;

HashTable *SHT_CreateHashTable(int TableSize)
{
    HashTable *HT = new HashTable();
    HT->TableSize = TableSize;
    return HT;
}

int SHT_Hash(int Key, int TableSize)
{
    return Key%TableSize;
}

int SHT_Set(HashTable *HT, int Key)
{
    int Address = SHT_Hash(Key, HT->TableSize);
    return Address;
}

int main()
{
    FileIO();
    HashTable *HT = SHT_CreateHashTable(24593);
    
    int i, j, n, p, x, y, count = 0;
    
    scanf("%d", &n);
    
    for (p = 1; p <= n; p++)
    {
        scanf("%d%d", &x, &y);
        
        x = SHT_Set(HT, x);
        y = SHT_Set(HT, y);
        
        for (i = 1; i <= x; i++)
        {
            for (j = 1; j <= y; j++)
            {
                A[j][i] = 1;
            }
        }
    }
    
    for (i = 0; i <= N; i++)
    {
        for (j = 0; j <= N; j++)
        {
            if (A[i][j] == 1)
                ++count;
        }
    }
    
    printf("%d", count);
    
    return 0;
}
