#include <stdio.h>
void hollowrectangle(int n){
for (int i =1; i<=n ; i++){
for (int j=1; j<=n ; j++){
if(i==1||i==n||j==1||j==n){
printf("*");
}
else{
printf(" ");
}
}
} 
}

void solidrectangle(int n){
for (int i=1; i<=n ; i++){
for (int j=1; j<=n ; j++){
printf("*");
}
}
}

void pyramid(int n){
for (int i =1; i<=n ; i++){

for (int j=n-i; j>=0 ; j--){
printf(" ");}
for (int j=1; j<=i ; j++){
printf("* ");

}
printf("\n");} 
}

void numberpyramid(int n){
for (int i =1; i<=n ; i++){

for (int j=n-i; j>=0 ; j--){
printf(" ");}
for (int j=1; j<=i ; j++){
printf("%d ", i);

}
printf("\n");} 
}

void palindromicpyramid(int n){

for (int i =1; i<=n; i++){
for (int j=n-i;j>=0; j--){
	printf(" ");
 }
for(int j=i; j>=1; j--){
   printf("%d",j);
}
for(int j=2; j<=i; j++){
	 printf("%d",j);
}
printf("\n");
			} 
}
void diamond(int n ){	
for (int i=1; i<=n ; i++){
 	for (int j=n-i; j>=0; j--){
	  printf(" ");
		}
		for (int j=1; j<=i; j++){
      printf("*");
		 }
		 for (int j=2; j<=i ; j++){
		 printf("*");
		 }
		 printf("\n");
	}
	for (int i=n; i>=1 ; i--){
 	for (int j=n-i; j>=0; j--){
	  printf(" ");
		}
		for (int j=1; j<=i; j++){
      printf("*");
		 }
		 for (int j=2; j<=i ; j++){
		 printf("*");
		 }
		 printf("\n");
	}
}
void numberdiamond(int n ){	
for (int i=1; i<=n ; i++){
 	for (int j=n-i; j>=0; j--){
	  printf(" ");
		}
		for (int j=1; j<=i; j++){
      printf("%d",i);
		 }
		 for (int j=2; j<=i ; j++){
		 printf("%d",i);
		 }
		 printf("\n");
	}
	for (int i=n; i>=1 ; i--){
 	for (int j=n-i; j>=0; j--){
	  printf(" ");
		}
		for (int j=1; j<=i; j++){
      printf("%d",i);
		 }
		 for (int j=2; j<=i ; j++){
		 printf("%d",i);
		 }
		 printf("\n");
	}
}
void floydstriangle(int n){
int count =1;
for (int i=1; i<=n; i++){
 for (int j=1; j<=i ; j++){
  printf("%d ",count);
	count++;
	}printf("\n");
 }
 }

void main(){

int x;
printf("1- hollowrectangle  \n");
printf("2- solidrectangle \n");
printf("3- pyramid \n");
printf("4- numberpyramid \n");
printf("5- palindromicpyramid \n");
printf("6- diamond \n");
printf("7- numberdiamond \n");
printf("8- floydstriangle \n");

scanf("%d",&x);

switch(x){

   case 1:
   printf("Enter the number of lines: \n");
   int n;
   scanf("%d",&n);
           	 hollowrectangle(n);
           	 break;
   case 2:
   printf("Enter the number of lines: \n");
   int m;
   scanf("%d",&m);
   		 solidrectangle(m);
 		 break;
   case 3:
  printf("Enter the number of lines:\n");
  int o;
  scanf("%d",&o);
   		 pyramid(o);
   		 break;
   case 4:
	 printf("Enter the number of lines:\n");
  int p;
  scanf("%d",&p);
   		 numberpyramid(p);
        break;
	case 5: 
	printf("Enter the number of lines:\n");
  int q;
  scanf("%d",&q);
	palindromicpyramid(q);
	break;
	case 6:
	printf("Enter the number of lines:\n");
	int r;
  scanf("%d",&r);
	diamond(r);
	break;
	case 7:
	printf("Enter the number of lines:\n");
	int s;
  scanf("%d",&s);
	numberdiamond(s);
	break;
	case 8:
  printf("Enter the number of lines:\n");
	int t;
  scanf("%d",&t);
	floydstriangle(t);
	break;

	   default: 	 printf("error");
  		}

 }
