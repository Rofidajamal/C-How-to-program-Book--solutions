#include <stdio.h>
#include <stdlib.h>
struct hardware_Store_Data {

int Record;

char ToolName[15];

int Quantity;

double Cost;

};

// prototypes
unsigned int enterChoice( void );

int print_the_List(FILE *file_read_Ptr);

void updateRecord( cfPtr );

void delete_Record(FILE *fPtr);

void create_new_Record(FILE *fPtr);


int main()
{
    FILE *cfPtr; // hardwareStore.dat file pointer
    struct hardware_Store_Data empty = {0, "", 0, 0.0};
    cfPtr = fopen("hardware.dat", "w");

    for (int i =0; i<100; i++){
        fwrite (&empty, sizeof (struct hardware_Store_Data), 1, cfPtr);
    }
    fclose(cfPtr);

    unsigned int choice; // user's choice

     // fopen opens the file; exits if file cannot be opened
     if ( (cfPtr = fopen( "hardware.dat", "rb+") ) == NULL ) {
        puts( "File could not be opened." );
     } // end if
     else {
     // enable user to specify action
         while ( ( choice = enterChoice() ) != 5 ) {
             switch ( choice ) {
             // create text file from record file
             case 1:
                print_the_List( cfPtr );
                break;

             case 2:
                updateRecord( cfPtr );
                break;
             // create record
             case 3:
                 create_new_Record(cfPtr);

                break;
             // delete existing record

             case 4:
                 delete_Record( cfPtr );
                break;
             // display message if user does not select valid choice
             default:
                puts( "Incorrect choice" );
                break;
             } // end switch
         } // end while
          fclose( cfPtr );
     }



    return 0;
}

///////////////////////////////////////////////////
///////////////create new record///////////////////

void create_new_Record(FILE *file_Ptr) {

//String for copying tool name

        char str[150];
        struct hardware_Store_Data hardware_initial_data = {0, "", 0, 0};
        int account;

        printf("Enter the number of new record require to added\n");
        scanf("%d", &account);

        fseek(file_Ptr, (account - 1) * sizeof(struct hardware_Store_Data), SEEK_SET);
        fread(&hardware_initial_data, sizeof(struct hardware_Store_Data), 1, file_Ptr);

        if(hardware_initial_data.Record != 0) {
            printf("Record %d is already present\n", account);
        }

        else{

            printf("Give toolname for the new record %d\n", account);
            scanf("%*c%[^\n]", &str);
            strcpy(hardware_initial_data.ToolName, str);
            printf("Give quantity of the new record %d\n", account);
            scanf("%d", &hardware_initial_data.Quantity);

            printf("Enter cost of new record %d\n", account);
            scanf("%lf", &hardware_initial_data.Cost);
            hardware_initial_data.Record = account;

            fseek(file_Ptr, (hardware_initial_data.Record - 1) * sizeof(struct hardware_Store_Data), SEEK_SET);
            fwrite(&hardware_initial_data, sizeof(struct hardware_Store_Data), 1, file_Ptr);
        }

}

//////////////////////////////////////////////////////////////
////////////print data from .dat file to .txtt/////////////////
int print_the_List(FILE *file_read_Ptr) {

//identifier for checking if fread read any bytes

        int result_record;

//Write file pointer for .txt file

        FILE *file_write_Ptr;

        //initial information

        struct hardware_Store_Data hardware_initial_Record = {0, "", 0, 0};

        if((file_write_Ptr = fopen("Record.txt", "w")) == NULL) {

        printf("Unable to open Record.txt file\n");

        }

        else {
        rewind(file_read_Ptr);
        fprintf(file_write_Ptr, "%-9s%-19s%-10s%-6s\n", "Record #", "Tool name", "Quantity", "Cost");

        while(!feof(file_read_Ptr)) {

        result_record = fread(&hardware_initial_Record, sizeof(struct hardware_Store_Data), 1, file_read_Ptr);

        if(result_record != 0 && hardware_initial_Record.Record != 0) {
        fprintf(file_write_Ptr, "%-9d%-19s%-10d%-6f\n", hardware_initial_Record.Record,hardware_initial_Record.ToolName, hardware_initial_Record.Quantity, hardware_initial_Record.Cost);

        }
        }

        fclose(file_write_Ptr);

        }

}

/////////////////////////////////////////////
////////////update Record////////////////////

void updateRecord(FILE *file_Ptr) {

        //Variables for updating

        int rec_num;
        int new_Quantity;
        double new_Cost;
        struct hardware_Store_Data hardware_initial_record = {0, "", 0, 0};

        printf("Enter the record number for edit\n");
        scanf("%d", &rec_num);

        //Update with the correct record

        fseek(file_Ptr, (rec_num - 1) * sizeof(struct hardware_Store_Data), SEEK_SET);

        fread(&hardware_initial_record, sizeof(struct hardware_Store_Data), 1, file_Ptr);

        if(hardware_initial_record.Record == 0) {
            printf("Record %d has no data\n", rec_num);
        }

        else {

            printf("Enter the new quantity for the record %d\n", rec_num);
            scanf("%d", &hardware_initial_record.Quantity);
            printf("Enter new cost to record %d\n", rec_num);
            scanf("%lf", &hardware_initial_record.Cost);

            fseek(file_Ptr, (rec_num - 1) * sizeof(struct hardware_Store_Data), SEEK_SET);

            //Writing updated record over the old one
            fwrite(&hardware_initial_record, sizeof(struct hardware_Store_Data), 1, file_Ptr);

        }

}
/////////////////////////////////
//////////delete Record///////////
void delete_Record(FILE *fPtr){
    struct hardware_Store_Data hardware_initial_record = {0, "", 0, 0};
    //Blank data to delete something
    struct hardware_Store_Data blank_data = {0, "", 0, 0};
    int account;

    printf("Enter the record number required to delete\n");
    scanf("%d", &account);

    fseek(fPtr, (account - 1) * sizeof(struct hardware_Store_Data), SEEK_SET);
    fread(&hardware_initial_record, sizeof(struct hardware_Store_Data), 1, fPtr);

    if(hardware_initial_record.Record == 0) {
        printf("Record of %d does not present\n", account);
    }
    else {
        fseek(fPtr, (account - 1) * sizeof(struct hardware_Store_Data), SEEK_SET);
        fwrite(&blank_data, sizeof(struct hardware_Store_Data), 1, fPtr);

    }

}
/////////////////////////////////
//////////////Menu///////////////
unsigned int enterChoice( void )
{
    unsigned int menuChoice;
    // display available options
     printf( "%s", "\nEnter your choice\n"
     "1 - store a formatted text file of accounts called\n"
     " \"informationCreated.txt\" for printing\n"
     "2 - update an record\n"
     "3 - add a new record\n"
     "4 - delete an record\n"
     "5 - end program\n? " );

     scanf( "%u", &menuChoice ); // receive choice from user
     return menuChoice;
}
