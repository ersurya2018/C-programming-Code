void main()
{
int A[3][3],i,j;
printf("enter a matrix of (3*3)\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&A[i][j]);
}
}
printf("transpose of given matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d \t",A[j][i]);
}

printf("\n");
}
getch();
}
