#include<stdio.h>
#include<string.h>

int main(int argc, char * argv[])
{
  int n;  
  n= atoi(argv[1]); \\ no of people
  char names[n][100]; char expen[100][100]
  for(i=0;i<n;i++)
   {
     scanf("%s", &(names[i][0]));    \\ Inputting the names of the members 
   }
  for(i=0;i<100;i++)
   {
     scanf("%s" ,&(expen[i][0]);
     if( (expen[i][0]) == "done" )
     break;
   } 
