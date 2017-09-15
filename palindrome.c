#include <stdio.h>
int main()
{
    int n, r = 0, remainder, ot;
  
    scanf("%d", &n);
    ot = n;
        while( n!=0 )
    {
        remainder = n%10;
        r = r*10 + remainder;
        n /= 10;
    }
    if (ot == r)
        printf("%d is a palindrome.", ot);
    else
        printf("%d is not a palindrome.", ot);
    
    return 0;
}
