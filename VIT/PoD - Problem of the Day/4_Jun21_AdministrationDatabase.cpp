/*
Administration Database
The world is currently battling with the global pandemic of COVID-19. 

Doctors are handling patients and researchers are too working tirelessly. Hence, a committee was given the task of storing all the information received about mutants of SARS-CoV-2 from all over the world into a common database. 

The committee gave a unique Identification number (UIN) to each mutant of the SARS-CoV-2

Properties of UIN:
- UIN should be at least a 3-Digit Number (>99) 
- UIN should be a number such that if broken into all possible permutations, then the product of any permutations equals UIN

Example: 
*Not all Permutations are listed here, but one Permutation product would equal UIN.

 
For the Even UIN, the Permutations to be considered are as follows:
Even Digit UIN - 1395
13 * 95 = 1235
15 * 93 = 1395
15 * 39 = 585


For the Odd UIN, the Permutations to be considered are as follows:
Odd Digit UIN - 688
68 * 8 = 544
6 * 88 = 528
86 * 8 = 688


Since, Multiple Persons are involved in managing the database, hence there were high chances of errors. Write a program to identify the correct category of a mutant of SARS-CoV-2.

Category:
Verified Mutant - If the Mutant satisfies all the properties of UIN and has even number of digits . For Ex. 1395 is a Verified Mutant.

Unverified Mutant - If the Mutant satisfies all the properties of UIN and has odd number of digits . For Ex. 688 is a Unverified Mutant.

Invalid Mutant - If Mutant entered, doesn’t satisfy all (or some) of the properties of UIN. 

Input Format
First line contains the Unique Identification Number (UIN), N

Output Format
PRINT  “Verified Mutant” or “Unverified Mutant” or “Invalid Mutant” (without quotes), based on the given UIN number.
*/
