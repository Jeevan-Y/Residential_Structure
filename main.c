#include <stdio.h>
#include <stdlib.h>

struct Addres{
int house_no;
int block;
char city[30];
char state[30];
};
int main()
{
   struct Addres A1[5];

printf("Address of person-1\n");
    printf("Enter the House number:  ");
    scanf("%d",&A1[0].house_no);
   printf("Enter the block:  ");
    scanf("%d",&A1[0].block);
   printf("Enter the City name:  ");
    scanf("%s",&A1[0].city);
   printf("Enter the State:  ");
    scanf("%s",&A1[0].state);

printf("Address of person-2\n");
    printf("Enter the House number:  ");
   scanf("%d",&A1[1].house_no);
   printf("Enter the block:  ");
    scanf("%d",&A1[1].block);
   printf("Enter the City name:  ");
    scanf("%s",&A1[1].city);
   printf("Enter the State:  ");
    scanf("%s",&A1[1].state);

printf("Address of person-3\n");
   printf("Enter the House number:  ");
   scanf("%d",&A1[2].house_no);
   printf("Enter the block:  ");
   scanf("%d",&A1[2].block);
   printf("Enter the City name:  ");
   scanf("%s",&A1[2].city);
   printf("Enter the State:  ");
   scanf("%s",&A1[2].state);

printf("Address of person-4\n");
   printf("Enter the House number:  ");
    scanf("%d",&A1[3].house_no);
   printf("Enter the block:  ");
    scanf("%d",&A1[3].block);
   printf("Enter the City name:  ");
    scanf("%s",&A1[3].city);
   printf("Enter the State:  ");
    scanf("%s",&A1[3].state);

    printf("Address of person-5\n");
   printf("Enter the House number:  ");
    scanf("%d",&A1[4].house_no);
   printf("Enter the block:  ");
    scanf("%d",&A1[4].block);
   printf("Enter the City name:  ");
    scanf("%s",&A1[4].city);
   printf("Enter the State:  ");
    scanf("%s",&A1[4].state);

   printf("--------********----------\n\n");

   printf("The person-1 Address\n");
    printf("The house number is :\t%d\n",A1[0].house_no);
    printf("The block_no is :\t%d\n",A1[0].block);
    printf("The City Name is :\t%s\n",A1[0].city);
    printf("The State Name is :\t%s\n",A1[0].state);

    printf("The person-2 Address\n");
     printf("The house number is :\t%d\n",A1[01].house_no);
    printf("The block_no is :\t%d\n",A1[1].block);
    printf("The City Name is :\t%s\n",A1[1].city);
    printf("The State Name is :\t%s\n",A1[1].state);

    printf("The person-3 Address\n");
     printf("The house number is :\t%d\n",A1[2].house_no);
    printf("The block_no is :\t%d\n",A1[2].block);
    printf("The City Name is :\t%s\n",A1[2].city);
    printf("The State Name is :\t%s\n",A1[2].state);

    printf("The person-4 Address\n");
     printf("The house number is :\t%d\n",A1[3].house_no);
    printf("The block_no is :\t%d\n",A1[3].block);
    printf("The City Name is :\t%s\n",A1[3].city);
    printf("The State Name is :\t%s\n",A1[3].state);

    printf("The person-5 Address\n");
     printf("The house number is :\t%d\n",A1[4].house_no);
    printf("The block_no is :\t%d\n",A1[4].block);
    printf("The City Name is :\t%s\n",A1[4].city);
    printf("The State Name is :\t%s\n",A1[4].state);
    return 0;

}
