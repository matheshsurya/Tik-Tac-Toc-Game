int h=0;
int plays()
{
    char ply[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
     int mov=1,X[10],O[10],op;

   
    for(int mov=1;mov<=9;mov++)
    {
    printf("\n\n %c | %c | %c\n",ply[7],ply[8],ply[9]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n",ply[4],ply[5],ply[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n\n\n",ply[1],ply[2],ply[3]);
    if(h==0)
    {
        wrg:
        printf("\nX Plays :");
        scanf("%d",&op);
        if(ply[op]!='X'||'O')
        {
            ply[op]='X';
            h=1;
        }
        else 
        {
        printf("\nThat Place Is Occupied\nSelect Another Place");
        goto wrg;
        }
    }
    else
    {
        wrn:
        printf("\nO Plays :");
        scanf("%d",&op);
        if(ply[op]!='X'&&'O')
        {
        ply[op]='O';
        h=0;
        }
        else
        {
        printf("\nThat Place Is Occupied\nSelect Another Place");
        goto wrn;
        }

        
    }

    if(ply[1]=='X'&& ply[2]=='X'&&ply[3]=='X'||
       ply[4]=='X'&& ply[5]=='X'&&ply[6]=='X'||
       ply[7]=='X'&& ply[8]=='X'&&ply[9]=='X'||
       ply[1]=='X'&& ply[4]=='X'&&ply[7]=='X'||
       ply[2]=='X'&& ply[5]=='X'&&ply[8]=='X'||
       ply[3]=='X'&& ply[6]=='X'&&ply[9]=='X'||
       ply[1]=='X'&& ply[5]=='X'&&ply[9]=='X'||
       ply[3]=='X'&& ply[5]=='X'&&ply[7]=='X')
       {
            printf("\n\n %c | %c | %c\n",ply[7],ply[8],ply[9]);
            printf("---|---|---\n");
            printf(" %c | %c | %c\n",ply[4],ply[5],ply[6]);
            printf("---|---|---\n");
            printf(" %c | %c | %c\n\n\n",ply[1],ply[2],ply[3]);
            return 'X';
       }
    if(ply[1]=='O'&& ply[2]=='O'&&ply[3]=='O'||
       ply[4]=='O'&& ply[5]=='O'&&ply[6]=='O'||
       ply[7]=='O'&& ply[8]=='O'&&ply[9]=='O'||
       ply[1]=='O'&& ply[4]=='O'&&ply[7]=='O'||
       ply[2]=='O'&& ply[5]=='O'&&ply[8]=='O'||
       ply[3]=='O'&& ply[6]=='O'&&ply[9]=='O'||
       ply[1]=='O'&& ply[5]=='O'&&ply[9]=='O'||
       ply[3]=='O'&& ply[5]=='O'&&ply[7]=='O')
       {
        printf("\n\n %c | %c | %c\n",ply[7],ply[8],ply[9]);
        printf("---|---|---\n");
        printf(" %c | %c | %c\n",ply[4],ply[5],ply[6]);
        printf("---|---|---\n");
        printf(" %c | %c | %c\n\n\n",ply[1],ply[2],ply[3]);
        return 'O';
        }
               
    
    }  
    printf("\nThe Game is Draw Try Again \n\n       Good Luck!");
    plays();
} 
