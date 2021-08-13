# Prime_num
Numbers that are divisible by 1 and themselves only are called prime numbers. For example, 13,29,2, etc. This program uses a procedure called sieve of Erathosthenes to find out the prime numbers between 1 and 100. It then prints them. Below is a picture of the sieve:

![sieve_of_Eratosthenes](https://i.stack.imgur.com/bOiQj.png)

In this procedure, we start at 2 and then procede to cross out every multiple of 2. We move to the next non-zero number (3) and cross-out its multiples. We repeat this process of moving to the next non-zero number and crossing out its multiples until we run out of numbers to go to.
This C program accomplishes the same task. The final output is prime numbers printed on different lines. Here however, is an output that resembles the sieve from the pic above (I forgot to remove 1 at this stage of the project so I crossed it out with image editor, pardon the mistake...),

<img src="https://i.imgur.com/QwioemM.png" width="60%" height="60%">
