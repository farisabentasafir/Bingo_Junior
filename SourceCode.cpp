#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  int check[27], vc[27];
int main() {
    int a, b, c, d, arr[100][100], i, j, brr[100][100], sum[28], flag = 0, p, check[27], tmp, vc[27], vr[27], v, put = 0, ceck[27], chec[27];
    time_t t;
    printf("\n\n\n\n\n\n                                        Welcome\n");
    printf("                                     Bingo Junior!!\n\n\n");
    while (1) {
            int m;
      for (int modi = 1; modi <= 25; modi++) {
        check[modi] = 0;
        ceck[modi] = 0;
        chec[modi]=0;
      }
      flag = 0;
      d = 0;
      put = 0;


printf("Select mode\n");
printf("1.Single player\n");
printf("2.Two players\n\n");


    scanf("%d", &m);

    //single player
      if(m==1){
             /* Intializes random number generator */
            srand((unsigned) time(&t));
    //input table
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            //unique value insert in an array randomly
            while(1){
                    tmp=0;
                tmp = rand()%25+1;
                if(check[tmp]!=1){
                    arr[i][j] = tmp;
                    check[arr[i][j]]=1;
                    break;
                }
            }
        }
    }
        printf("Make your table\n\n");
      for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

          scanf("%d", & brr[i][j]);

          if (brr[i][j] < 1 || brr[i][j] > 25 || ceck[brr[i][j]] == 1) {
            printf("invalid input\n");
            scanf("%d", & brr[i][j]);
          }
          ceck[brr[i][j]] = 1;

        }
      }
      //print table player 2
      for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
          printf("%d", brr[i][j]);
          if (brr[i][j] > 9) {
            printf(" |");
          } else {
            printf("  |");
          }

        }
        printf("\n---|---|---|---|---|\n");
        // printf("--|--|--|--|--|");
        //printf("\n");
      }
      for (c = 0; c < 18; c++) {
        printf("Give a number: \n\n");

        printf("\n");
        for (i = 0; i < 5; i++) {
          for (j = 0; j < 5; j++) {
            if (j == 0) {
              printf("                    ");
            }
            printf("%d", brr[i][j]);
            if (brr[i][j] > 9) {
              printf(" |");
            } else {
              printf("  |");
            }

          }
          printf("\n");
          printf("                    ---|---|---|---|---|");
          printf("\n");
        }

        scanf("%d", & b);

        for (i = 0; i < 5; i++) {
          for (j = 0; j < 5; j++) {
            if (arr[i][j] == b) {
              arr[i][j] = 0;
            }
          }
        }

        for (i = 0; i < 5; i++) {
          for (j = 0; j < 5; j++) {
            if (brr[i][j] == b) {
              brr[i][j] = 0;
            }
          }
        }
        printf("\n");

        sum[0] = arr[0][0] + arr[0][1] + arr[0][2] + arr[0][3] + arr[0][4];
        sum[1] = arr[1][0] + arr[1][1] + arr[1][2] + arr[1][3] + arr[1][4];
        sum[2] = arr[2][0] + arr[2][1] + arr[2][2] + arr[2][3] + arr[2][4];
        sum[3] = arr[3][0] + arr[3][1] + arr[3][2] + arr[3][3] + arr[3][4];
        sum[4] = arr[4][0] + arr[4][1] + arr[4][2] + arr[4][3] + arr[4][4];
        sum[5] = arr[0][0] + arr[1][0] + arr[2][0] + arr[3][0] + arr[4][0];
        sum[6] = arr[0][1] + arr[1][1] + arr[2][1] + arr[3][1] + arr[4][1];
        sum[7] = arr[0][2] + arr[1][2] + arr[2][2] + arr[3][2] + arr[4][2];
        sum[8] = arr[0][3] + arr[1][3] + arr[2][3] + arr[3][3] + arr[4][3];
        sum[9] = arr[0][4] + arr[1][4] + arr[2][4] + arr[3][4] + arr[4][4];
        sum[10] = arr[0][0] + arr[1][1] + arr[2][2] + arr[3][3] + arr[4][4];
        sum[11] = arr[0][4] + arr[1][3] + arr[2][2] + arr[3][1] + arr[4][0];

        sum[12] = brr[0][0] + brr[0][1] + brr[0][2] + brr[0][3] + brr[0][4];
        sum[13] = brr[1][0] + brr[1][1] + brr[1][2] + brr[1][3] + brr[1][4];
        sum[14] = brr[2][0] + brr[2][1] + brr[2][2] + brr[2][3] + brr[2][4];
        sum[15] = brr[3][0] + brr[3][1] + brr[3][2] + brr[3][3] + brr[3][4];
        sum[16] = brr[4][0] + brr[4][1] + brr[4][2] + brr[4][3] + brr[4][4];
        sum[17] = brr[0][0] + brr[1][0] + brr[2][0] + brr[3][0] + brr[4][0];
        sum[18] = brr[0][1] + brr[1][1] + brr[2][1] + brr[3][1] + brr[4][1];
        sum[19] = brr[0][2] + brr[1][2] + brr[2][2] + brr[3][2] + brr[4][2];
        sum[20] = brr[0][3] + brr[1][3] + brr[2][3] + brr[3][3] + brr[4][3];
        sum[21] = brr[0][4] + brr[1][4] + brr[2][4] + brr[3][4] + brr[4][4];
        sum[22] = brr[0][0] + brr[1][1] + brr[2][2] + brr[3][3] + brr[4][4];
        sum[23] = brr[0][4] + brr[1][3] + brr[2][2] + brr[3][1] + brr[4][0];

        int k;
        for (k = 12; k < 24; k++) {
          if (sum[k] == 0) {
            flag = 1;

            printf("                         Bingo!!\n");

            printf("                        You  win\n\n\n\n");

            printf("\n");
            for (i = 0; i < 5; i++) {
              for (j = 0; j < 5; j++) {
                if (j == 0) {
                  printf("                    ");
                }
                printf("%d", brr[i][j]);
                if (brr[i][j] > 9) {
                  printf(" |");
                } else {
                  printf("  |");
                }

              }
              printf("\n");
              printf("                    ---|---|---|---|---|");
              printf("\n");
            }

          }

        }
        if (flag == 1) {
          break;
        }
        for (k = 0; k < 12; k++) {
          if (sum[k] == 0) {
            int d = 1;

            printf("                         Ooopss\n");
            printf("                       you loose!\n                    better luck next time\n\n");

            printf("Computers table:\n\n");
            for (i = 0; i < 5; i++) {
              for (j = 0; j < 5; j++) {
                if (j == 0) {
                  printf("                    ");
                }
                printf("%d", arr[i][j]);
                if (arr[i][j] > 9) {
                  printf(" |");
                } else {
                  printf("  |");
                }

              }
              printf("\n");
              printf("                    ---|---|---|---|---|");
              printf("\n");
            }
          }
        }
        if (d == 1) {
          break;
        }
        //check
        if (flag == 0) {
          {
            a = arr[0][put];

            if (arr[0][put] == 0) {
              put++;
              a = arr[0][put];
            } else put++;
          }

          for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
              if (arr[i][j] == a) {
                arr[i][j] = 0;
              }
            }
          }
          for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
              if (brr[i][j] == a) {
                brr[i][j] = 0;
              }
            }
          }
          //  printf("\n");
          //  printf("\n");
          sum[0] = arr[0][0] + arr[0][1] + arr[0][2] + arr[0][3] + arr[0][4];
          sum[1] = arr[1][0] + arr[1][1] + arr[1][2] + arr[1][3] + arr[1][4];
          sum[2] = arr[2][0] + arr[2][1] + arr[2][2] + arr[2][3] + arr[2][4];
          sum[3] = arr[3][0] + arr[3][1] + arr[3][2] + arr[3][3] + arr[3][4];
          sum[4] = arr[4][0] + arr[4][1] + arr[4][2] + arr[4][3] + arr[4][4];
          sum[5] = arr[0][0] + arr[1][0] + arr[2][0] + arr[3][0] + arr[4][0];
          sum[6] = arr[0][1] + arr[1][1] + arr[2][1] + arr[3][1] + arr[4][1];
          sum[7] = arr[0][2] + arr[1][2] + arr[2][2] + arr[3][2] + arr[4][2];
          sum[8] = arr[0][3] + arr[1][3] + arr[2][3] + arr[3][3] + arr[4][3];
          sum[9] = arr[0][4] + arr[1][4] + arr[2][4] + arr[3][4] + arr[4][4];
          sum[10] = arr[0][0] + arr[1][1] + arr[2][2] + arr[3][3] + arr[4][4];
          sum[11] = arr[0][4] + arr[1][3] + arr[2][2] + arr[3][1] + arr[4][0];
          //player 2
          sum[12] = brr[0][0] + brr[0][1] + brr[0][2] + brr[0][3] + brr[0][4];
          sum[13] = brr[1][0] + brr[1][1] + brr[1][2] + brr[1][3] + brr[1][4];
          sum[14] = brr[2][0] + brr[2][1] + brr[2][2] + brr[2][3] + brr[2][4];
          sum[15] = brr[3][0] + brr[3][1] + brr[3][2] + brr[3][3] + brr[3][4];
          sum[16] = brr[4][0] + brr[4][1] + brr[4][2] + brr[4][3] + brr[4][4];
          sum[17] = brr[0][0] + brr[1][0] + brr[2][0] + brr[3][0] + brr[4][0];
          sum[18] = brr[0][1] + brr[1][1] + brr[2][1] + brr[3][1] + brr[4][1];
          sum[19] = brr[0][2] + brr[1][2] + brr[2][2] + brr[3][2] + brr[4][2];
          sum[20] = brr[0][3] + brr[1][3] + brr[2][3] + brr[3][3] + brr[4][3];
          sum[21] = brr[0][4] + brr[1][4] + brr[2][4] + brr[3][4] + brr[4][4];
          sum[22] = brr[0][0] + brr[1][1] + brr[2][2] + brr[3][3] + brr[4][4];
          sum[23] = brr[0][4] + brr[1][3] + brr[2][2] + brr[3][1] + brr[4][0];
          //if player 1 win
          int k;
          for (k = 0; k < 12; k++) {
            if (sum[k] == 0) {
              flag = 1;

              printf("                         Ooopss\n");
              printf("                       you loose!\n                    better luck next time\n\n\n");

              printf("Computers table:\n\n");
              for (i = 0; i < 5; i++) {
                for (j = 0; j < 5; j++) {
                  if (j == 0) {
                    printf("                    ");
                  }
                  printf("%d", arr[i][j]);
                  if (arr[i][j] > 9) {
                    printf(" |");
                  } else {
                    printf("  |");
                  }

                }
                printf("\n");
                printf("                    ---|---|---|---|---|");
                printf("\n");
              }
            }
          }
          if (flag == 1) {
            break;
          }
          for (k = 12; k < 24; k++) {
            if (sum[k] == 0) {
              int d = 1;

              printf("                         Bingo!!\n");
              printf("                        You win\n\n\n\n\n");

              printf("\n");
              for (i = 0; i < 5; i++) {
                for (j = 0; j < 5; j++) {
                  if (j == 0) {
                    printf("                    ");
                  }
                  printf("%d", brr[i][j]);
                  if (brr[i][j] > 9) {
                    printf(" |");
                  } else {
                    printf("  |");
                  }

                }
                printf("\n");
                printf("                    ---|---|---|---|---|");
                printf("\n");
              }

            }
            if (d == 1) {
              break;
            }

          }

        }

      }
      }
      else {
        printf("Player 1 make your table\n\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {

           scanf("%d",&arr[i][j]);

            if(arr[i][j]<1 || arr[i][j]>25 || check[arr[i][j]]==1){
                printf("invalid input\n");
                scanf("%d",&arr[i][j]);
            }
            check[arr[i][j]]=1;

        }
    }
    printf("\n\n\nPlayer 1 table:\n");
        printf("--- --- --- --- ---\n");
        //printf("\n");
        //printf("\n");
        //printf("-- -- -- -- --");

        // printf("-- -- -- -- --");
    //printf("\n");


    //print player 1 table
    for(i=0;i<5;i++)
          {
            for(j=0;j<5;j++)
            {
                printf("%d",arr[i][j]);
                   if(arr[i][j]>9)
                        {printf(" |");}
                   else
                        {printf("  |");}

            }
            printf("\n");
            printf("---|---|---|---|---|");
            printf("\n");
          }


    //input table player 2
    printf("Player 2 make your table\n\n");
     for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                scanf("%d",&brr[i][j]);
                if(brr[i][j]<1 || brr[i][j]>25 || chec[brr[i][j]]==1){
                printf("invalid input\n");
                scanf("%d",&brr[i][j]);
            }
            chec[brr[i][j]]=1;

            }
        }
    //print table player 2
    printf("\n\n\n\n\nPlayer 2 table:\n");
        printf("--- --- --- --- ---\n");
           for(i=0;i<5;i++)
            {
                for(j=0;j<5;j++)
                  {
                    printf("%d",brr[i][j]);
                       if(brr[i][j]>9)
                           {printf(" |");}
                       else
                           {printf("  |");}

                  }
            printf("\n---|---|---|---|---|\n");
           // printf("--|--|--|--|--|");
            //printf("\n");
            }

 for(c=0;c<18;c++)
   {
        printf("player 1 give a number: \n\n\n");
         printf("\n\n\n\n\nPlayer 1 table:\n");

        printf("                    --- --- --- --- ---\n");
        //printf("\n");
     for(i=0;i<5;i++)
        {
                for(j=0;j<5;j++)
                {
                    if(j==0)
                    {
                        printf("                    ");
                    }
                        printf("%d",arr[i][j]);
                    if(arr[i][j]>9)
                        {printf(" |");}
                    else
                        {printf("  |");}

                }
                printf("\n");
                printf("                    ---|---|---|---|---|");
                printf("\n");
       }



    scanf("%d",&a);
    printf("\n");
//make an element 0 in table 1
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i][j]==a)
            {
                arr[i][j]=0;
            }
        }
    }
   //  printf("\n");

//make an element 0 in table 2
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(brr[i][j]==a)
            {
                brr[i][j]=0;
            }
        }
    }

//check win
    //player 1
    sum[0]=arr[0][0]+arr[0][1]+arr[0][2]+arr[0][3]+arr[0][4];
    sum[1]=arr[1][0]+arr[1][1]+arr[1][2]+arr[1][3]+arr[1][4];
    sum[2]=arr[2][0]+arr[2][1]+arr[2][2]+arr[2][3]+arr[2][4];
    sum[3]=arr[3][0]+arr[3][1]+arr[3][2]+arr[3][3]+arr[3][4];
    sum[4]=arr[4][0]+arr[4][1]+arr[4][2]+arr[4][3]+arr[4][4];
    sum[5]=arr[0][0]+arr[1][0]+arr[2][0]+arr[3][0]+arr[4][0];
    sum[6]=arr[0][1]+arr[1][1]+arr[2][1]+arr[3][1]+arr[4][1];
    sum[7]=arr[0][2]+arr[1][2]+arr[2][2]+arr[3][2]+arr[4][2];
    sum[8]=arr[0][3]+arr[1][3]+arr[2][3]+arr[3][3]+arr[4][3];
    sum[9]=arr[0][4]+arr[1][4]+arr[2][4]+arr[3][4]+arr[4][4];
    sum[10]=arr[0][0]+arr[1][1]+arr[2][2]+arr[3][3]+arr[4][4];
    sum[11]=arr[0][4]+arr[1][3]+arr[2][2]+arr[3][1]+arr[4][0];
    //player 2
    sum[12]=brr[0][0]+brr[0][1]+brr[0][2]+brr[0][3]+brr[0][4];
    sum[13]=brr[1][0]+brr[1][1]+brr[1][2]+brr[1][3]+brr[1][4];
    sum[14]=brr[2][0]+brr[2][1]+brr[2][2]+brr[2][3]+brr[2][4];
    sum[15]=brr[3][0]+brr[3][1]+brr[3][2]+brr[3][3]+brr[3][4];
    sum[16]=brr[4][0]+brr[4][1]+brr[4][2]+brr[4][3]+brr[4][4];
    sum[17]=brr[0][0]+brr[1][0]+brr[2][0]+brr[3][0]+brr[4][0];
    sum[18]=brr[0][1]+brr[1][1]+brr[2][1]+brr[3][1]+brr[4][1];
    sum[19]=brr[0][2]+brr[1][2]+brr[2][2]+brr[3][2]+brr[4][2];
    sum[20]=brr[0][3]+brr[1][3]+brr[2][3]+brr[3][3]+brr[4][3];
    sum[21]=brr[0][4]+brr[1][4]+brr[2][4]+brr[3][4]+brr[4][4];
    sum[22]=brr[0][0]+brr[1][1]+brr[2][2]+brr[3][3]+brr[4][4];
    sum[23]=brr[0][4]+brr[1][3]+brr[2][2]+brr[3][1]+brr[4][0];
//if player 1 win
    int k;
    for(k=0;k<12;k++)
    {
      if(sum[k]==0)
      {
          flag=1;


              printf("                         Bingo\n");
              printf("                      player 1 win\n\n\n");
               printf("\n\n\n\n\nPlayer 1 table:\n");
               printf("                    --- --- --- --- ---");


        printf("\n");
         for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(j==0)
                {
                    printf("                    ");
                }
                    printf("%d",arr[i][j]);
                if(arr[i][j]>9)
                    {printf(" |");}
                else
                    {printf("  |");}

            }
            printf("\n");
            printf("                    ---|---|---|---|---|");
            printf("\n");
        }


      }

    }
//check game over
    if(flag==1)
    {
        break;
    }
//if player 2 win
    for(k=12;k<24;k++)
    {
      if(sum[k]==0)
      {
          d=1;

              printf("                         Bingo\n");
              printf("                      player 2 win\n\n\n");

     printf("\n");
     printf("\n\n\n\n\nPlayer 2 table:\n");
         for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(j==0)
                {
                    printf("                    ");
                }
                    printf("%d",brr[i][j]);
                if(brr[i][j]>9)
                     {printf(" |");}
                else
                     {printf("  |");}

            }
            printf("\n");
            printf("                    ---|---|---|---|---|");
            printf("\n");
        }

      }
    }

//check game over
    if(d==1)
       {
          break;
       }

//continue game

   if(flag==0) {printf("player 2 give a number: \n\n");


 printf("\n");
  printf("\n\n\n\n\nPlayer 2 table:\n");
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==0)
            {
                printf("                    ");
            }
                printf("%d",brr[i][j]);
           if(brr[i][j]>9)
                 {printf(" |");}
            else
                 {printf("  |");}

        }
        printf("\n");
        printf("                    ---|---|---|---|---|");
        printf("\n");
    }


    scanf("%d",&b);

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i][j]==b)
            {
                arr[i][j]=0;
            }
        }
    }


    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(brr[i][j]==b)
            {
                brr[i][j]=0;
            }
        }
    }
     printf("\n");


sum[0]=arr[0][0]+arr[0][1]+arr[0][2]+arr[0][3]+arr[0][4];
sum[1]=arr[1][0]+arr[1][1]+arr[1][2]+arr[1][3]+arr[1][4];
sum[2]=arr[2][0]+arr[2][1]+arr[2][2]+arr[2][3]+arr[2][4];
sum[3]=arr[3][0]+arr[3][1]+arr[3][2]+arr[3][3]+arr[3][4];
sum[4]=arr[4][0]+arr[4][1]+arr[4][2]+arr[4][3]+arr[4][4];
sum[5]=arr[0][0]+arr[1][0]+arr[2][0]+arr[3][0]+arr[4][0];
sum[6]=arr[0][1]+arr[1][1]+arr[2][1]+arr[3][1]+arr[4][1];
sum[7]=arr[0][2]+arr[1][2]+arr[2][2]+arr[3][2]+arr[4][2];
sum[8]=arr[0][3]+arr[1][3]+arr[2][3]+arr[3][3]+arr[4][3];
sum[9]=arr[0][4]+arr[1][4]+arr[2][4]+arr[3][4]+arr[4][4];
sum[10]=arr[0][0]+arr[1][1]+arr[2][2]+arr[3][3]+arr[4][4];
sum[11]=arr[0][4]+arr[1][3]+arr[2][2]+arr[3][1]+arr[4][0];

sum[12]=brr[0][0]+brr[0][1]+brr[0][2]+brr[0][3]+brr[0][4];
sum[13]=brr[1][0]+brr[1][1]+brr[1][2]+brr[1][3]+brr[1][4];
sum[14]=brr[2][0]+brr[2][1]+brr[2][2]+brr[2][3]+brr[2][4];
sum[15]=brr[3][0]+brr[3][1]+brr[3][2]+brr[3][3]+brr[3][4];
sum[16]=brr[4][0]+brr[4][1]+brr[4][2]+brr[4][3]+brr[4][4];
sum[17]=brr[0][0]+brr[1][0]+brr[2][0]+brr[3][0]+brr[4][0];
sum[18]=brr[0][1]+brr[1][1]+brr[2][1]+brr[3][1]+brr[4][1];
sum[19]=brr[0][2]+brr[1][2]+brr[2][2]+brr[3][2]+brr[4][2];
sum[20]=brr[0][3]+brr[1][3]+brr[2][3]+brr[3][3]+brr[4][3];
sum[21]=brr[0][4]+brr[1][4]+brr[2][4]+brr[3][4]+brr[4][4];
sum[22]=brr[0][0]+brr[1][1]+brr[2][2]+brr[3][3]+brr[4][4];
sum[23]=brr[0][4]+brr[1][3]+brr[2][2]+brr[3][1]+brr[4][0];


for(k=12;k<24;k++)
{
  if(sum[k]==0)
  {
      flag=1;
          printf("                         Bingo\n");
          printf("                      player 2 win\n\n\n");

 printf("\n");
  printf("\n\n\n\n\nPlayer 2 table:\n");

     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==0)
            {
                printf("                    ");
            }
                printf("%d",brr[i][j]);
           if(brr[i][j]>9)
                 {printf(" |");}
            else
                 {printf("  |");}

        }
        printf("\n");
        printf("                    ---|---|---|---|---|");
        printf("\n");
    }

  }
}

   }
   if(flag==1)
{
    break;
}
for(k=0;k<12;k++)
{
  if(sum[k]==0)
  {
      flag=1;

          printf("                         Bingo\n");
          printf("                      player 1 win\n\n\n");
           printf("\n\n\n\n\nPlayer 1 table:\n");
           printf("                    --- --- --- --- ---");


    printf("\n");

     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==0)
            {
                printf("                    ");
            }
                printf("%d",arr[i][j]);
            if(arr[i][j]>9)
                 {printf(" |");}
            else
                 {printf("  |");}

        }
        printf("\n");
        printf("                    ---|---|---|---|---|");
        printf("\n");
    }


  }

}
    if(flag==1)
    {
        break;
    }


   }
      }


      printf("Press 1 to play again\n or 0 to end game\n");
      scanf("%d", & p);
      if (p == 0) {

        break;

      }
      printf("%d\n", p);
    }

    return 0;
  }
  //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
