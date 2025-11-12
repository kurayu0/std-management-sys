//Enhance your coding skills, start writing your code here!!
//Enhance your coding skills, start writing your code here!!
#include <stdio.h>
int main(){
  int n1,n2;
  scanf("%d %d\n",&n1,&n2);
  char op;
  scanf("%c",&op);
  printf("Entered values of\n");
  printf("n1 = %d\n",n1);
  printf("n2 = %d\n",n2);
  printf("Enter the Operator [ +, -, *, /, %] :\n");
  printf("Entered operator = %c\n",op);
  
   if(op=='+'){
    printf("Addition: %d + %d = %d ",n1,n2,n1+n2);
  }
  else if(op=='-'){
  printf("Subtraction: %d - %d = %d",n1,n2,n1-n2);}
  else if (op=="*"){
    printf("Multiplication: %d * %d = %d",n1,n2,n1*n2);}
  else if (op=="/"){
    printf("Division: %d / %d = %d",n1,n2,n1/n2);}
  else if (op=="%"){
    printf("Modulus: %d % %d = %d",n1,n2,n1%n2);
  }
  }
///




//Enhance your coding skills, start writing your code here!!
#include <stdio.h>
int main(){
  int n,fac=1;
  scanf("%d",&n);
  if(n>=0){
   for(int i=1; i<=n;i++){
    fac*=i;}
  printf("Factorial of %d = %d",n,fac);
}

}