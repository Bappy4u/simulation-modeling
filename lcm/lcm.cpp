#include <stdio.h>


// Random number generation function
int nextRandomInt(int x, int a, int c, int m)
{
    int xi = (a*x + c) % m;
    return xi;
}

int main()
{
    int n, a, c, x, m;
    
    printf("Enter value of x(seed value): ");
    //value of X seed
    scanf("%d", &x);
    printf("Enter value of a: ");
    // value of a
    scanf("%d", &a);
    printf("Enter value of c: ");
    // value of c
    scanf("%d", &c);
    printf("Enter value of m: ");
    // value of m
    scanf("%d", &m);
    printf("Enter total random number to be generated: ");
    // numbers of the random number
    scanf("%d", &n);

    int i;
    for(i=0; i<n; i++) {
    	// nextRandomInt() function will return a random integer value
        x = nextRandomInt(x, a, c, m);
        
        // it will make the LCM as a floating number
        double r = (double)x/(double)m;
        printf("%f\n", r);
    }
	printf("Thank you, Najmul Hossain, CSE1802014027, 14A");
    return 0;
}
