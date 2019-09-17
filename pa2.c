#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
  int n; int i; 
  n= atoi(argv[1]); /* no of people */
  char names[n][100];
  char expen[100][100];
  for(i=0;i<n;i++)
   {
     scanf("%s", &(names[i][0]));    /* Inputting the names of the members */ 
   }
  for(i=0;i<100;i++)
   {
     scanf("%s" ,&(expen[i][0]));      /* Inputting the expenses */
     if(strcmp((&(expen[i][0])),"done") == 0) /* condition if 'done' is inputted */   
     break;
   }
  for(i=0;i
   
}

