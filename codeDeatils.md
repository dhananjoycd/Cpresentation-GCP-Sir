Certainly! Let's break down the program to find a rectangle using asterisks in C into six parts:

**Part 1: Include necessary header files**
```c
#include <stdio.h>
```
In this part, we include the necessary header file `stdio.h` which provides input and output functions such as `printf` and `scanf`.

**Part 2: Declare variables for width and height**
```c
int main()
{
    int width, height;
```
In this part, we declare two variables `width` and `height` of type `int` to store the dimensions of the rectangle.

**Part 3: Get input from the user**
```c
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);
```
In this part, we prompt the user to enter the width and height of the rectangle. We use `printf` to display the messages and `scanf` to read the user input. The entered values are stored in the variables `width` and `height`.

**Part 4: Generate the rectangle using asterisks**
```c
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("*");
        }
        printf("\n");
    }
```
In this part, we use nested `for` loops to generate the rectangle shape using asterisks. The outer loop iterates over each row of the rectangle, controlled by the variable `i` which ranges from 0 to `height-1`. The inner loop iterates over each column of the rectangle, controlled by the variable `j` which ranges from 0 to `width-1`. Inside the inner loop, we print an asterisk (`*`) for each column.

After printing all the asterisks in a row, we move to the next line using `printf("\n")` to ensure each row is printed on a new line.

**Part 5: Return from the main function**
```c
    return 0;
}
```
In this part, we return 0 from the `main` function to indicate successful program execution.

**Part 6: Program execution**
The main function serves as the entry point for the program. When the program is executed, it executes the code within the `main` function. The user is prompted to enter the width and height of the rectangle, and the rectangle shape using asterisks is displayed based on the provided dimensions.

That's it! The program takes user input for the width and height, generates a rectangle using asterisks, and outputs the resulting shape.