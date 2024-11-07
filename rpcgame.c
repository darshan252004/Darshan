#include<stdio.h>
#include<conio.h>
int you,Computer;// global value
int menu()
{
    int ch;
    printf("\n1. Select Rock");
    printf("\n2. Select Paper");
    printf("\n3. Select Scissor");
    printf("\n4. Exist");
    printf("\n Enter your choice");
    scanf("%d",&ch);
      return ch;
       }
       void setup(){
           label:
       Computer=rand()%4;
       if(Computer==0)
        goto label;

        you=menu();
        }
       void MakeLogic(){
       switch(you)
       {
           case 1:
               if(Computer==1)//// you=rock,Computer=rock
               {
                   printf("\nGame Draw");
                   printf("\nyou=rock\nComputer=rock");
               }
               else if(Computer==2)//// you=rock,Computer=paper
               {
                   printf("\nComputer Won");
                   printf("\nyou=rock\nComputer=paper");
               }
               else// you=rock,Computer=scissor
               {
                   printf("\nYou Won");
                   printf("\nyou=rock\nComputer=scissor");
               }
               break;
           case 2:
               if(Computer==1)//// you=paper,Computer=rock
               {
                   printf("\nYou Won");
                   printf("\nyou=paper\nComputer=rock");
               }
               else if(Computer==2)//// you=paper,Computer=paper
               {
                   printf("\nGame Draw");
                   printf("\nyou=paper\nComputer=paper");
               }
               else// you=paper,Computer=scissor
               {
                   printf("\nComputer Won");
                   printf("\nyou=paper\nComputer=scissor");
               }
               break;
           case 3:
               if(Computer==1)//// you=scissor,Computer=rock
               {
                   printf("\nComputer Won");
                   printf("\nyou=scissor\nComputer=rock");
               }
               else if(Computer==2)//// you=scissor,Computer=paper
               {
                   printf("\nYou Won");
                   printf("\nyou=scissor\nComputer=paper");
               }
               else// you=scissor,Computer=scissor
               {
                   printf("\nGame Draw");
                   printf("\nyou=scissor\nComputer=scissor");
               }
               break;
           case 4:
             exit(0);
           default:
            printf("\nInvalid user choice");
       }
      }
int main ()
{
    while(1)
    {
     system("cls");
        setup();
   MakeLogic();
   getch();
    }
return 0;
}
