void main()
{
 int a,b,c;
 printf("enter three number");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b&&b>c)
 {
     printf("a=%d is greatest number ",a);

 }
 else if(b>c&&b>a)
 {
     printf("b=%d is grater number",b);

 }
 else if(c>a&&c>b)
 {

     printf("c=%dis greats number",c);
 }
 else
 {

    printf("all numbers are equals");
 }

}
