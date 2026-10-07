#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
 {
    int max = a;
    
    if (b > max) 
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }
    
    return max;
} 

int main()
{
    int w, x, y, z;
    scanf("%d %d %d %d", &w, &x, &y, &z);
    
    int ans = max_of_four(w, x, y, z);
    printf("%d\n", ans);
    
    return 0;
}




