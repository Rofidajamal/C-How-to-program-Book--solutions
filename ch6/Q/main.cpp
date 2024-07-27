#include <iostream>

using namespace std;
int rand6(){
    return (1+(rand()%6));
}
int main()
{
    int win[22]={0};
    int lose[22]={0};
    int roll =0;
    int winC =0;
    int loseC =0;

    string state;

   for(int i=0; i<10;i++){
        int myPoint = 0;
        int r1 =rand6();
        int r2 = rand6();
        int sum = r1 + r2;
        roll =1;
        if(sum == 7 || sum == 11){
               state = "win";
        }
        else if (sum == 2 || sum == 3 || sum == 12){
            state = "lose";
        }
        else{
            state = "continue";
            myPoint = sum;

        }

        while(state == "continue"){
             r1 =rand6();
             r2 = rand6();
             sum = r1 + r2;
             roll++;
             if(sum == myPoint){
                state = "win";
             }
             else if (sum == 7){
                state = "lose";
             }
        }

        if (roll >21)
            roll = 21;
        if(state == "win"){
            ++win[roll];
            winC++;
        }
        else
            {++lose[roll];
            loseC++;
            }
           //for loop to print the win and lose in each roll
    for(int i = 0;i<21;i++){
        printf( "%3d games won and %3d games lost on roll %d.\n",
         win[ i ], lose[ i ], i );

   }
   printf("\n\n\n");


   /* calculate chances of winning */
   printf( "\nThe chances of winning are %d/%d = %.2f%%\n", winC,
      winC + loseC, 100.0 * winC / ( winC + loseC ) );


   }


        return 0;
}
