/1st switch case
#include<stdio.h>
#include<math.h>
int main(){
    int z;
    //taking input from user
    printf("1- A character is a vowel or consonant.\n");
    printf("2- A character is an alphabet or not.\n");
    printf("3- Ascii values of a character.\n");
    printf("4- A number is positive or negative.\n");
    printf("5- A number is even or odd.\n");
    printf("6- Swap two numbers without third variable.\n");
    printf("7- Area of a circle.\n");
    printf("8- Greatest of two numbers.\n");
    printf("9- Greatest of three numbers.\n"); 
    printf("10-Number of digits in an integer.\n");
    printf("11-Sum of digits of a number.\n");
    printf("12-Sum of N natural numbers.\n");
    printf("13-Sum of numbers in a given range.\n");
    printf("14-Reverse a given number.\n");
    printf("15-Factorial of a number.\n");
    printf("16-Fibonacci series up ten.\n");
    printf("17-Leap year or not.\n");
    printf("18-Prime number or not.\n");
    printf("19-Palindrome or not.\n");
    printf("20-Armstrong number or not.\n");
    printf("21-Strong number or not.\n");
    printf("22-Perfect number or not.\n");
    printf("23-Friendly pair or not (amicable or not).\n");
    printf("24-Add two fractions.\n");
    printf("25-Automorphic number or not.\n");
    printf("26-Harshad number or not.\n");
    printf("27-Abundant number or not.\n");
    printf("28-Power of a number.\n");
    printf("29-Factors of a number.\n");
    printf("30-Uppercase, Lowercase or special character.\n");
    printf("Enter the key of program which you want to run:\n");
    scanf("%d",&z);
    printf("Proccessing your order!\n");
    switch (z){
        case 1 :{
                char ex;
                scanf(" %c",&ex);
                if(ex=='a'||ex=='e'||ex=='i'||ex=='o'||ex=='u'||ex=='A'||ex=='E'||ex=='I'||ex=='O'||ex=='U')
                {
                    printf("This is a vowel");
                }
                else{
                    printf("This is consonant");
                }
                return 0;

                }
        case 2 :
                {    
                printf("Enter the Input:");
                //taking input
                char a;
                scanf(" %c",&a);
                //checking the input is alphabet or not
                if(a<='z'&&a>='a'|| a<='Z'&&a>='A'){
                    printf("is a Alphabet.");
                }
                else{
                    printf("is a NOT Alphabet.");
                }
                return(0);
                }  
        case 3 :
                {
                char ex;
                printf("Enter the Character:");
                //taking input of an alphabet
                scanf(" %c",&ex);
                printf("%d",ex);
                return 0;
                }
        case 4 :
                {
                int a;
                printf("Enter the number:");
                scanf("%d",&a);
                if(a<0){
                    printf("%d is a negative number.", a);
                }
                else if(a==0){
                    printf("%d is a zero.", a);
                }
                else {
                    printf("%d is a positive number.", a);
                }
                return 0;
                }        
        case 5 :{
                int a;
                printf("Enter the Input:");
                scanf("%d",&a);
                //checking the condition for even
                if(a%2==0){
                    printf("the number is even");
                }
                //checking the condition for odd
                else{
                    printf("the number is odd");
                }
                return 0 ;
                }
        case 6 :{
                int a,b;
                scanf("%d%d",&a,&b);
                //a=10,b=20    
                a=a+b;//a=30 (10+20)    
                b=a-b;//b=10 (30-20)    
                a=a-b;//a=20 (30-10)
                printf("%d,%d",a,b);
                return 0;
                }
        case 7 :{
                float r;
                //asking for input from user
                printf("Enter the radius of circle:");
                scanf("%f",&r);
                float area;
                //calculating area 
                area= 3.14*r*r;
                printf("%f",area);
                return 0;
                }           
        case 8 :{
                int a,b;
                printf("Enter the first number:");
                scanf("%d",&a);
                printf("Enter the second number:");
                scanf("%d",&b);
                if(a>b){
                    printf("%d is greater.",a);
                }
                else{
                    printf("%d is greater.",b);
                }
                return 0;
                }           
        case 9 :{
                //defining variables
                int a,b,c;
                //scaning variables
                printf("Enter the first number:");
                scanf("%d",&a);
                printf("Enter the second number:");
                scanf("%d",&b);
                printf("Enter the third number:");
                scanf("%d",&c);
                //conditions for checking numbers 
                if(a>c && a>b){
                    printf(" %d is Greater.",a);
                }
                else if(b>c && b>a){
                    printf(" %d is Greater.",b);
                }
                else if(c>a && c>b){
                    printf(" %d is Greater.",c);
                }
                return 0;
                }           
        case 10 :{
                long long int a;
                printf("Type the number(smaller than 10 digits):");  
                scanf("%lld",&a);
                
                //starting counlting the digits in number 
                int sum,i=1;
                while(a!=sum){
                    int b = pow(10,i);
                    sum = a % b;
                    i++;
                }
                //printing answers
                printf("Total numbers are %d",i-1);
                return(0);
                } break;
        case 11 :{
            int a;
            printf("Enter the number:");
            scanf("%d",&a);
            int i=0,sum=0;
            //implementing loop for calculating sum
            while(a!=0){
                int k= a % 10;
                sum += k;
                a = (a-k)/10;
                i++;
            }
            printf("The sum is:%d",sum);
        } break;
        case 12:{
            int a;
            printf("Enter number upto which you want sum:");
            scanf("%d",&a);
            int sum=0;
            for(int i=1;i<=a;i++){
                sum+=i;
            }
            printf("Answer is:%d",sum);
            return 0;
        } break;
        case 13:{
            printf("Enter the 'starting' digit of your range:");
            int a1;
            scanf("%d",&a1);
             printf("Enter the 'last' digit of your range:");
            int a2;
            scanf("%d",&a2);
            int sum=0;
            for(int i=1; ;i++){
                sum += a1;
                if(a1==a2){
                    break;
                }
                a1++;
            }
            printf("The sum is:%d",sum);
            return 0;
        } break;
        case 14:{
            //COUNTING NUMBER OF DIGITS
            int a;
            printf("Type the number:");
            scanf("%d",&a);
            int i=1,sum;
            while(a!=sum){
                int b = pow(10,i);
                sum = a % b;
                i++;
            }
            int c=i-1;//count
            printf("Total numbers are %d\n",c);
            int new =0;
            for(int j=1;j<=c;j++){
                int k=a % 10;
                a= (a)/ 10;
                int d= pow(10,c-j);
                //developing a new number i
                new += k * d;

            }
            printf("Reversed number is:%d",new);
            return 0;
        } break;
        case 15:{
            //factorial
            int a;
            scanf("%d",&a);
            int fact=1;
            for(int i=1;i<=a;i++){
                fact  = fact * i;
            }
            printf("Factorial of %d is:%d",a,fact);
            return 0;
            } break;
        case 16:{
            int a=0,b=1;
            int nextnum;
            //print first two numbers
            printf("0\n1\n");
            for(int i=1;i<=10;i++){
                nextnum = a+b;
                printf("%d\n",nextnum);
                a=b;
                b=nextnum;
            }
        } break;
        case 17:{
            printf("Enter the year:");
            int yr;
            scanf("%d",&yr);
            //condition for leap year
            if(yr%4==0){
                printf("%d is a leap year.",yr);
            }
            //condition for non-leap year
            else{
                printf("%d is NOT a leap year.",yr);
            }
            return 0;    
        } break;
        case 18:{
            int a;
            printf("Enter the number:");
            scanf("%d",&a);
            if(a==2){
                printf("This is a Prime number.");
            }
            else{
                for(int i=2;i<a ; i++){
                    if(a%i==0){
                    printf("This is not a prime number.\n%d",i);  
                    return 0;
                    }
                }
                printf("This is Prime.");
            }
            return 0;
        } break;
        case 19:{
            int a;
            printf("Enter the number:");
            scanf("%d",&a);
            int b=a;
            //starting counting the digits in number 
            int sum,j=1;
            while(a!=sum){
                int b = pow(10,j);
                sum = a % b;
                j++;
            }
            int i=0;
            int arr[j-1];
            while(a!=0){
                arr[i]= a % 10;
                a = (a-arr[i])/10;
                i++;
            }

            // checking the number is Palindrome or not.
            int found = 1;
            for(int i=0; i<j-1 ; i++){
                if(arr[i]!=arr[j-2-i]){
                    found=0;
                }
            }
            if (found){
                printf("%d is a Palindrome.",b);
            }
            else{
                printf("%d is NOT a Palindrome.",b);
            }
        } break;
        case 20:{
            int n,sum=0;
            printf("Enter the Number=");
            scanf("%d",&n);
            int b=n;
            while(n>0){
                int k=n%10;
                n=n/10;
                sum+=(k*k*k);
            }
            if(sum==b){
                printf("The number is Armstrong Number.");
            }
            else{
                printf("The number is NOT a Armstrong Number.");
            }
            return 0;
        } break;
        case 21:{
            int fact(int k){
            int ans=1;
            for(int i=1; i<=k; i++){
                ans=ans*i;
            }
            return ans;
        }

            int n,sum=0;
            printf("Enter the Number=");
            scanf("%d",&n);
            int b=n;
            while(n>0){
                int k=n%10;
                n=n/10;
                sum+=fact(k);
            }
            if(sum==b){
                printf("The number is Strong Number");
            }
            else{
                printf("The number is NOT a Strong Number");
            }
            return 0;
            } break;

        case 22:{
            void printArray(int arr[] , int size){
            //print an array 
            for ( int i=0 ;i<size ; i++){
                printf("%d",arr[i]);
                if(i<size-1){
                    printf(",");
                }
                else{
                    printf(".");
                }
                {
                    /* code */
                }

            }
            printf("\nPrinting done\n");
}       

            int a;
            printf("Enter the number.");
            scanf("%d",&a);
            int arr[a], j=0;
            for(int i=1; i<=a; i++){
                if(a%i==0){
                    arr[j]=i;
                    j++;
                }
            }
            printArray(arr,j);

            //checking the condition
            int sum=0;
            for(int i=0;i<j-1;i++){
                sum+= arr[i];
            }

            if(sum==a){
                printf("This is a Perfect Number.");
            }
            else{
                printf("This is NOT a Perfect Number.");
            }
            return 0;
        } break;
        case 23:{
            void printArray(int arr1[] , int size){
            //print an array 
            for ( int i=0 ;i<size ; i++){
                printf("%d",arr1[i]);
                if(i<size-1){
                    printf(",");
                }
                else{
                    printf(".");
                }
                {
                    /* code */
                }

            }
            printf("\nPrinting done\n");
        }

            int a,b;
            printf("Enter the numbers:");
            scanf("%d %d",&a,&b);
            //for 1st
            int arr1[a], j=0;
            for(int i=1; i<=a; i++){
                if(a%i==0){
                    arr1[j]=i;
                    j++;
                }
            }
            //for 2nd 
            int arr2[b],l=0;
            for(int k=1; k<=b; k++){
                if(b%k==0){
                    arr2[l]=k;
                    l++;
                }
            }
            printf("For 1st Number:");
            printArray(arr1,j);
            printf("For 2nd Number:");
            printArray(arr2,l);
            float sum1=0;
            for(int i=0;i<j-1;i++){
                sum1+= arr1[i];
            }
            float sum2=0;
            for(int k=0;k<l-1;k++){
                sum2+= arr2[k];
            }
            printf("%f\n",sum1);
            printf("%f\n",sum2);
            if((sum1/a)==(sum2/b)){
                printf("They are Friendly pair.");
            }
            else{
                printf("They are NOT a Friendly pair.");
            }
            return 0;
        } break;
        case 24:{
            //initialising variables
            int n1,n2,d1,d2;
            //taking input from user
            printf("Enter the 1st Numerator:");
            scanf("%d",&n1);
            printf("Enter the 1st denominator:");
            scanf("%d",&d1);
            printf("Enter the 2nd Numerator:");
            scanf("%d",&n2);
            printf("Enter the 2nd denominator:");
            scanf("%d",&d2);
            int x=(n1*d2)+(n2*d1),a;
            int y=(d1*d2);
            //applying GCD on x and y
            for(int i=1;i<=x && i<=y;i++){
                //condition for gcd
                if(x%i==0 && y%i==0){
                    a=i;
                }
            }
            //printing answer
            printf("%d/%d",x/a,y/a);
            return 0;
        } break;
        case 25:{
            //initialising the variables
            int n,count=1,temp;

            //to take user input
            printf("Enter the number:");
            scanf("%d",&n);
            //duplicating the number
            temp=n;
            //calculating the square of number
            int sq=n*n;
            //printing the square of number
            printf("%d",sq);
            //appling condition
            while(temp!=0){
                temp=temp/10;
                count= count*10;
            }
            if(sq%count==n){
                printf("\nIt is Automorphic number.");
            }
            else{
                printf("\nIt is NOT a Automorphic number.");
            }
            return 0;
        } break;
        case 26:{
            int n,sum=0;
            //taking the input
            printf("Enter the Number:");
            scanf("%d",&n);
            //duplicating the number
            int temp=n;
            //calculating the sum of digits
            while(n!=0){
                int k=n%10;
                n=n/10;
                sum+= k;
            }
            //pritning sum
            printf("the sum of digits is:%d\n",sum);
            //checking the condition
            if(temp%sum==0){

                printf("It is a Harshad Number.");
            }
            else {
                printf("It is NOT Harshad Number.");
            }
        } break;
        case 27:{
            int n,sum=0;
            //taking input from user
            printf("Enter the number:");
            scanf("%d",&n);
            for(int i=1;i<n;i++){
                if(n%i==0){
                    sum+=i;
                }
            }
            if(n<sum){
                printf("%d is a Abundant Number.",n);
            }
            else{
                printf("%d is NOT a Abundant Number.",n);
            }
            return 0;
        } break;
        case 28:{
            int n,p,ans=1;
            printf("Enter the number:");
            scanf("%d",&n);
                printf("Enter the power:");
            scanf("%d",&p);

            while(p!=0){
                ans *= n;
                p--;
            }
            printf("Answer is %d",ans);
            return 0;
            } break;
        case 29:{
            void printArray(int arr[] , int size){
            //print an array 
            for ( int i=0 ;i<size ; i++){
                printf("%d,",arr[i]);
            }
            printf("\nPrinting done");
}

                    int a;
                    printf("Enter the number.");
                    scanf("%d",&a);
                    int arr[a], j=0;
                    for(int i=1; i<=a; i++){
                        if(a%i==0){
                            arr[j]=i;
                            j++;
                        }
                    }
                    printf("The Number of factors are:%d\n",j);
                    printArray(arr,j);
        } break;
        case 30:{
                    char n;
                    printf("Enter the character:");
                    scanf(" %c",&n);
                    if('A'<=n<='Z'){
                        printf("The character is of Uppercase.");
                    }
                    else if('a'<=n<='z'){
                        printf("The character is of Lowercase.");
                    }
                    return 0;
        } break;
        default: {
                printf("Enter a valid Input!");
        }
    
    }
    
    
}
