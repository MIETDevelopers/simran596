#nclude<stdio.h> // Pre-Processive to include standard input and output funtions header file
long int multiplyNumbers(int n); // Recursion
int main() { // Start of Body 
    int n; // Variable  Declaration
    printf("Enter a positive integer: "); // taking Input
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n)); // Printing Output 
    return 0;
}

long int multiplyNumbers(int n) { 
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
