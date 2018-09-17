#include<stdio.h>
#include<math.h>

int main(){

	int a , b ,c ,d; 
	double x1,x2;
	
	printf("Enter a b c:");
	scanf("%d %d %d",&a,&b,&c);
	d = b*b - 4*c*a;
	if  (d >= 0) {
		
		x1=(sqrt(d)-b) / (a*2);
		x2=(-sqrt(d)-b) / (a*2);
		  
		printf("For equation %d x^2 %d x + %d =0, two roots are\n",a,b,c);	
		printf("x1 = %.1f\n",x1);
		printf("x2 = %.1f\n",x2);
		   
	}  
	else {
		printf("no real roots");
	}
}
