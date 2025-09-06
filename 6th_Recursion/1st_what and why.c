Factorial and Loops

In the lecture on for loops, factorial calculation was explained.

Factorial of a number (n!) = multiply all numbers from n down to 1.

Example: 5! = 5 × 4 × 3 × 2 × 1 = 120

Printing Factorials

Example factorials:

1! = 1

2! = 2 × 1 = 2

3! = 3 × 2 × 1 = 6

4! = 4 × 3 × 2 × 1 = 24

5! = 5 × 4 × 3 × 2 × 1 = 120

Important Observation

Look carefully:

5! = 5 × (4 × 3 × 2 × 1) → 5! = 5 × 4!

4! = 4 × (3 × 2 × 1) → 4! = 4 × 3!

3! = 3 × 2!

In general:

n! = n × (n-1)!

Recurrence Relation

If one result is calculated using the previous result, it forms a recurrence relation.

Here: n! = n × (n-1)! is the recurrence relation.

This is a very important observation because it avoids recalculating everything from the start.

Connection to Recursion

If a function can call itself, we can use this recurrence relation in programming.

Example: A factorial function can be written where factorial(n) calls factorial(n-1).

Thus, recursion is a natural way to express factorial.