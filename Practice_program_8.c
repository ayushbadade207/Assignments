
int main() {
    // Declare two variables
    int number1;
    int number2;
    int sum;

    /*
       Ask the user to enter
       two numbers
    */
    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    // Calculate the sum
    sum = number1 + number2;

    // Display the result
    printf("Sum = %d\n", sum);

    return 0;
}