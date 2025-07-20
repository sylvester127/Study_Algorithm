#include <iostream>
using namespace std;
#include "FileIO.h"

int main()
{
    //FileIO();
    int N, cnt, cut, remain;
    cin >> N;
    
    cut = N/5;
    remain = N%5;
    
    switch (remain)
    {
        case 0:
            cnt = cut;
            break;
        case 1:
            if(cut > 0)
                cnt = cut - 1 + 2;
            else
                cnt = -1;
            break;
        case 2:
            if(cut > 1)
                cnt = cut - 2 + 4;
            else
                cnt = -1;
            break;
        case 3:
            cnt = cut + 1;
            break;
        case 4:
            
            if(cut > 0)
                cnt = cut - 1 + 3;
            else
                cnt = -1;
            break;
        
        default:
            cout << "err" << endl;
            break;
    }
    cout << cnt << endl;
    return  0;
}
