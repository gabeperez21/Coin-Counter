# Coin-Counter Quiz by Gabriel Perez

This program was used for a quiz in my Intro to Computer Science class. For the quiz, we had to follow specific directions from our
professor to build an entire program using her instructions in an hour.

This program runs a total count and money value of any coins input into the program. Valid coins include (P)ennies, (D)imes, (N)ickels,
(Q)uarters, and (H)alf-Dollars. The user will only need to input the first letter of each coin. To input a penny for example, the user will enter
a p or P.

The value of a penny is 1c, a nickel is 5c,a dime is 10c, a quarter is 25c and a half-dollar is 50c. The program will use these values
to add up the total of each coin inputted into the program.

This program will ask the user to input a letter. If a digit or special character is entered instead, the user will get an error to input
a letter and try again.

Once the user inputs a letter, the program will use an off-set to change any lower case letters into capital letters. If a valid letter for
a coin is inputted, that coin will be added to the total. For example, if the user enters a q or Q, a quarter or 25c will be added to the 
running total.

If an invalid letter is entered like 'A' which does not belong to a coin, the program will accept the letter and add a value of 0 to the total.
