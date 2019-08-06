#include<stdio.h>
#include<stdlib.h>



int main(int argc, char* argv[])
{
int N,i,j,min,max;
char d[14][100];
N= atoi(argv[1]);
int a[N][N]; int s1[N]; int s2[N]; int s[(2*N)];

for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
scanf("%d", &(a[i][j]));
}
}


for(i=0;i<N;i++) {
for(j=0;j<N;j++) {
if(min>a[i][j])
min = a[i][j]; }
s1[i] = min;
min  = 100;
}


for(j=0;j<N;j++) 
  {
    for(i=0;i<N;i++)  
        {
           if(max < a[i][j])
           max = a[i][j]; 
        }
    s1[i] = min;
    max  = 0;
  }

for (i=0;i<(2*N);i++) 
{
  if(i<N)
  S[i] = S1[i];
  if(i>=N)
  S[i] = S2[i-N];
}

for(i=0;i<(2*n);i++)
     {
          c=0;
          for(j=2;j<S[i];j++)
          {
               if(S[i]%j==0)
               {
                    printf("%d is a Prime No.", S[i]); 
                    break;
               }
          }
      }
for(i=0;i<(2*n);i++) 
{
   sprintf(&(d[i][0]), "%d", S[i]); 
} 
for(i=1;i<(2*n);i++)
{
   strcat(&(d[0][0]), &(d[i][0]);
}

char sub[20];
printf("Enter the substring\n");
scanf("%s", sub);

for(i=0;i<100;i++)
  {
    if(a[i] == sub[0])
     for(j=0;j<(strlen(sub));j++)
       {
         if(a[i+j] != sub[j]) 
         break;
       }
     if(j == (strlen(sub)))
        {
          printf(" The index value is %d" , j);
          break;
        }
   }






#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[100] = {1,2,3,4,5,6,7,8,9};
    char sub[10] = {3,4,5};
for(i=0;i<10;i++)
  {
    if(a[i] == sub[0])
     {
       for(j=0;j<(strlen(sub));j++)
        {
         if(a[i+j] != sub[j]) 
         break;
       }
     }
     if(j == (strlen(sub)))
        {
          printf(" The index value is %d" , j);
          break;
        }
   }

}




  
