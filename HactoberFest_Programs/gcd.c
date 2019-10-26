#include<stdio.h>
int gcd(int a,int b){
	//Write code here
	 int gcd1;
	for(int i=1;i<=a && i<=b;i++){
	if(a%i==0 && b%i==0){
	gcd1=i;
}

}
return gcd1;
}
int main(){
	int num1,num2,res=0;
	printf("\nEnter 2 numbers : ");
	scanf("%d%d",&num1,&num2);
	res=gcd(num1,num2);
	printf("\nGCD of %d and %d is : %d\n",num1,num2,res);
	return 0;
}
