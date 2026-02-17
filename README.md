
# C Program Error Analysis

## Overview
This document analyzes all syntax, logical, runtime, and semantic errors in the given C program that calculates the count and sum of prime numbers from an array.

---

## 1. Missing Semicolon

Error:
printf("Enter number of elements: ")

Correction:
printf("Enter number of elements: ");

---

## 2. Wrong scanf Usage

Error:
scanf("%d", n);

Correction:
scanf("%d", &n);

---

## 3. Wrong malloc Syntax

Error:
arr = (init*)malloc(n * sizeOf(float));

Issues:
- init* is invalid
- sizeOf should be sizeof
- float should be int

Correction:
arr = (int*)malloc(n * sizeof(int));

---

## 4. Wrong Return Value

Error:
return i;

Correction:
return 1;

---

## 5. Wrong for Loop Syntax

Error:
for(i = 0: i <= n: ++i);

Correction:
for(i = 0; i < n; i++)

---

## 6. Infinite Loop

Error:
for(i = 0; i < n; )

Correction:
for(i = 0; i < n; i++)

---

## 7. Case Sensitivity Error

Error:
isprime(arr[i])

Correction:
isPrime(arr[i])

---

## 8. Missing Semicolon

Error:
count++

Correction:
count++;

---

## 9. Wrong Operator

Error:
sum =+ arr[i];

Correction:
sum += arr[i];

---

## 10. Wrong Format Specifier

Error:
printf("Prime count = %f\n", count);

Correction:
printf("Prime count = %d\n", count);

---

## 11. Double Free

Error:
free(arr);
free(arr);

Correction:
free(arr);

---

## 12. Wrong Return Statement

Error:
return O;

Correction:
return 0;

---

## 13. Wrong Function Definition

Error:
int isPrime(int n);
{

Correction:
int isPrime(int n)
{

---

## 14. Missing Semicolon in Function

Error:
int i

Correction:
int i;

---

## 15. Assignment Instead of Comparison

Error:
if(n = 1)

Correction:
if(n == 1)

Better:
if(n <= 1)
    return 0;

---

## 16. Missing Return in Function

Correction:
return 1;

---

## 17. Function Prototype Placement

Should be declared before main():
int isPrime(int n);

---

## 18. Logical Error – 1 is Not Prime

Correction:
if(n <= 1)
    return 0;

---

## Total Errors Identified: 18+

Includes:
- Syntax errors
- Logical errors
- Runtime errors
- Memory allocation mistakes
- Case sensitivity issues
- Operator mistakes
