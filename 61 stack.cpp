#include<stdio.h>
#define N 5
struct stack
{
	int stk[N];
	int top;
};
struct stack s;//struct variable
main()
{
	int ch=0,item,i;
	s.top=-1;
	while(ch!=4)
	{
		printf("1-> PUSH\n");
		printf("2-> POP\n");
		printf("3-> Traverse\n");
		printf("4-> Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
				if(s.top==N-1)
				{
					printf("Overflow\n");
				}
				else
				{
					s.top=s.top+1;
					printf("Enter element to PUSH : ");
					scanf("%d",&item);
					s.stk[s.top]=item;
				}
				break;
			case 2: 
				if(s.top==-1)
				{
					printf("Underflow :\n");
				}
				else
				{
					item=s.stk[s.top];
					printf("Deleted element=%d\n",item);
					s.top=s.top-1;
				}
				break;
			case 3:
				if(s.top==-1)
				{
					printf("Stack is Empty\n");
				}
				else
				{
					printf("Elements of stack \n");
					for(i=s.top;i>=0;i--)
					{
						printf("%d\n",s.stk[i]);
					}	
				}
				break;
			case 4:
				break;
			default:
				printf("Invalid choice\n");
				break;		
		}
	}
}
