//
//  딱지놀이.cpp
//  Algorithm
//
//  Created by NaramKim on 2018. 4. 19..
//  Copyright © 2018년 Naram Kim. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include "FileIO.h"
#define N 128
using namespace std;

int n, temp;
int A[N], B[N];

bool cmp(int a, int b)
{
    return a > b;
}

int main(int argc, const char * argv[])
{
    FileIO();
    cin >> n;
    
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; ; j++)
        {
            cin >> A[j];
            
            if(A[j] == '\n')
                break;
        }
        
        sort(A, A + n, cmp);
    }
    return 0;
}
