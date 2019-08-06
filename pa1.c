#include<stdio.h>
#include<stdlib.h>



int main(int argc, char* argv[])
{
int N,i,j,min,max;
N= atoi(argv[1]);
int a[N][N]; int s1[N}; int s2[N];
for(i=0;i<N,i++)
{
for(j=0;j<N,j++)
{
scanf("%d", &(a[i][j]));
}
}

int s1[N];
for(i=0;i<N;i++) {
for(j=0;j<N;j++) {
if(min>a[i][j])
min = a[i][j]; }
s1[i] = min;
min  = 100;
}

int s2[N];
for(j=0;j<N;j++) {
for(i=0;i<N;i++) {
if(max < a[i][j])
max = a[i][j]; }
s1[i] = min;
max  = 0;
}

