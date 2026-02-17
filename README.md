# C Program Error Analysis

## Total Errors: 22

This document lists all syntax, logical, and structural errors found in
the given C program.

------------------------------------------------------------------------

## Error List

### 1. Missing Semicolon

``` c
printf("Enter number of elements: ")
```

### 2. Missing `&` in scanf

``` c
scanf("%d", n);
```

### 3. Wrong Type Casting

``` c
arr = (init*)malloc(...);
```

### 4. Wrong `sizeof` Usage

``` c
sizeOf(float)
```

-   Incorrect spelling (`sizeOf`)
-   Allocating `float` for `int*`

### 5. Wrong Return Value

``` c
return i;
```

### 6. Incorrect `for` Loop Syntax

``` c
for(i = 0: i <= n: ++i);
```

-   `:` used instead of `;`

### 7. Extra Semicolon After Loop

``` c
for(...);
```

### 8. Incorrect Loop Condition

``` c
i <= n
```

Should be `< n`

### 9. Function Name Mismatch

``` c
isprime()
```

Defined as:

``` c
isPrime()
```

### 10. Missing Semicolon

``` c
count++
```

### 11. Wrong Operator

``` c
sum =+ arr[i];
```

Should be:

``` c
sum += arr[i];
```

### 12. Infinite Loop

``` c
for(i = 0; i < n; )
```

Missing increment.

### 13. Wrong printf Format Specifier

``` c
printf("Prime count = %f\n", count);
```

Should use `%d`

### 14. Double Free

``` c
free(arr);
free(arr);
```

### 15. Wrong Return Value

``` c
return O;
```

Should be:

``` c
return 0;
```

### 16. Extra Semicolon in Function Declaration

``` c
int isPrime(int n);
```

### 17. Missing Semicolon

``` c
int i
```

### 18. Assignment Instead of Comparison

``` c
if(n = 1)
```

Should be:

``` c
if(n == 1)
```

### 19. Incorrect Prime Logic

``` c
if(n == 1)
    return 1;
```

1 is not prime.

### 20. Missing Return Statement

`isPrime()` does not return a value in all cases.

### 21. Function Used Before Proper Prototype

No correct function declaration before `main()`.

### 22. Memory Allocation Type Mismatch

Allocating `float` size for an `int*` pointer.

------------------------------------------------------------------------

## Summary

-   Syntax Errors\
-   Logical Errors\
-   Memory Errors\
-   Format Specifier Errors\
-   Loop Structure Errors

Total: **22 Errors**
