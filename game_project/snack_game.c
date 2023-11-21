            // snack game project

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int width=20, height=40;
int x, y, fruit_x, fruit_y, score, gameOver, flag;
int tailx[100], taily[100];
int counttail=0;

void setup()
{
    gameOver=0;
    x=width/2;
    y=height/2;
    label1:
    fruit_x=rand()%20;
    if (fruit_x==0)
        goto label1;
    label2:
    fruit_y=rand()%20;
    if (fruit_y==0)
        goto label2;
    score=0;
}
// draw boundry
void draw()
{
    int i, j, k;
    system("cls");  /*previous boundry cleared*/
    for (i=0;i<=width;i++)
    {
        for (j=0;j<=height;j++)
        {
            if (i==0||i==width||j==0||j==height)
            {
                printf("#");
            }
            else
            {
                int ch=0;
                if (i==x&&j==y)
                {
                    printf("0");
                }
                else if (i==fruit_x&&j==fruit_y)
                {
                    printf("F");
                }
                else{
                for ( k = 0; k < counttail; k++)
                {
                    if (i==tailx[k]&&j==taily[k]) {
                        printf("O");
                        ch=1;
                    }
                }
                if (ch==0) {
                    printf(" ");
                }                 
           }
        }
    }
        printf("\n");
    }
    printf("score = %d",score);
}
// press any key
void input()
{
if (kbhit())
{
    switch (getch())
    {
    case 'a':  /*left*/
      flag = 1;
        break;
    case 's':  /*right*/
      flag = 2;
        break;
    case 'w':   /*up*/
      flag = 3;
        break;
    case 'z':  /*down*/
      flag = 4;
        break;
    case 'x': /*quit*/
      gameOver = 1;
        break;
    }
  }
}
void make_logic()
{
    int i;
    int prevx=tailx[0], prevy=taily[0];
    int prev2x, prev2y;
    tailx[0]=x;
    taily[0]=y;

    for ( i = 1; i < counttail; i++)
    {
        prev2x=tailx[i];
        prev2y=taily[i];
        tailx[i]=prevx;
        taily[i]=prevy;
        prevx=prev2x;
        prevy=prev2y;
    }
    
    switch (flag)
    {
    case 1:
        y--;
            break;
    case 2:
        y++;
            break;
    case 3:
        x--;
            break;
    case 4:
        x++;
            break;
    }
    if (x<0||x>width||y<0||y>height)
        gameOver=1;
        for ( i = 0; i < counttail; i++)
        {
            if (x==tailx[i] && y==taily[i])
            gameOver = 1;
        }
        if (x==fruit_x && y==fruit_y)
        {
            label3:
            fruit_x=rand()%20;
                if (fruit_x==0)
                    goto label3;

            label4:
            fruit_y=rand()%20;
                if (fruit_y==0)
                    goto label4;
                    score+=1;
                    counttail++;
        }
}
int main(int argc, char const *argv[])
{
    int m, n, i;
    setup();
    while (!gameOver)
    {
        draw();
        input();
        make_logic();
        // maintain speed
        for ( m = 0; m < 10005; m++){
            for ( n = 0; n < 10000; n++) {
            } 
        }
    }
    return 0;
}