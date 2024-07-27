#include <stdio.h>
#include <stdlib.h>

union floatingPoint {
    float f;
    double d;
    long double x ;

};
int main()
{
    union floatingPoint fp;
    /*
    puts("enter 3 floating values");
    scanf("%Lf",fp.x);
    scanf("%lf",fp.d);
    scanf("%f",fp.f);*/
     fp.f=2536.2;
     fp.d=554897.25;
     fp.x = 56585.5888;



    printf("float : %f\n double: %lf\nlong double: %Lf",fp.f,fp.d,fp.x);


    return 0;
}
