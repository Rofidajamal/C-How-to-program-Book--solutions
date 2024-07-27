#include <stdio.h>
#include <stdlib.h>

struct person {
 char lastName[15];
 char firstName[15];
 char age[4];
};


int main()
{
    FILE *pfPtr;
    int found =1 ;
    int index =1 ;
    struct person Person ={"","","0"};

  //////step one//////
    if((pfPtr = fopen("nameage.dat","w")) == NULL){
            puts( "File could not be opened." );
    }
    else{
        for(int i =0;i<100;i++){
            fwrite(&Person,sizeof(struct person),1,pfPtr);
        }

    }
    fclose(pfPtr);

    ////step two////////

     if((pfPtr = fopen("nameage.dat","w")) == NULL){
            puts( "File could not be opened." );
    }
    else{
        for(int i =0; i<2;i++){
            printf( "%s", "Enter lastname, firstname, age\n? " );
            // set record lastName, firstName and balance value
         scanf("%s%s%s", Person.lastName, Person.firstName, Person.age );

         // seek position in file to user-specified record
        fseek( pfPtr, (i)* sizeof( struct person ), SEEK_SET );

        // write user-specified information in file
        fwrite( &Person, sizeof( struct person ), 1, pfPtr );

        }
        fclose(pfPtr);
    }

    /////step three/////


     if((pfPtr = fopen("nameage.dat","r")) == NULL){
            puts( "File could not be opened." );
    }
    else{
            struct person find;
            struct person change;
            struct person read [2];
            puts("enter the record you want to update it in this format : Last name, First name, Age\n?");
            scanf("%s%s%s",find.lastName, find.firstName, find.age);
             found =0;
             index =0;

            for (int i =0; i<2;i++){
                    fscanf(pfPtr, "%15s%15s%4s", read[i].lastName, read[i].firstName, read[i].age);
                if(strcmp(find.lastName,read[i].lastName)==0 && strcmp(find.firstName,read[i].firstName)==0 && strcmp(find.age,read[i].age)==0){
                        puts("enter a record to update file with it in this format : Last name, First name, Age\n?");
                        scanf("%s%s%s", change.lastName, change.firstName, change.age );
                        found = 1;
                        index =i;

                        strcpy(read[i].lastName,change.lastName);
                        strcpy(read[i].firstName,change.firstName);
                        strcpy(read[i].age,change.age);
                }


            }
            fclose(pfPtr);

            if(found ==1){
                    pfPtr = fopen("nameage.dat", "r+");
                for(int i = 0;i<2;i++){
                        if(index == i){
                          // seek position in file to user-specified record
                            fseek( pfPtr, (i)* sizeof( struct person ), SEEK_SET );


                            fwrite(&read[i], sizeof(struct person), 1, pfPtr);

                        }

                }
            }
            else
                puts("No information");
            fclose(pfPtr);
    }


    /////step four//////
    /*

        if(found ==1){
                    pfPtr = fopen("nameage.dat", "r+");
                for(int i = 0;i<2;i++){
                        if(index == i){
                          // seek position in file to user-specified record
                            fseek( pfPtr, (i)* sizeof( struct person ), SEEK_SET );
                            fwrite(&Person,sizeof(struct person),1,pfPtr);

                        }

                }
            }

            fclose(pfPtr);

    */

    return 0;
}
