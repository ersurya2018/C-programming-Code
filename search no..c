void main()
{
int list[10];
int n;
int i;
printf("Enter ten number to the list\n");
for(i=0;i<10;i++)
{
scanf("%d",&list[i]);

}
printf("Enter the number to be search\n");
scanf("%d",&n);
for(i=0;i<10;i++)
{
if(list[i]==n)
{
printf("the number %d is found at location %d\n",n,(i+1));
goto end;
}
}
printf("the number is not found\n");
end:
    getch();


}
