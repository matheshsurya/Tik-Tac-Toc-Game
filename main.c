#include<stdio.h>
#include<stdlib.h>
#include"gamecontrol.h"
int con;

int board()
{
    char ply[10]={'0','7','8','9','4','5','6','1','2','3'};
    printf("\n       Game Rules Are Simple\n");
    printf("\nThis Is Like Your Num Pad Arrangement Numbers Given Below");
    printf("\n\n %c | %c | %c\n",ply[1],ply[2],ply[3]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n",ply[4],ply[5],ply[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n\n\n",ply[7],ply[8],ply[9]);
    printf("\nPress Enter Key To Start Game:");
    scanf("%c",&con);
    if(con!='\n')
      abort();
    
   
       
    

}



int main()
{
board();
/*FILE *as;
as=fopen("results.txt","a");
fprint(as);*/


switch (plays())
{
case 'X':
    printf("\nX Wins The Game!\n\n");
    break;
case 'O':
     printf("\nO Wins The Game!\n\n");
     break;
}

}