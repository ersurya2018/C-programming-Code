void main()
{

    int a,b,c,x,x1;
    printf("enter the value of a,b,c of a quardetic equation");
    scanf("%d%d%d",&a,&b,&c);

    c=b*b-4*a*c;
    x=-b+sqrt(c)/2*a;
    x1=-b-sqrt(c)/2*a;
    printf("the roots are %d \n %d",x,x1);
}
