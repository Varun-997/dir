#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(int argc, char* argv[])
 {
  int N,i,j,min,max;
  char d[14][100];
  N= atoi(argv[1]);
  int a[N][N]; int S1[N]; int S2[N]; int S[(2*N)];

  for(i=0;i<N;i++)
   {
     for(j=0;j<N;j++)
       {
           scanf("%d", &(a[i][j]));
       }
   }


   for(i=0;i<N;i++)
     {
       for(j=0;j<N;j++) 
         {
           if(min>a[i][j])
           min = a[i][j]; 
         }
       S1[i] = min; 
       min  = 100; 
     }


   for(j=0;j<N;j++) 
     {
       for(i=0;i<N;i++)  
         {
            if(max < a[i][j])
            max = a[i][j]; 
         }
       S1[i] = min;
       max  = 0;
      }

    for (i=0;i<(2*N);i++) 
      {
       if(i<N)
       S[i] = S1[i];
       if(i>=N)
       S[i] = S2[i-N];
      }

    for(i=0;i<(2*N);i++)
       {
          for(j=2;j<S[i];j++)
            {
              if(S[i]%j==0)
               {
                    printf("%d is a Prime No.", S[i]); 
                    break;
               }
            }
      }
     for(i=0;i<(2*N);i++) 
       {
         sprintf(&(d[i][0]), "%d", S[i]); 
       } 
     for(i=1;i<(2*N);i++)
       {
          strcat(&(d[0][0]), &(d[i][0]));
       }

     char sub[20];
     printf("Enter the substring\n");
     scanf("%s", sub);

     for(i=0;i<100;i++)
        {
          if(d[0][i] == sub[0])
          for(j=0;j<(strlen(sub));j++)
            {
                if(d[0][i+j] != sub[j]) 
                break;
            }
          if(j == (strlen(sub)))
            {
              printf(" First index for occurence of substring is %d" , j);
              break;
            }
         }

     printf("Local Minima Indicies:");
       for(i=1;i<((2*N)-1); i++)
         {
            if((S[i]<S[i-1]) && (S[i]<S[i+1]))
            printf(" %d", i);
         }

     printf("Local Maxima Indicies:");
        for(i=1;i<((2*N)-1); i++)
         {
            if((S[i]>S[i-1]) && (S[i]>S[i+1]))
            printf(" %d", i);
         }
 }







  
