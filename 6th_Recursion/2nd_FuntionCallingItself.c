📘 Notes: Recursion (Factorial Example)
Function Calling Itself

Ek function banate hain jiska naam factorial hai.

Ye function ek int return karega aur ek number (n) lega.

int factorial(int n) {
    if(n == 1) {
        return 1;  // base case
    }
    return n * factorial(n - 1);  // recursive step
}

Flow of Execution (Step by Step)

Main function se hum call karte hain:
factorial(5)

Ab factorial(5) ko apna exact answer nahi pata,
usko sirf itna pata hai → 5 * factorial(4)

factorial(4) ko bhi apna exact answer nahi pata,
usko sirf itna pata hai → 4 * factorial(3)

factorial(3) bolta hai → 3 * factorial(2)

factorial(2) bolta hai → 2 * factorial(1)

Jab factorial(1) call hota hai → ye base case hai.
Isko pata hai ki answer 1 hai.

Returning Back (Value Passing)

factorial(1) returns 1

factorial(2) bolta hai: 2 * 1 = 2 → return 2

factorial(3) bolta hai: 3 * 2 = 6 → return 6

factorial(4) bolta hai: 4 * 6 = 24 → return 24

factorial(5) bolta hai: 5 * 24 = 120 → return 120

Finally, main function ko result milta hai: 120.

Key Idea

Pehle recursion niche jaata hai (breaking problem into smaller ones).

Fir base case milta hai → wahi se wapas values return hoti hain.

Ye process ko bolte hain recursive call stack.

👉 Is tarah ek simple factorial problem ko recursion se solve kiya jaata hai.