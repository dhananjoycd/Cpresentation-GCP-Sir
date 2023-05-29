Certainly! Let's go through the code line by line and explain its functionality along with the corresponding output.

```c
#include <stdio.h>
```
This line includes the necessary header file `stdio.h` which provides input/output functions.

```c
int main() {
    int w, h;
```
The `main` function serves as the entry point of the program. It declares two variables `w` and `h` to store the dimensions of the rectangle.

```c
    printf("Enter the w of the rectangle: ");
    scanf("%d", &w);
```
This line prints a message asking the user to enter the w of the rectangle. Then, the `scanf` function reads the integer input from the user and stores it in the `w` variable.

```c
    printf("Enter the h of the rectangle: ");
    scanf("%d", &h);
```
Similarly, this line prompts the user to enter the h of the rectangle. The `scanf` function reads the input and stores it in the `h` variable.

```c
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i == 0 || i == h - 1 || j == 0 || j == w - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
```
These nested loops are used to iterate over each row and column of the rectangle. The outer loop controls the rows, while the inner loop controls the columns.

Inside the loops, there is an `if-else` condition to determine whether to print an asterisk (`*`) or a space (` `). 

- If the current row (`i`) is the first row (`i == 0`) or the last row (`i == h - 1`), or if the current column (`j`) is the first column (`j == 0`) or the last column (`j == w - 1`), it prints an asterisk using `printf("*")`.
- Otherwise, for positions inside the rectangle, it prints a space using `printf(" ")`.

After printing each row, the `printf("\n")` statement is used to move to the next line, ensuring that the next row is printed on a new line.

```c
    return 0;
}
```
Finally, the `return 0` statement indicates the successful execution of the program and it exits.

For example, let's consider the following inputs:
```
Enter the w of the rectangle: 6
Enter the h of the rectangle: 4
```
The corresponding output will be:
```
******
*    *
*    *
******
```
In this output, the rectangle has a w of 6 and a h of 4. The asterisks represent the border of the rectangle, while the spaces represent the interior of the rectangle.