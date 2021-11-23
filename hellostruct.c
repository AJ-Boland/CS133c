#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int student_counter;


struct student
{
    int id;
    char name[25];
    int age;
    int score;
};

struct node
{
    int *ptr;
    struct student;


};



struct student define_student(){
    int * id_holder = malloc(20*sizeof(int)),  * age_holder =  malloc(20*sizeof(int)), * score_holder =  malloc(20*sizeof(int));
    char * name_holder = malloc(25*sizeof(char));
    //fflush(stdin)
    printf("\n Enter the student id: ");
    fgets(id_holder, 25, stdin);
    printf("\n Enter the student's name: ");
    fgets(name_holder, 25, stdin);
    //fflush(stdin);
    printf("\n Enter the student's age: ");
    fgets(age_holder, 100, stdin);
    //fflush(stdin);
    printf("\n Enter the student's score: ");
    fgets(score_holder, 100, stdin);
    //fflush(stdin);
    struct student Joe;
    strcpy(Joe.name,name_holder);
    Joe.id = id_holder;
    Joe.age = age_holder;
    Joe.score = score_holder;
    return Joe;
}


//Runs loop for user input until -1 is given

int main(){
    char input[5];
    do
    {
        
        printf("\nHi. This program will run until '-1' is inputted into the program.");
        
        printf("%s", input);
       
        
        printf("\nWould you like to add a student to the database? Enter '1' for yes");
        fgets(input, 5, stdin);
        
        //fflush(stdin);
        if(input[0] == "-1" && input[1] == 1){
            break;
        } else if(input[0] == "1"){
            int *ptr = malloc(25*sizeof(int));
            struct node dummy = {ptr,define_student()};;
        }
        printf("%d",sizeof(input));
        for(int i = 0; i < sizeof(input); i++){
            printf("\n%d", input[i]);
            printf(", %c\n", input[i]);
        }
        
    } while (input[0] == "-1" && input[1] == 1);
    
}

