#include <stdio.h>
#include <math.h>
#define N 5  
int main() 
{
    float x[N], y[N], distance;
    int i;
    printf("Enter the coordinates of %d points (x y):\n", N);

    for (i = 0; i < N; i += 1) 
    {
        printf("Point %d (x y): ", i + 1);
        scanf("%f %f", &x[i], &y[i]);
    }

    printf("\nDistances between neighboring points:\n");
    
    for (i = 0; i < N - 1; i += 1) 
    {
        #include "file.txt"  
        printf("Distance between points %d and %d: %.2f\n", i + 1, i + 2, distance);
    }

    return 0;
}
