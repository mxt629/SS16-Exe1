//
//  main.c
//  SS16 Bai1
//
//  Created by Little Chick on 30/03/2022.
//

#include <stdio.h>
#include <math.h>

float GetArena(float a, float b, float c);
void main(int argc, const char * argv[]) {
    float a,b,c,s;
    printf("Enter numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        s = GetArena(a, b, c);
        printf("S: %.2f\n",s);
         
    }else
    {
        printf("Erros\n");
    }
}
float GetArena(float a, float b, float c)
{
    float p,s;
    p=(a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    return p;
}

