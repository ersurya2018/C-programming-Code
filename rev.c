 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 	int n,m,rev=0,rem;
 	
 	printf("Enter the any number : ");
 	scanf("%d",&n);
 	m=n;
 	while(m>0)
 	{
 		rem=m%10;
 		m=m/10;
 		rev=rev*10+rem;
	 }
	printf("real number who input you %d\n",n);
 	printf("reverse number %d",rev);
 	getch();
 }
 
