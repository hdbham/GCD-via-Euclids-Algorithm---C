#include <stdio.h>

void GCDLCM(int n, int m);
void isPrime(int x);

int main() {
    int i, m, n, gcd, lcm, c = 0; /* given numbers */
    
    printf("\nHunter Burningham / Computational Structures CS2130 / Fall 2021\nThis program reads in two integers and determines if they are prime. It then computes the greatest common divisor of the two integers using Euclid's Algorithm.\n\n");

    //gets input
    printf("Enter the first integer: ");
    scanf ("%d", &m);
    printf("Enter the first integer: ");
    scanf ("%d", &n);

    printf("\nResults:\n");

isPrime(m); // Determine primeness of first integer
isPrime(n); // Determine primeness of second integer
GCDLCM(n,m); // Determines GCD and LCM of first and second integer
}


void isPrime(x){
int i, p = 1; //p (prime) is assumed until set otherwise

  for (i = 2; i <= x / 2; ++i) { // check value up to the square root
    // check nonprime 
    if (x % i == 0) {
      p = 0;
      break;
    }
  }

  if (x == 1) { //check if 1, if 1 then still not prime
    printf("1 is not prime\n");
  } 
  else {
    if (p == 1) 
      printf("%d is a prime number.\n", x);
    else
      printf("%d is not a prime number.\n", x);
  }  
}

void GCDLCM(n, m){
    int gcd, lcm;
    for (int i = 1; i <= m && i <= n; ++i) {
        if (m % i == 0 && n % i == 0) // Determines GCD of M & N using Eucilids Algorithm
            gcd = i;
    }
    lcm = (m * n) / gcd; //Finds LCM using GCD

    //prints GCD AND LCM 
    printf("The GCD(%d, %d) is %d.\n", m, n, gcd); 
    printf("The LCM(%d, %d) is %d.", m, n, lcm);
}
    
