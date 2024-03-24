// #include<stdio.h>
// int main()
// {
// 	float a,b;
// 	int div;
// 	printf("enter the value of a and b=");
// 	scanf("%f%f",&a,&b);
// 	div=a/b;
//     //printf("sum=%d",sum);
//     printf("%f / %f=%d",a,b,div);
// 	return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	float a,b;
// 	float div;
// 	printf("enter the value of a and b=");
// 	scanf("%f%f",&a,&b);
// 	div=a/b;
//     printf("%f / %f=%f",a,b,div);
// 	return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	int a,div;
// 	float b;
// 	printf("enter the value of a and b=");
// 	scanf("%d%f",&a,&b);
// 	div=a/b;
//     printf("%d / %f=%d",a,b,div);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	float b,h,aot;
// 	printf("enter the value of base and height=");
// 	scanf("%f%f",&b,&h);
// 	aot=(float)1/(float)2*b*h;
//     printf("area of triangle=%f",aot);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	float a=3.5;
// 	printf("%d",(int)a);
// 	return 0;
// }



// #include<stdio.h>
// int main()
// {
// 	int a=8;
// 	printf("%d\n",a);
// 	printf("%d\n",a++);
// 	printf("%d\n",++a);
// 	a++;
// 	++a;
// 	printf("%d\n",--a);
// 	printf("%d\n",a--);
// 	a--;
// 	printf("%d\n",a);
// 	return 0;
// }



// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {
	
//     char s[100];
//     scanf("%[^\n]%*c", &s);
//   	printf("Hello, World!\n");
//     printf("%s",s);
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
// 	int a,b,c;
// 	printf("enter the values=");
// 	scanf("%d%d",&a,&b);
// 	c=a>b?a:b;
// 	printf("%d is greater",c);
// //a>b?printf("%d is greater",a):printf("%d is greater",b);	return 0;
// }



// #include<stdio.h>
// int main()
// {
// 	int a=5,b=7;
// 	printf("%d\n",a&b);
// 	printf("%d\n",a|b);
// 	printf("%d\n",a^b);
// 	printf("%d\n",~a);
// 	printf("%d\n",25<<3);
// 	printf("%d\n",25>>2);
// 	return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	int a,b,c;
// 	printf("enter the values=");
// 	scanf("%d%d",&a,&b);
// 	printf("values before swapping\n");
// 	printf("a=%d\tb=%d\n",a,b);
// 	c=a;
// 	a=b;
// 	b=c;
// 	printf("values after swapping\n");
// 	printf("a=%d\tb=%d\n",a,b);
// 	return 0;
// }



// #include<stdio.h>
// int main()
// {   int a;
//     printf("int=%d bytes\n",sizeof(a));
// 	printf("int=%d bytes\n",sizeof(int));
// 	printf("short int=%u\n",sizeof(short int));
// 	printf("char=%d\n",sizeof(char));
// 	printf("float=%d\n",sizeof(float));
// 	printf("long int=%d\n",sizeof(long int));
// 	printf("double=%d\n",sizeof(double));
// 	printf("long double=%d\n",sizeof(long double));
// 	printf("unsigned short int=%d",sizeof(unsigned short int));
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {   int a,b;
//     a=4,5;
//     b=(4,5,6);
//     printf("a=%d   b=%d",a,b);
// 	return 0;
// }





// #include<stdio.h>
// int main()
// {   int age;
//     printf("enter your age");
//     scanf("%d",&age);
//     if(age>=18)
//     	printf("person is eligible for voting");
// 	else
// 		printf("person is not eligible");
// 	return 0;
// }





// #include<stdio.h>
// int main()
// {   int n;
//     printf("enter any number");
//     scanf("%d",&n);
//     if(n%2==0)
//     	printf("%d is even",n);
// 	else
// 		printf("%d is odd",n);
// 	return 0;
// }





// #include<stdio.h>
// int main()
// {   int n;
//     printf("enter any number");
//     scanf("%d",&n);
//     if(n%2==0 && n%5==0)
//     	printf("%d is divisible",n);
// 	else
// 		printf("%d is not divisible",n);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {   int a;
//     scanf("%d",&a);
//     printf("%d  %c",a,a);
// 	return 0;
// }



// #include<stdio.h>
// int main()
// {   char a;
//     scanf("%c",&a);
//     printf("%c  %d",a,a);
// 	return 0;
// }





// #include<stdio.h>
// int main()
// {   char ch;
//     scanf("%c",&ch);
//     if(ch=='a'||ch=='A'||ch=='e'||ch=='E')//complete it
//     printf("entered character is vowel");
//     else
//     printf("entered character is not vowel");
// 	return 0;
// }




// #include<stdio.h>
// int main()
// {   int a,b,c;
// printf("enter the values");
// scanf("%d%d%d",&a,&b,&c);
// if(a>b && a>c)
// printf("%d is greatest",a);
// else if(b>a && b>c)
// printf("%d is greatest",b);
// else
// printf("%d is greatest",c);
// 	return 0;
// }




// #include<stdio.h>
// int main()
// {   int a,b,c;
// printf("enter the values");
// scanf("%d%d%d",&a,&b,&c);
// if(a>b && a>c)
// printf("%d is greatest",a);
// else if(b>a && b>c)
// printf("%d is greatest",b);
// else if(c>a && c>b)
// printf("%d is greatest",c);
// 	return 0;
// }



// #include<stdio.h>
// int main()
// {   int a,b,res;
//     char choice;
//     printf("Press + for add\n");
//     printf("Press - for sub\n");
//     printf("Press * for mul\n ");
//     printf("enter your choice");
//     scanf("%c",&choice);
//     switch(choice)
//     {
//     case '+':
//         printf("enter inputs=");
//         scanf("%d%d",&a,&b);
//     	res=a+b;
//     	printf("sum=%d",res);
// 	    break;
// 	default:
// 	printf("invalid choice");
// 	break;
// 	case '-':
// 		printf("enter inputs=");
//         scanf("%d%d",&a,&b);
// 		res=a-b;
// 		printf("sub=%d",res);
// 		break;
// 	case '*':
// 		printf("enter inputs=");
//         scanf("%d%d",&a,&b);
// 		res=a*b;
// 		printf("mul=%d",res);
// 		break;
//     }
// 	return 0;
// }



// //for loop

// #include<stdio.h>
// int main()
// {   
//  int i;
//  for(i=2;i<=6;i++)
//  {
//  	printf("floor climbed\n");
//  }
// 	return 0;
// }

// //While loop
// #include<stdio.h>
// int main()
// {   
//  int i=2;
//  while(i<=6)
//  {
//  	printf("floor climbed\n");
//  	i++;
//  }
// 	return 0;
// }

// //do while
// #include<stdio.h>
// int main()
// {   
//  int i=2;
//  do
//  {
//  	printf("floor climbed\n");
//  	i++;
//  }while(i<=6);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
//  char another ;
//  int a,b,res;
// char choice;
//   do
// {
//     printf("Press + for add\n");
//     printf("Press - for sub\n");
//     printf("Press * for mul\n ");
//     printf("enter your choice");
//     fflush(stdin);
//     scanf("%c",&choice);
//     switch(choice)
//     {
//     case '+':
//         printf("enter inputs=");
//         scanf("%d%d",&a,&b);
//     	res=a+b;
//     	printf("sum=%d",res);
// 	    break;
// 	default:
// 	printf("invalid choice");
// 	break;
// 	case '-':
// 		printf("enter inputs=");
//         scanf("%d%d",&a,&b);
// 		res=a-b;
// 		printf("sub=%d",res);
// 		break;
// 	case '*':
// 		printf("enter inputs=");
//         scanf("%d%d",&a,&b);
// 		res=a*b;
// 		printf("mul=%d",res);
// 		break;
//     }
// printf ( "\nWant to enter another number y/n " ) ;
// fflush(stdin);
// scanf ("%c", &another ) ;
// } while ( another == 'y'||another=='Y' ) ;

// return 0;
// }





// #include<stdio.h>
// int main()
// {   
//  int n,sum=0,a;
//  printf("enter any number=");
//  scanf("%d",&n);
//  while(n!=0)
//  {
//  	a=n%10;
//  	sum=sum+a;
//  	n=n/10;
//  }
//  printf("sum=%d",sum);
// return 0;
// }



// #include<stdio.h>
// int main()
// {   
//  int n,rev=0,a;
//  printf("enter any number=");
//  scanf("%d",&n);
//  while(n!=0)
//  {
//  	a=n%10;
//  	rev=rev*10+a;
//  	n=n/10;
//  }
//  printf("rev=%d",rev);
// return 0;
// }



// #include<stdio.h>
// int main()
// {   
//  int n,rev=0,a,t;
//  printf("enter any number=");
//  scanf("%d",&n);
//  t=n;
//  while(n!=0)
//  {
//  	a=n%10;
//  	rev=rev*10+a;
//  	n=n/10;
//  }
//  printf("rev=%d\n",rev);
//  if(t==rev)
//  printf("no is palindrome");
//  else
//  printf("no is not palindrome");
// return 0;
// }








// #include<stdio.h>
// int main()
// {   
//  int i,sum=0,n;
//  printf("enter the number=");
//  scanf("%d",&n);
//  for(i=1;i<=n;i++)
//  {
//  	sum=sum+i;
//  }
//  printf("sum=%d",sum);
// return 0;
// }




// #include<stdio.h>
// int main()
// {   
//  int i,fact=1,n;
//  printf("enter the number=");
//  scanf("%d",&n);
//  for(i=1;i<=n;i++)
//  {
//  	fact=fact*i;
//  }
//  printf("factorial=%d",fact);
// return 0;
// }


// #include<stdio.h>
// int main()
// {   
//  int i,even=0,odd=0,n;
//  printf("enter the number=");
//  scanf("%d",&n);
//  for(i=1;i<=n;i++)
//  {
//  	if(i%2==0)
//  	{
// 	even=even+1;
//  	printf("%d is even roll no\n",i);
//  }
//  	else
//  	{
//  	odd++;
//  	printf("%d is odd roll no\n",i);
//  }
//  }
//  //printf("count of even roll no=%d\n",even);
//  //printf("count of odd roll no=%d",odd);
// return 0;
// }

// #include<stdio.h>
// int main()
// {   
//  int i,j,n;
//  printf("enter no. of rows=");
//  scanf("%d",&n);
//  for(i=1;i<=n;i++)
//  {
//  	for(j=1;j<=i;j++)
//  	{
//  		printf("*");
// 	 }
// 	printf("\n");
//  } 
// return 0;
// }

// #include<stdio.h>
// int main()
// {   
//  int i,j,n;
//  printf("enter no. of rows=");
//  scanf("%d",&n);
//  for(i=1;i<=n;i++)
//  {
//  	for(j=1;j<=i;j++)
//  	{
//  		printf("%d",j);
// 	 }
// 	printf("\n");
//  } 
// return 0;
// }
// #include<stdio.h>
// int main()
// {   
//  int i,j,n;
//  printf("enter no. of rows=");
//  scanf("%d",&n);
//  for(i=1;i<=n;i++)
//  {
//  	for(j=1;j<=i;j++)
//  	{
//  		printf("%d",i);
// 	 }
// 	printf("\n");
//  } 
// return 0;
// }

// #include<stdio.h>
// int main()
// {   
//  int i,j,n;
//  printf("enter no. of rows=");
//  scanf("%d",&n);
//  for(i=1;i<=n;i++)
//  {
//  	for(j=1;j<=i;j++)
//  	{
//  		printf("%c",i+64);
// 	 }
// 	printf("\n");
//  } 
// return 0;
// }





// #include<stdio.h>
// int main()
// {   
//  int n,i,sum=0;
//  for(i=1;i<=5;i++)
//  {
//  	printf("enter n");
//  	scanf("%d",&n);
//  	if(n<0)
//  	break;
//  	else
//  	sum=sum+n;
//  }
//  printf("sum=%d",sum);
// return 0;
// }


// #include<stdio.h>
// int main()
// {   
//  int n,i,sum=0;
//  for(i=1;i<=5;i++)
//  {
//  	printf("enter n");
//  	scanf("%d",&n);
//  	if(n<0)
//  	continue;
//  	else
//  	sum=sum+n;
//  }
// printf("sum=%d",sum);
// return 0;
// }

// #include<stdio.h>
// int main()
// {   
//  int n,i,sum=0;
//  for(;;)
//  {
//  	printf("enter n");
//  	scanf("%d",&n);
//  	if(n<0)
//  	break;
//  	else
//  	sum=sum+n;
//  }
//  printf("sum=%d",sum);
// return 0;
// }



// #include<stdio.h>
// int main()
// {
//    int age;
//    printf("Enter your age:");
//    scanf("%d", &age);
//    if(age>=18)
//         goto Vote;
//    else
//         goto NoVote;
//      Vote:
//      printf("you are eligible for voting");
//      return;
//      NoVote:
//      printf("you are not eligible to vote");
//    return 0;
// }




// #include<stdio.h>
// int main()
// {   
//  int n,i,sum=0;
//  for(i=1;i<=5;i++)
//  {
//  	printf("enter n");
//  	scanf("%d",&n);
//  	if(n<0)
//  	continue;
//  	else
//  	sum=sum+n;
//  }
// printf("sum=%d",sum);
// return 0;
// }



// #include<stdio.h>
// void mul();//Function Declaration
// void reverse();
// int main()
// {  
// mul();//Function call
// return 0;
// }
// void mul()// Function Definition
// {
//  int a,b,m;
//  printf("enter the values=");
//  scanf("%d%d",&a,&b);
//  m=a*b;
//  printf("multiplication=%d\n",m);
//  reverse();
// }
// void reverse()
// {
// 	int n,i,rev=0;
// 	printf("enter n=");
// 	scanf("%d",&n);
// 	while(n!=0)
// 	{
// 		i=n%10;
// 		rev=rev*10+i;
// 		n=n/10;
// 	}
// 	printf("reverse=%d\n",rev);
// }





// #include<stdio.h>
// void mul();//Function Declaration
// int main()
// {   
// mul();//Function call
// return 0;
// }
// void mul()// Function Definition
// {
// 	printf("hi");
// }

// #include<stdio.h>
// void mul()// Function Definition
// {
// 	printf("hi");
// }
// int main()
// {   
// mul();//Function call
// return 0;
// }



// #include<stdio.h>
// void mul();//Function Declaration
// void reverse();
// int main()
// {  
// mul();//Function call
// return 0;
// }
// void mul()// Function Definition
// {
//  int a,b,m;
//  printf("enter the values=");
//  scanf("%d%d",&a,&b);
//  m=a*b;
//  printf("multiplication=%d\n",m);
//  reverse();
// }
// void reverse()
// {
// 	int n,i,rev=0;
// 	printf("enter n=");
// 	scanf("%d",&n);
// 	while(n!=0)
// 	{
// 		i=n%10;
// 		rev=rev*10+i;
// 		n=n/10;
// 	}
// 	printf("reverse=%d\n",rev);
// }



// #include<stdio.h>
// #include<math.h>
// int main()
// {
//   	double x=9.0,y=8.0,z=7.0;
//   	printf("\nLog value is:%lf",log(x));
//   	printf("\nLog value with base 10 is:%lf",log10(x));
//   	printf("\nExponential value is:%lf",exp(x));
//   	printf("\n Ceil value is:%lf",ceil(8.94));
//   	printf("\n Floor value is:%lf",floor(2.34));
//   	printf("\n Power:%lf",pow(3.0,2.0));
//   	printf("\n Floating absolute is:%lf",fabs(-2.9));
//   	printf("\n Square root value is:%lf",sqrt(9));
//   	printf("\n Sin:%f,cos:%f,tan:%lf",sin(x),cos(y),tan(z));
//   	printf("\n fMod:%f",fmod(2.0,1.5));
//   	return 0;
// }




// #include<stdio.h>
// void swap(int,int);
// int main()
// {  
// int a,b;
// printf("enter the values\n");
// scanf("%d%d",&a,&b);
// printf("Values before swapping\n");
// printf("a=%d\tb=%d\n",a,b);
// swap(a,b);
// printf("Values after swapping\n");
// printf("a=%d\tb=%d\n",a,b);
// return 0;
// }
// void swap(int x,int y)
// {
// 	int z;
// 	z=x;
// 	x=y;
// 	y=z;
// 	printf("values in function\n");
// 	printf("x=%d\ty=%d\n",x,y);
// }

// #include<stdio.h>

// int main()
// {
// 	int a=30;
// 	int *p=&a;
// 	printf("%d\n",a);//Value of a 30
// 	printf("%d\n",p);//Value of p i.e. address of a
//     printf("%d\n",&a);//Address of a
//     printf("%d\n",&p);//Address of p
//     printf("%d\n",*p);//value at address which pointer variable holds
//     *p=25;
//     printf("%d\n",a);
//     printf("%d\n",*p);
// return 0;  
// }

// //Call by reference
// #include<stdio.h>
// void swap(int*,int*);
// int main()
// {  
// int a,b;
// printf("enter the values\n");
// scanf("%d%d",&a,&b);
// printf("Values before swapping\n");
// printf("a=%d\tb=%d\n",a,b);
// swap(&a,&b);
// printf("Values after swapping\n");
// printf("a=%d\tb=%d\n",a,b);
// return 0;
// }
// void swap(int *x,int *y)
// {
// 	int z;
// 	z=*x;
// 	*x=*y;
// 	*y=z;
// 	printf("values in function\n");
// 	printf("x=%d\ty=%d\n",*x,*y);
// }

// #include<stdio.h>
// int sum(int);
// int main()
// {  
// int n,r;
// printf("enter the value of n=");
// scanf("%d",&n);
// r=sum(n);
// printf("%d",r);
// return 0;
// }
// int sum(int n)
// {
// 	if(n==1)
// 	return 1;
// 	else
// 	return n+sum(n-1);
// }



// #include<stdio.h>
// int main()
// {  
// int n,r;
// printf("enter the value of n=");
// scanf("%d",&n);
// r=sum(n);
// printf("%d",r);
// return 0;
// }
// int sum(int n)
// {
// 	if(n==1||n==0)
// 	return 1;
// 	else
// 	return n*sum(n-1);
// }




//// 1.	Sum of Digits of a Five Digit Number
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
	
//     int n,a,sum=0;
//     scanf("%d", &n);
//     while(n!=0)
//     {
//         a=n%10;
//         sum=sum+a;
//         n=n/10;
//     }
//     printf("%d",sum);
//     //Complete the code to calculate the sum of the five digits on n.
//     return 0;
// }

// //2.	Count Divisors 7
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int l,r,k,i=0,count=0;
//     scanf("%d%d%d",&l,&r,&k);
//     for(i=l;i<=r;i++)
//     {
//         if(i%k==0)
//         count++;
//     }
//     printf("%d",count);

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }




// // //1.	Conditional Statements in C

// #include <assert.h>
// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// int t;
//     scanf("%d",&t);
//       // Complete the code.
//     if(t<10) 
//     {
//     if (t==9) printf("nine");
//     else if (t==8) printf("eight");
//     else if (t==7) printf("seven");
//     else if (t==6) printf("six");
//     else if (t==5) printf("five");
//     else if (t==4) printf("four");
//     else if (t==3) printf("three");
//     else if (t==2) printf("two");
//     else if (t==1) printf("one");
//     }
//     else
//     printf("Greater than 9");
//     return 0;
// }

//// 2. Palindromic Prime Number
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int n,c=0,rev=0,t,i;
// scanf("%d",&n);
// t=n;
// for(i=1;i<=t;i++)
// {
// if (t%i==0)
// c++;
// }
// if(c==2)
// {
// while(t>0)
// {
// rev=rev*10+(t%10);
// t=t/10;
// }
// if(rev==n)
// {
// printf("YES");
// }
// else
// printf("NO");
// }
// else
// {
// printf("NO");
// }

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
// int l,n,w,h,i;
// scanf("%d",&l);
// scanf("%d",&n);
// for(i=1;i<=n;i++)
// {
// scanf("%d%d",&w,&h);
// if(w<l||h<l)
// printf("UPLOAD ANOTHER\n");
// else
// {
// if(w==h)
// printf("ACCEPTED\n");
// else
// printf("CROP IT\n");
// }
// }

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }





// #include<stdio.h>
// int main()
// {  
// float a[5],max=0.0;
// int i,n;
// printf("enter the no of elements=");
// scanf("%d",&n);
// printf("\nenter the elements\n");
// for(i=0;i<n;i++)
// {
// 	scanf("%f",&a[i]);	
// }
// max=a[0];
// for(i=0;i<n;i++)
// {
// 	if(max<a[i])
// 	max=a[i];
// }
// printf("max=%.1f",max);
// return 0;
// }






// #include<stdio.h>
// int main()
// {  
// int a[5];
// scanf("%d",&a[0]);
// scanf("%d",&a[1]);
// scanf("%d",&a[2]);
// scanf("%d",&a[3]);
// scanf("%d",&a[4]);
// printf("%d\n",a[0]);
// printf("%d\n",a[1]);
// return 0;
// }




// #include<stdio.h>
// int main()
// {  
// int a[5],i;
// for(i=0;i<5;i++)
// {
// 	scanf("%d",&a[i]);
// }
// for(i=0;i<5;i++)
// {
// 	printf("%d\t%u\n",a[i],&a[i]);
// }
// return 0;
// }




// #include<stdio.h>
// int main()
// {  
// int a[5],i,n;
// printf("enter the no of elements=");
// scanf("%d",&n);
// printf("\nenter the elements\n");
// for(i=0;i<n;i++)
// {
// 	scanf("%d",&a[i]);
// }
// printf("\nThe elements with their address are\n");
// for(i=0;i<n;i++)
// {
// 	printf("%d\t%u\n",a[i],&a[i]);
// }
// printf("\n%u\t%u",a+1,&a+1);
// return 0;
// }



// #include<stdio.h>
// int main()
// {  
// int a[5],i,n,sum=0;
// printf("enter the no of elements=");
// scanf("%d",&n);
// printf("\nenter the elements\n");
// for(i=0;i<n;i++)
// {
// 	scanf("%d",&a[i]);
// 	sum=sum+a[i];
// }
// printf("sum=%d",sum);
// return 0;
// }


// #include<stdio.h>
// int main()
// {  
// float a[5],sum=0.0,avg;
// int i,n;
// printf("enter the no of elements=");
// scanf("%d",&n);
// printf("\nenter the elements\n");
// for(i=0;i<n;i++)
// {
// 	scanf("%f",&a[i]);
// 	sum=sum+a[i];
// }
// avg=sum/n;
// printf("avg=%.3f",avg);
// return 0;
// }





// #include<stdio.h>
// void sort(int a[],int n)
// {
// 	int i,j,t;
//  	for(i=1;i<n;i++)//pass
//     {
//        for(j=0;j<n-1;j++)//comparison
//        {
// 	  if(a[j]>a[j+1])
// 	  {
// 	     t=a[j];
// 	     a[j]=a[j+1];
// 	     a[j+1]=t;
// 	  }
// 	 }
//      }     
// }
// int main()
// {  
// int a[20],n;
//     int i;
//     printf("\nEnter the size of the array:");
//     scanf("%d",&n);
//     printf("\n Enter the elements in the array");
//     for(i=0;i<n;i++)
// 	scanf("%d",&a[i]);
//     sort(a,n);
//     printf("\n Sorted array is");
//      for(i=0;i<n;i++)
//       printf("%d  ",a[i]);
// return 0;
// }





// #include<stdio.h>
// void ss(int x)
// {
//      ++x;
// 		printf("    %d\n",x);
// }
// int main()
// {
// 	int a[10],n,i;
// 	printf("enter the no of elements of array\t");
// 	scanf("%d",&n);
// 	printf("enter elements of array\n");
// 	for(i=0;i<n;i++)
// 		scanf("%d",&a[i]);
	
// 	for(i=0;i<n;i++)
// 	{
// 		ss(a[i]);
// 	}
// 	for(i=0;i<n;i++)
// 	{
// 		printf("\n%d\t",a[i]);
// 	}
// 	return 0;
// }





// #include<stdio.h>



// void ss(int x[],int n)
// {
//      int i;
// for (i=0;i<n;i++)
// 	   { 
//     ++x[i];
// 		printf("%d\t",x[i]);}
// 	printf("\n");}
// int main()
// {
// 	int a[10],n,i;
// 	printf("enter the no of elements of array\t");
// 	scanf("%d",&n);
// 	printf("enter elements of array\n");
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%d",&a[i]);
// 	}
// 	ss(a,n);
// 	for ( i=0;i<n;i++)
// 	{
// 		printf("%d\t",a[i]);
// 	}
// 	return 0;
// }




// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

// int n;
// scanf("%d",&n);
// int a[n], sum=0, i;
// for(i=0;i<n;i++) scanf("%d",&a[i]);
// for(i=0;i<n;i++) sum = sum + a[i];

// printf("%d",sum);

// return 0;
// }







// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

// int n;
// scanf("%d",&n);
// int a[n], i;
// for(i=0;i<n;i++) scanf("%d",&a[i]);
// for(i=n-1;i>=0;i--) printf("%d ",a[i]);

// return 0;
// }


// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// struct product
// {
// char name[20];
// int price;
// int id;
// }p[100];
// void getdata()
// {
// int i;
// printf("enter data of products\n");
// for(i=0;i<3;i++)
// {
// scanf("%s%d%d",p[i].name,&p[i].price,&p[i].id);
// }}
// void display()
// {int i;
// printf("avaiable products are \n");
// printf("\tname\tprice\tid\n");
// for(i=0;i<3;i++)
// {printf("%10s",p[i].name);
// printf("%5d",p[i].price);
// printf("%5d\n",p[i].id);
// }}
// void search()
// {
// int i;
// char pname[20];
// printf("enter product to search");
// scanf("%s",pname);
// for(i=0;i<3;i++)
// {if(stricmp(p[i].name,pname)==0)
// {printf("name=%s pr=%d\n",p[i].name,p[i].price);
// }}}
// void sort()
// {
// int i,j;
// struct product temp;
// for(i=1;i<3;i++)
// {for(j=0;j<2;j++)
// {if(p[j].price>p[j+1].price)
// {
// temp=p[j];
// p[j]=p[j+1];
// p[j+1]=temp;
// }}}
// display();
// }
// int main()
// {
// getdata();
// display();
// search();
// sort();
// getch();

// }

// 1:32 PM


// #include<stdio.h>
// #include<conio.h>
// struct book
// {
// char name[15] ;
// float price;
// int pages ;
// }b1[2] ;
// int main()
// {
// int i,j;
// struct book num;
// for(i=0; i<2;i++)
// {

// printf("\nEnter name, price & no. of pages of book\n");
// scanf("%s %f %d",b1[i].name,&b1[i].price,&b1[i].pages);
// }
// for (i=1;i<2;i++)
// {

// for(j=0;j<1;j++)
// {

// if(b1[j].price>b1[j+1].price)
// {

// num=b1[j];
// b1[j]=b1[j+1];
// b1[j+1]= num;
// }}}
// for(i=0; i<2;i++)
// {
// printf("\nAnd this is what you entered");
// printf("\nThe name, price & no. of pages of book\n\n");
// printf("%s \t %.2f \t %d",b1[i].name,b1[i].price,b1[i].pages);

// }
// getch();

// }



// #include<stdio.h>
// int main()
// {
// int a=90;
// int *p;
// p=&a;
// printf("%d\n",a);//Value of a
// printf("%p\n",p);//Value of p i.e. address of a
// printf("%p\n",&a);//Address of a
// printf("%d\n",&p);//Address of p
// printf("%d\n",*p);
// printf("%d\n",*(&a));
// *p=67;
// printf("%d\n",*p);
// printf("%d\n",a);
// return 0;
// }



// #include<stdio.h>
// int main()
// {
// int a=90;
// int *p;
// p=&a;
// float b=56.8;
// char c='a';
// float *p1=&b;
// char *p2=&c;
// printf("%d %u\n",*p,p);
// printf("%f %u\n",*p1,p1);
// printf("%c %u\n",*p2,p2);
// printf("%d %d %d",sizeof(p),sizeof(p1),sizeof(p2));
// return 0;
// }

// #include<stdio.h>
// void sum(int *,int *,int *);
// int main()
// {
// int a,b,s;
// printf("enter values=");
// scanf("%d%d",&a,&b);
// sum(&a,&b,&s);
// printf("%d",s);
// return 0;
// }
// void sum(int *a1, int *b1, int *s1)
// {
// *s1=*a1+*b1;
// printf("sum=%d\n",*s1);
// }


// #include<stdio.h>
// int main()
// {
// int a,b,sum;
// int *p,*p1,*p2;
// p=&a;
// p1=&b;
// p2=&sum;
// printf("enter the values\n");
// scanf("%d%d",p,p1);
// //sum=a+b;
// *p2=*p+*p1;
// printf("sum=%d",*p2);
// return 0;
// }



// #include<stdio.h>
// void sum(int *,int *);
// int main()
// {
// int a,b;
// printf("enter values=");
// scanf("%d%d",&a,&b);
// sum(&a,&b);

// return 0;
// }
// void sum(int *a1, int *b1)
// {
// int s=*a1+*b1;
// printf("sum=%d",s);
// }



// //void
// #include<stdio.h>
// int main()
// {
// int a=90;
// float b=56.8;
// char c='a';
// void *p;
// p=&a;
// printf("%d\n",*(int*)p);
// p=&b;
// printf("%f\n",*(float*)p);
// p=&c;
// printf("%c\n",*(char*)p);
// return 0;
// }

