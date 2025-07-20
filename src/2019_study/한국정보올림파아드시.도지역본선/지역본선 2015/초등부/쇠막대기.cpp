//
//  쇠막대기.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 9. 8..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <iostream>
#include <string>
#include "FileIO.h"
using namespace std;
string str;
int temp, sum;

int main(int argc, const char * argv[]) {
    FileIO();
    cin >> str;
    
    if(str[0] == '(')
        temp++;
    
    for(int i=1; i < str.length(); i++)
    {
        if(str[i] == '(')
            temp++;
        else
        {
            temp--;
            if(str[i-1]=='(')
                sum+=temp;
            else
                sum++;
        }
    }
    
    cout << sum;
    return 0;
}
