#include <stdio.h> //Includes the standard input output library functions.
#include <stdlib.h>
#define mizan main //Define main method with another name

int mizan()
{
   /*
   Fibonacci Series in C: In case of fibonacci series, next number is the sum of previous two numbers for
   example 0, 1, 1, 2, 3, 5, 8, 13, 21 etc. The first two numbers of fibonacci series are 0 and 1.
   */
   //generateFibonacciSeries();

   /*
   Prime number in C: Prime number is a number that is greater than 1 and divided by 1 or itself.
   In other words, prime numbers can't be divided by other numbers than itself or 1.
   */
   //findPrimeNumber();

   /*
   Palindrome number in c: A palindrome number is a number that is same after reverse.
   For example 121, 34543, 343, 131, 48984 are the palindrome numbers.
   */
    //findPalindrimNumber();

    /*
    Factorial Program in C: Factorial of n is the product of all positive descending integers.
    Factorial of n is denoted by n!
    */
    //findFactorialNumber();

    /*
    Armstrong number is a number that is equal to the sum of cubes of its digits.
    For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
    */
    //findArmstongNumber();

    /*
    Sum Of All Digit from number
    */
    //sumOfAllDigit();

    /*
    Reverse Number
    */
    //reverseNumber();

    /*
    Print Without Semicolon
    */
    //printWithoutSemicolon();

    /*
    Matrix multiplication
    */
    //multiplyMatrix();

    /*
    Decimal to Binary Conversion
    */
    //convertDecimalToBinary();

    /*
    Alphabet Triangle
    */
    //printAlphabetTriangle();


    /*
    Number Triangle
    */
    //printNumberTriangle();


    /*
    Fibonacci Triangle
    */
    //generateFibonacciTriangle();

    /*
    Number in Characters
    */
    convertNumberInCharacters();

    /*
    The return 0 statement, returns execution status to the OS.
    The 0 value is used for successful execution and 1 for unsuccessful execution.
    */
    return 0;
}

//FibonacciSeries
void generateFibonacciSeries(){
    int n1=0,n2=1,n3=0,i,range;
    printf("Please give a calculation range: \n");
    scanf("%d",&range);
    printf("%d %d ",n1,n2);
    for(i=0;i<=range;i++){
        n3 = n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}

//Prime Number Calculation
void findPrimeNumber(){
    int number,i,temp=0;
    printf("Please give a number: \n");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        if(number%i == 0){
            temp++;
        }
    }
    if(temp>2){
        printf("%d is not prime number\n",number);
    }else{
        printf("%d is prime number\n",number);
    }
}

//Palindrome number
void findPalindrimNumber(){
    int number=0,remainder=0,sum=0,temp=0;
    printf("Please give a number: \n");
    scanf("%d",&number);
    temp = number;
    while(number>0){
        remainder = number%10;
        sum = (sum*10)+remainder;
        number = number/10;
    }
    if(sum==temp){
        printf("%d is Palindrome number\n",temp);
    }
    else{
        printf("%d is not Palindrome number\n",temp);
    }
}

//Factorial Number calculate
void findFactorialNumber(){
    int number,i,fact = 1;
    printf("Please give a number: \n");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        fact = fact*i;
    }
    printf("Factorial of %d is: %d\n",number,fact);

}

//Armstrong number
void findArmstongNumber(){
    int n,r,sum=0,temp;
    printf("Enter the number=");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    printf("%d is armstrong  number \n",temp);
    else
    printf("%d is not armstrong number\n",temp);


}

//Sum of digit
void sumOfAllDigit(){
    int n,sum=0,m;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("Sum is=%d",sum);
}

//Reverse number
void reverseNumber(){
    int n, reverse=0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
       rem=n%10;
       reverse=reverse*10+rem;
       n/=10;
    }
    printf("Reversed Number: %d",reverse);
}

//Print Without Semicolon
void printWithoutSemicolon(){
    if(printf("hello world")){}
}

//Matrix multiplication
void multiplyMatrix(){
    int a[10][10],b[10][10];
    int r,c;
    int i,j,k;
    int result[10][10];

    printf("Enter the number of row=");
    scanf("%d",&r);
    printf("Enter the number of column=");
    scanf("%d",&c);

    printf("Enter the first matrix element=\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix element=\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("Multiply of the matrix=\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            result[i][j]=0;
            for(k=0;k<c;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    //For printing result
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}


//Decimal to Binary: convert any decimal number (base-10 (0 to 9)) into binary number(base-2 (0 or 1)) by c program.
void convertDecimalToBinary(){
    int a[10],n,i;
    printf("Enter the number to convert: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("\nBinary of Given Number is=");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}


//Alphabet Triangle
void printAlphabetTriangle(){
    int ch=65;
    int i,j,k,m;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%c",ch++);
            ch--;
        for(m=1;m<i;m++)
            printf("%c",--ch);
        printf("\n");
        ch=65;
    }
}


//Number Triangle
void printNumberTriangle(){
    int i,j,k,l,n;
    printf("enter the range=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(l=i-1;l>=1;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}


//Fibonacci Triangle
void generateFibonacciTriangle(){
    int a=0,b=1,i,c,n,j;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=0;
        b=1;
        printf("%d\t",b);
        for(j=1;j<i;j++)
        {
            c=a+b;
            printf("%d\t",c);
            a=b;
            b=c;

        }
        printf("\n");
    }
}


//Number in Characters
void convertNumberInCharacters(){
    long int n,sum=0,r;
    printf("enter the number=");
    scanf("%ld",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=sum;
    while(n>0)
    {
        r=n%10;
        switch(r)
        {
            case 1:
            printf("one ");
            break;
            case 2:
            printf("two ");
            break;
            case 3:
            printf("three ");
            break;
            case 4:
            printf("four ");
            break;
            case 5:
            printf("five ");
            break;
            case 6:
            printf("six ");
            break;
            case 7:
            printf("seven ");
            break;
            case 8:
            printf("eight ");
            break;
            case 9:
            printf("nine ");
            break;
            case 0:
            printf("zero ");
            break;
            default:
            printf("tttt");
            break;
        }
        n=n/10;
    }
}
