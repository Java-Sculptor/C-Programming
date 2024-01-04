/*
p ->player
i->input 
s->status
m->mark
r->result*/
#include<stdio.h>

void board();//declare an fuction to print a board
//void clear();//declatre an function to clear an board when math ends
int result();//to check winner

char b[]={'0','1','2','3','4','5','6','7','8','9'};

void main(){
    int p=1,i,s=-1;
    board();

    while (s=-1)
    {
        p=(p%2==0)?2:1;
        char m=(p==1)?'X':'O';
        printf("Player %d enter number to mark:",p);
        scanf("%d",&i);
        if (i<1 || i>9)
        {
            printf("Invalid choice.....");
        }
        b[i]=m;
        board();

        int r=result();
        if (r==1)
        {
            printf("Player %d wins...",p);
            return;
        }
        else if (r==0)
        {
            printf("====Draw====",p);
            return;
        }
        
        p++;
    }
    
}

void board(){
    //clear("cls");
    printf("\n");
    printf("****Tic-Tac-Toe****");
     printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",b[1],b[2],b[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",b[4],b[5],b[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",b[7],b[8],b[9]);
    printf("     |     |     \n");
    printf("\n");
}

int result(){
    if (b[1]==b[2] && b[2]==b[3])
    {
        return 1;
    }
    
    if (b[1]==b[4] && b[4]==b[7])
    {
        return 1;
    }

    if (b[7]==b[8] && b[8]==b[9])
    {
        return 1;
    }

    if (b[3]==b[6] && b[6]==b[9])
    {
        return 1;
    }

    if (b[1]==b[5] && b[5]==b[9])
    {
        return 1;
    }

    if (b[3]==b[5] && b[5]==b[7])
    {
        return 1;
    }

    if (b[2]==b[5] && b[5]==b[8])
    {
        return 1;
    }

    int count=0;
    for (int j = 1; j <=9; j++)
    {
        if (b[j]=='X' || b[j]=='O')
        {
            count++;
        }
        
    }
    if (count==9)
    {
        return 0;
    }
    return -1;
}

