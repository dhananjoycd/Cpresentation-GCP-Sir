# For Loop Details for w=5 and h=5

Explanation:

1. The code prompts the user to enter the width and height of the rectangle.
2. In this case, `w = 5` and `h = 5`.
3. The outer loop `for (int i = 0; i < h; i++)` runs from `i = 0` to `i = h - 1`, which means it iterates 5 times since `h = 5`.
4. The inner loop `for (int j = 0; j < w; j++)` runs from `j = 0` to `j = w - 1`, which means it also iterates 5 times since `w = 5`.
5. Inside the inner loop, there is an `if` condition that checks if the current position `(i, j)` is on the boundary of the rectangle.
   - If it is on the boundary (top, bottom, left, or right), it prints an asterisk (`*`) using `printf("*")`.
   - Otherwise, it prints a space (` `) using `printf(" ")`.
6. After the inner loop finishes, a newline character (`\n`) is printed using `printf("\n")` to move to the next line.
7. The outer loop continues to the next iteration, and the process repeats until the outer loop finishes.
8. The result is a rectangle printed with asterisks (`*`) on the boundary and spaces (` `) inside.

In this case, the resulting rectangle has a width of 5 and a height of 5, and it looks like this:

```
*****
*   *
*   *
*   *
*****
```

The asterisks form the boundary of the rectangle, and the spaces create the interior of the rectangle.