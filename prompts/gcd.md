Define a function 'binary_gcd' that takes two unsigned integers 'numerator' and 'denominator' as arguments.
The function should return an unsigned integer representing the greatest common divisor of 'numerator' and 'denominator'.
Arguments:
- 'numerator': an unsigned integer representing the numerator
- 'denominator': an unsigned integer representing the denominator
Return Value:
- an unsigned integer representing the greatest common divisor of 'numerator' and 'denominator'
Impementation Details:
- If numerator is 0, return the denominator.
- If denominator is 0, return the numerator.
- If both numerator and denominator are even, return 2 times the binary_gcd of the numerator divided by 2 and the denominator divided by 2.
- If numerator is even and the denominator is odd, return the binary_gcd of the numerator divided by 2 and the denominator.
- If numerator is odd and the denominator is even, return the binary_gcd of the numerator and the denominator divided by 2.
- If both numerator and denominator are odd, return the binary_gcd of the absolute difference of numerator and denominator divided by 2 and the smaller of the two numbers.
- The function should be implemented using recursion.
Examples:
- binary_gcd(0, 0) returns 0
- binary_gcd(0, 1) returns 1
- binary_gcd(10, 5) returns 5
- binary_gcd(10, 0) returns 10