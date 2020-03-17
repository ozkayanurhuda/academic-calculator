

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


void menu () {

	
	
 ////MY LITTLE ACADEMIC CALCULATOR/////
 
 
 
 
 
 printf("**************");
 printf("\n**          **");
 printf("\n*****MENU*****");
 printf("\n**************");
 printf("\n\n");
 

 
 
 printf("\n1.Addition operation");
 printf("\n2.Subtraction operation");
 printf("\n3.Multiplication operation");
 printf("\n4.Division operation");
 printf("\n5.Square root operation");
 printf("\n6.Cube operation");
 printf("\n7.10^ operation");
 printf("\n8.x^y operation");
 printf("\n9.Sinus operation");
 printf("\n10.Cosinus operation");
 printf("\n11.Tanjant operation");
 printf("\n12.Cotanjant operation");
 printf("\n13.e^y operation");
 printf("\n14.2^y operation");
 printf("\n15.x! operation");
 printf("\n16.logx operation");
 printf("\n\n");
}
 
 int main () {
 	menu:
 	menu ();
 
 int operation;
 printf("Choose your operation : ");
 scanf("%d",&operation);
 
 printf("\n\n");
 
 int i,d,f=1;
 float a,b,c;
 float addition=0, subtraction=0, multiplication=0, division=0, squareroot=0, tan=0, cot=0;
 float e=2.7182818284590452;

 
if (operation<=4)
{
  printf("First number : ",a);
  scanf("%f",&a);
  printf("Second number : ",b);
  scanf("%f",&b);
  
}
 
 
 switch(operation)
{
	
 if(operation<=4)
 {
    
    case 1: 
     addition=a+b;
     printf("\nAddition : %.3f",addition);
     goto menu;
	 break;
 
    case 2:
     subtraction=a-b; 
     printf("\nSubtraction : %.3f",subtraction);
     break;

    case 3:
     multiplication=a*b;
     printf("\nMultiplication : %.3f",multiplication);
     goto menu;
	 break;
	 
    case 4:
     division=a/b;
     printf("\nDivision : %.3f",division);
     goto menu;
   	 break;
    } 
 
 
 case 5:
    
  printf("Enter a number : ",c);
  scanf("%f",&c);
  squareroot=sqrt(c);
        printf("\nSquareroot : %.3f",squareroot);
        goto menu;
		break;
    
 
 case 6:
    
  printf("Enter a number : ",c);
  scanf("%f",&c);
  c=c*c*c;
        printf("\nCube value : %.3f",c);
        goto menu;
		break;
    
 case 7:
    
  printf("Enter a number : ",c);
  scanf("%f",&c);
  c=pow(10,c);
        printf("\n10^Y : %.3f",c);
        goto menu;
		break;
    
 case 8: 
    
  printf("First number : ",a);
  scanf("%f",&a);
  printf("Second number : ",b);
  scanf("%f",&b);
  c=pow(a,b);
        printf("\nX^Y value : %.3f",c);
        goto menu;
		break;
    
 case 9:
    
  printf("Enter a degree (radians) : ",c);
  scanf("%f",&c);
  c=sin(c);
        printf("\nSinus value : %.3f",c);
        goto menu;
		break;
    
 case 10:
    
  printf("Enter a degree (radians) : ",c);
  scanf("%f",&c);
  c=cos(c);
        printf("\nCosinus value : %.3f",c);
        goto menu;
		break;
    
 case 11:
    
  printf("Enter a degree (radians) : ",c);
  scanf("%f",&c);
  tan=sin(c)/cos(c);
        printf("\nTanjant value : %.3f",tan);
        goto menu;
		break;
    
 case 12:
    
  printf("Enter a degree (radians) : ",c);
  scanf("%f",&c);
  cot=cos(c)/sin(c);
        printf("\nCotanjant value : %.3f",cot);
        goto menu;
		break;
    
 case 13:
    
  printf("Enter a number : ",c);
  scanf("%f",&c);
  c=pow(e,c);
        printf("\ne^y operation : %.3f",c);
        goto menu;
		break;
    
 case 14:
     
  printf("Enter a number : ",c);
  scanf("%f",&c);
  c=pow(2,c);
        printf("\n2^y operation : %.3f",c);
        goto menu;
		break;

 case 15:
        
  printf("Enter a number : ",d);
  scanf("%d",&d);
        
  for(i=1;i<=d;i++)
     {
  f=f*i;
  }
       printf("Factorial: %d",f);
       goto menu;
	   break;
   
 case 16:
 	 	
  printf("Enter a number : ",c);
  scanf("%f",&c);
  c=log(c)/log(10);
        printf("Logarithm operation: %.3f\n",c);
        goto menu;
		break;
		
		
 default : 
    printf("Error\n");
	break;	
}

 
 return 0;
}
