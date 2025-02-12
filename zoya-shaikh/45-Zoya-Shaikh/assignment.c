/*/*
  Roll No.:45
  Student Name: Zoya shaikh
  Program Title:To find the largest number and subtract with there sum

  Task Given By:
    - Roll No. of Assignee:13
    - Assignee Name: Shaikh Firdaus 
*/

#include <stdio.h>

int main() {
    int n, i, num;
    int largest, sum = 0;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if there are elements to process
    if (n <= 0) {
        printf("Please enter a positive number of elements.\n");
        return 1;  // Exit program if the input is invalid
    }

    // Input the first number and initialize largest
    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = num;  // Set the first number as the largest
    sum += num;     // Add it to the sum

    // Loop through the remaining numbers
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        sum += num;  // Add the current number to sum

        // Check if current number is larger than the largest so far
        if (num > largest) {
            largest = num;  // Update largest if the current number is larger
        }
    }

    // Calculate the result (largest number - sum of numbers)
    int result = largest - sum;

    // Display the result
    printf("Largest number: %d\n", largest);
    printf("Sum of numbers: %d\n", sum);
    printf("Result (largest - sum): %d\n", result);

    return 0;
}
