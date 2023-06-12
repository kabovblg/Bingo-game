#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>

const int size = 10;

 int isBingoRow (int starArr[][size], int m )
{


   int i,j,br=0;
   char str[] = " B-I-N-G-O ! Y-O-U-W-I-N !!!";

for(i=0;i<m;i++)
    {
         for(j=0;j<size;j++)
        {
            if(starArr[i][j] == 0)
                break;

            if (j == 9)
            {
                br++;
            }

        }
    }
               if(br!=0)
                {
                printf("\n");
                printf(" \033[01;33m ");
                printf("%60s\n",str);
                printf(" \033[0m ");
                printf("\n");
                return 1;
                }
                else
                return 0;
}

int isBingoColumn (int starArr[][size], int m )
{


   int i,j,br=0;
   char str[] = " B-I-N-G-O ! Y-O-U-W-I-N !!!";

for(j=0;j<m;j++)
    {
         for(i=0;i<size;i++)
        {
            if(starArr[i][j] == 0)
                break;

            if (i == 9)
            {
                br++;
            }

        }
    }
               if(br!=0)
                {
                printf("\n");
                printf(" \033[01;36m ");
                printf("%60s\n",str);
                printf(" \033[0m ");
                printf("\n");
                return 1;
                }
                else
                return 0;

}

int isBingoDiagonal (int starArr[][size], int m )
{
int i,j,br=0;
char str[] = " B-I-N-G-O ! Y-O-U-W-I-N !!!";

for(i=0;i<m;i++)
    {
            if(starArr[i][i] == 0)
                break;

            if( i == 9)
            {
                br++;
            }


    }
               if(br!=0)
                {
                printf("\n");
                printf(" \033[01;31m ");
                printf("%60s\n",str);
                printf(" \033[0m ");
                printf("\n");
                return 1;
                }
                else
                return 0;
}

int isBingoOppositeDiagonal (int starArr[][size], int m )
{
int i,j,br=0;
char str[] = " B-I-N-G-O ! Y-O-U-W-I-N !!!";

for(i=0;i<m;i++)
    {


            if(starArr[i][m-1-i] == 0)
                break;

            if( i == 9)
            {
                br++;
            }


    }
               if(br!=0)
                {
                printf("\n");
                printf(" \033[01;35m ");
                printf("%60s\n",str);
                printf(" \033[0m ");
                printf("\n");
                return 1;
                }
                else
                return 0;

}

int main()
{
int number,br1=0;
int starArr[10][10];
int numArr[10][10];
int i,j;
char str1[] = " W R O N G  I N P U T !";
srand(time(NULL));

for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {
        starArr[i][j]= 0 ;
        printf("\t");
        printf("*");

        }
    printf("\n");
}
printf("\n");

for(i=0;i<10;i++)
{
    for(j=0;j<10;j++)
    {
        numArr[i][j] = 0;
    }

}

for(int k = 0;k<=100;k++)
{
    while(numArr[i][j] != 0)
    {

            i = rand()%10;
            j = rand()%10;
    }
    numArr[i][j] = k;

}

while(1)
{
printf("\tBINGO by row is YELLOW ! ");
printf("\n");
printf("\tBINGO by column is BLUE ! ");
printf("\n");
printf("\tBINGO by diagonal is RED !");
printf("\n");
printf("\tBINGO by opposite diagonal is PINK !");
printf("\n");
printf("\n");
printf("\n");

printf("\nPlease enter a number between 1 and 100 : ");
scanf("%d", &number);
while( number < 1 || number > 100  )
{
printf("%60s\n",str1);
scanf("%d", &number);
}
for(i=0;i<10;i++)
{
    for(j=0;j<10;j++)
    {

       if(numArr[i][j]==number)
       {
           system("cls");
           starArr[i][j]=number;

       }


    }
}
printf("This is THE BINGO CARD : \n");
printf("\n");

for(i=0;i<10;i++)
    {

        for(j=0;j<10;j++)
        {

        printf("\t");

        if(starArr[i][j] == 0)
        {
        	printf("*");
        }
        else
        {
        	printf( "%d" , starArr[i][j]);
        }


       }
    printf("\n");
    }
     printf("\n");

if ( isBingoRow(starArr,10) )
{
    return 0;
}

if ( isBingoColumn(starArr,10) )
{
    return 0;
}

if ( isBingoDiagonal(starArr,10) )
{
    return 0;
}

if ( isBingoOppositeDiagonal(starArr,10) )
{
    return 0;
}

}
return 0;
}

