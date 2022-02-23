void main()
{
int x[10];
int i;
int sum=0;
float avg;
printf("enter ten number\n");
for(i=0;i<10;i++)
{
scanf("%d",&x[i]);
sum=sum+x[i];
}
avg=sum/10.0;
printf("sum=%d\n",sum);
printf("average=%.2f",avg);
getch();
}
