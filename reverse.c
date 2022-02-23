void main()
{
int x[10];
int i;
printf("Enter ten numbers to the list");
for(i=0;i<10;i++)
{
scanf("%d",&x[i]);
}
printf("the numbers of list in reverse order\n");
for(i=9;i>=0;i--)

{
printf("%d",x[i]);
}
getch();
}
























