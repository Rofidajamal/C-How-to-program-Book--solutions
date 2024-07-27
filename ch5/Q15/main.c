#include <stdio.h>
#include <stdlib.h>

float HypotenuseCalculations(float s1, float s2){
    return sqrt(s1*s1 + s2*s2);
}
int main()
{
    float s,ss, h;
    for(int i =0;i<3;i++)
    {
        printf("enter the values of 2 sides ");
        scanf("%f",&s);
        scanf("%f",&ss);
        h= HypotenuseCalculations(s,ss);
        printf("Triangle\t\tSide 1\t\tSide2\t\tHypotenuse\n");
        printf("%d\t\t\t%.2f\t\t%.2f\t\t%.2f\n",i+1,s,ss,h);

    }


    return 0;
}
