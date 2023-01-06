#include<stdio.h>
#include<stdbool.h>
int n=4;
void print_grid(int a[][4], int row)
{
    int i,j;
    for(i=1; i<row; i++)
    {
        for(j=1; j<4; j++)
        {
            if(a[i][j]==-1) printf(" ");
            if(a[i][j]==1) printf("X");
            if(a[i][j]==2) printf("O");
            if(j<3)
                printf("\t|\t");
        }
        if(i<row-1)
        {
            printf("\n----------------------------------------");
            printf("\n\n");
        }
    }

}
int is_win(int a[][4],int n)
{
    int i,j;
    for(i=1;i<4;i++)
    {
      if(a[i][1]==a[i][2]&& a[i][2]==a[i][3] && a[i][1]!=-1)
               {
                return a[i][1];
               }
    }
     for(j=1;j<4;j++)
        {
           if(a[1][j]==a[2][j]&& a[2][j]==a[3][j] && a[1][j]!=-1)
               {
                return a[1][j];
               }
        }
    if( a[1][1]==a[2][2] && a[2][2] == a[3][3] && a[1][1]!=-1)
            {
            return a[1][1];
            }
    if(a[1][3]==a[2][2] && a[1][3]== a[3][1] && a[1][3]!=-1)
       {
        return a[1][3];
       }
       return -1;
}

void main()
{
    int a[4][4];
    //print_grid(a,4);
    int i,j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            a[i][j]= -1;
        }
    }
    bool player1=true;
    bool player2= false;
    while(true)
    {
        print_grid(a,n);
        if(player1)

        {
            int r,c;
            Flag:
            printf("\nplayer 1 turn (x), Enter row and column: ");
            scanf("%d %d",&r,&c);
            if(a[r][c]!=-1)
               {
               printf("Invalid Cell\n");
               goto Flag;
               }
            a[r][c]=1;
            player1= false;
            player2=true;
        }
        else
        {
              int r,c;
            Flag2:
            printf("\nplayer 2 turn (o), Enter row and column: ");
            scanf("%d %d",&r,&c);
             if(a[r][c]!=-1)
               {
               printf("Invalid Cell\n");
               goto Flag2;
               }
            a[r][c]=2;
            player2= false;
            player1= true;
        }
        if (is_win(a,4)==1)
        {
            print_grid(a,n);
            printf("/nPlayer 1 won!\n");
            break;
        }
        else if(is_win(a,4)==2)
        {
            print_grid(a,n);
            printf("/nplayer 2 Won!\n");
            break;
        }
    }
}
