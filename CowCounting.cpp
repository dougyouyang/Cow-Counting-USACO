//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;
int n, l, sum=0;

int check(int n)
{
    while(n){
        int d=n%10;
        if(d==l)
            return 0;
        n/=10;
    }
    return 1;
}

int main()
{
    int i;
    
    cin >> n >> l;
    for(i=1;i<10000000;i++){
        if(check(i))
            sum++;
        if(sum==n)
            break;
    }
    
    cout << i << endl;
    
    return 0;
}
