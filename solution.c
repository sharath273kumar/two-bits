//https://www.hackerrank.com/contests/smart-interviews/challenges/si-two-set-bits/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int no;
    scanf("%i",&no);
    while(no>0)
    {
        long long int x;
        scanf("%lli",&x);
        long long int count=0,one=1,two;
        for(count=1;count<=x;count++)
        {
            if((count*(count+1)%1000000007)/2<x)
                one=count+1;
            else
                break;
        }
        long long int lower=(((one-1)*one)%1000000007)/2;
        two=(x-lower)%1000000007;
        long long int answer=(((int)pow(2,one+1))%1000000007)+(((int)pow(2,two))%1000000007);
        printf("%lli\n",(answer/2)%1000000007);
        no--;
    }
    return 0;
}
