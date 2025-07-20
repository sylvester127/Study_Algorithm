//
//  컬러볼.cpp
//  Algorithem
//
//  Created by NaramKim on 2018. 4. 13..
//  Copyright © 2018년 NaramKim. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include "FileIO.h"
#define N 200010
using namespace std;

struct Data
{
    int index;
    int color;
    int size;
}data[N];
int result[N];
int color[N];

bool cmp(Data a, Data b)
{
    return a.size < b.size;
}

int main(int argc, const char * argv[])
{
    FileIO();
    int n, sum = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> data[i].color >> data[i].size;
        data[i].index = i;
    }
    
    sort(data, data + n, cmp);      // 크기순으로 정렬
    
    for(int i = 0, j = 0; i < n; i++)
    {
        for(; data[j].size < data[i].size; j++)
        {
            sum += data[j].size;
            color[data[j].color] += data[j].size;
        }
        result[data[i].index] = sum - color[data[i].color];
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
