//
//  연속합.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 12. 3..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <iostream>
#include <vector>
#include "FileIO.h"
using namespace std;
int betterMaxSum(const vector<int> &arr);
int MIN;

int main()
{
    FileIO();
    int n;
    vector<int> arr;
    cin >> n;
    for(int i=0, x; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    cout << betterMaxSum(arr);
    
    return 0;
}

int betterMaxSum(const vector<int> &arr)
{
    int N = arr.size();
    int ret = MIN;
    
    for(int i = 0; i < N; i++)
    {
        int sum = 0;
        for(int j = i; j < N; j++)
        {
            sum += arr[j];
            ret = max(ret,sum);
        }
    }
    return ret;
}
