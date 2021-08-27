# KM42BESD06 Burgula Shivaji  - Lab Assignments Repo.

## C programming 

### Functions2

##### Date 29-08-2021
    
    1)  Write a function ,that can take two integers, swap their values and print their new values.return type should be void.
    2)  Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written above.return type should be void.
        PrintAllPrimes - return type is void. Should use IsPrime() function from #3
    3   )Write a function that takes an integer parameter and prints its multiplication table.return type should be void.
    4)  Write a function to accept a date and return 1 if the date is valid. 0 otherwise.
    5)  Write a program to take input of month, year, total salary and number of LOP days as input and calculate the salary of an employee.
            eg.,
            input : month: 1 , year: 2019 , total salary: 10000, lops : 4
            net salary : 8709/-
            (Hint: Calculate one day salary, multiply with number of lops, subtract from total salary)
    6)  Write a function that takes an integer as input and returns the reverse of the integer as output.
         print the reverse number in main function.
    7)  Write a function that takes an integer as input and returns the number of digits as output. Use do while loop.
        return 1 if the input is 0. should return the count for negative numbers also.
    8)  Write a program to read roll number and marks of 10 students in 3 subjects.
            The valid range for roll numbers is
            1000-9999, if the roll number entered is not in this range, the user should be asked to enter again.
            Calculate total marks of only those students who get more than or equal to 40 marks in each subject.
            Count the number of students whose total is more than 200.
            Print the roll number of the student who gets the highest total.
    9)  Write a function to take the input as number of terms, and return the sum of the following series upto the given number of terms:
            eg., input number of terms: 4
            output : 1 + 11 + 111 + 1111



## Functions

##### Date 27-08-2021

        1)  Write a function that takes principle, rate of interest and time in months as input arguments, and returns the total amount to be repayed, after calculation of simple interest.
        
        2)  Modify the calculator program - with functions ,Add(),Sub(),Mul(),Div(),Mod(). Each function should take the inputs as parameters and return the result as output.
                Hint: int add(int , int); 
                int sub (int, int);
        
        3)  write a function that can take an integer as input and return 1, if the number is prime number and 0 if it is not prime and print appropriate output message.
             return type is integer.
                IsPrime - returns int (0,1)
        
        4)  Write a function to determine if a character is alphanumeric or not. 
                Hint: int fun_alpha_num(char c)
        
        5)  Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.
        
        6)  Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.
            
        7)  Write a function to accept two dates as input arguments, and return 1 if the first date is older, 0 if the second date is older. print appropriate message in main function.
        
        8)  Write a function that accepts a month and year as input, and returns the number of days of the month as output. Print the number of days in a given month and year.
        
        9)  Write a function to accept a character as input, return the upper case character, if the given character is a lower case alphabet, otherwise return the character as it is.
            char ToUpper(char );
        
        10) Write a function to return the product of two numbers without using * operator.


## loops

##### Date 24-08-2021

    1)  Write a program to find the reverse of an integer.

        eg., input :453
        output: 354 

    2)  Print the following pattern using while and for loops in a single program:
            input: n=5
            output:
            *
            * *
            * * *
            * * * *
            * * * * *

        print the following patterns using loops( while/for) for a given input number n

    3) 
        * * * * *
        * * * *
        * * *
        * *
        *

    4)
        1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5

    5)
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5

    6)
        1
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1

    7)
        5
        4 4
        3 3 3
        2 2 2 2
        1 1 1 1 1

    8)
        5
        5 4
        5 4 3
        5 4 3 2
        5 4 3 2 1

    9)
        1
        2   3
        4   5   6
        7   8   9   10
        11  12  13  14  15

    10)
    
                  *
                * *
              * * *
            * * * *
          * * * * *
          
          
### While loop

##### Date 21-08-2021
        1)Write a program to print all numbers from 1 to n.
        
        2)Write a program to print all odd numbers and even numbers from m to n(both in same program, one after the other).
        
        3)"Write a program to input n numbers and print the largest and smallest numbers out of them.
        
                Eg., 3,23,56,34,78,45,26,90,68,77
                Biggest Number is 90
                Smallest Number is 3"
        
        4)"Write a program to input a number and count the digits in it.
                Eg. 
                0 - number of digits 1
                12 – number of digits 2
                155 – number of digits 3"
        
        5)Modify the calculator program to perform the operations continuously until the user chooses not to continue further.
        
        6)"Modify the Calculator Program to perform multiplication, Division, and modulus Operations
        With out using the symbls *,/ and % or any library functions related to these operations"
        
        7)Write a program to find out if an integer entered by a user is a prime number or not.
        
        8)"Write a program to find the factorial of a given number.
                N! = n * n-1 * n-2 * …. 2 * 1"
        9)"Write a program to print the first n Fibonacci numbers.
        
                Eg., First 8 Fibonacci numbers are :
                1  1  2  3  5  8  13  21 "
                
        10)Write a program to find the value a given number raised to a given positive integer power.
        read to integers and find the power of the first integer raised to the second integer.
                eg., 3  4
                out: 81
        


## Switch

#### 18-08-2021

        1)C program to check whether a character is vowel or consonant using switch statement
        2)Write the calculator program using switch case statement.
        3)C program to check whether a number is odd or even using switch statement
        4)C program to find maximum of two numbers using switch statement
        5)Write a program to determine if a given date is valid or not using switch statement. Note that year must be between 1850 and 2050. 
        6)"Extend the percentage marks program to print the grade of the student as per below division , using switch statement.
        80 - 100        : Honours
        60 - 79         : First Division
        50 - 59         : Second Division
        40 - 49         : Third Division
        0 - 39          : Fail"



## Logical Operators

##### Date 16-08-2021

    1)  check if a character is alphabet or not
    2)  check if a character is vowel or not
    3)  check if an year is leap year or not.
    4)  "Find the power bill for the input number of units :
            0 - 200 units : 100/- min
            201 - 400 units : 100 + 0.65 per unit excess of 200
            401 - 600 units : 230 + 0.80 per unit excess of 400
            601 and above units : 390 + 1.00 per unit excess of 600"
    5)  "Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.
            80 - 100        : Honours
            60 - 79         : First Division
            50 - 59         : Second Division
            40 - 49         : Third Division
            0 - 39          : Fail"
    6)  Write a program to find the biggest of three numbers using if else statements.
    
    7)  Write a program to find the biggest of four numbers.



## ifelse

##### Date 13-08-2021

        1)	Write a program to find the biggest of three numbers using if else statements.
        2)	C program to check and print whether a number is positive, negative or zero
        3)	Write a program to find the biggest of four numbers.
        4)	Write a calculator program that takes two integer numbers from user, and one of the operands +,-,* and / as a character and prints the appropriate result using if else.
        5)	Find the power bill for the input number of units :
                0 - 200 units : 100/- min
                201 - 400 units : 100 + 0.65 per unit excess of 200
                401 - 600 units : 230 + 0.80 per unit excess of 400
                601 and above units : 390 + 1.00 per unit excess of 600
        6)	Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.
                80 - 100        : Honours
                60 - 79         : First Division
                50 - 59         : Second Division
                40 - 49         : Third Division
                0 - 39          : Fail
        7)	check if a character is alphabet or not
        8)	check if a character is vowel or not
        9)	check if an year is leap year or not.
        10)	An ATM gives money in denominations of 500, 100, 50 ,20 and 10 /-. Given an amount, print how many notes of each denomination will be released. Amount entered must be a multiple of 10, otherwise give an error message. 
        print only the denominations that are dispensed, do not print the denominations with 0 number of notes.
        11)Read the marks for 6 subjects as integers, and calculate the percentage with 2 digit precision. Print the grade of the student as per below division, using if else statement.
                80 - 100                         : Honours
                60 - 80(not including 80)        : First Division
                50 - 60(not including 60)        : Second Division
                40 - 50(not including 50)        : Third Division
                0 - 40(not including 40)         : Fail
        12)"Write a program that reads a floating-point number and then displays the right-most digit of the integral part of the number.
            (Eg: User enters, 456.789, the output should be 6, which is last digit of the integral part of the number)."
        13)"Input 3 digits, read them into three different characters. Make one integer out of them and display.
            Eg., input 345. char c =‘3’,b=‘4’,d=‘5’. 
            Output : int i = 345."
        14) Write a program to print the size of various data types in C.

### Conditional Operaators

##### Date 12-08-2021

    1)Write a program to find the biggest of two numbers using conditional operator.
    2)Write a program to find the biggest of three numbers using conditional operator.
    3)Write a program that determines whether a given integer is odd or even and displays the appropriate message.
    4)For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls. Write a program to read number of calls made and compute and print the bill.
    5)Input an alphabet. Output its case reverse.
    
        eg., input: a
        output: A
        
        input: T
        output: t

    6)Take an integer as input and print its magnitude (remove sign).



## Variables

##### Date 11-08-2021


1)  read a 4 digit number and print it in the following formats using arithmetic operators:

    eg., 4532
    OP:
    2           4                         4                                     4532                  2354                
    3           5                         45                                    453
    5           3                         453                                   45
    4           2                         4532                                  4

2)  read a 4 digit number and print it in the following format using escape sequences:

    eg., 4532
    Output:
    4532
    453
    45
    4

3)  Write a program that reads an integer and displays the right-most digit of the number.

    (Eg: User enters, 456, the output should be 6).

4)  Swap the values of 2 variables and print the changed values.
         


## Data Types

##### Date 09-08-2021



    1)List out the data types, their format specifiers. 
    2)try input and output on different variables,create variables and then formatted output and inputs, print some expressions with arithmetic operations.
    3)"Calculation of simple interest.
    
    steps: 
        -declare an integer variables p and n to represent principle and duration in months respectively.
        -declare a floating point variable r to represent rate of interest.
        -declare a floating point variable si to store simple interest after calculation.
        -declare a variable m to represent time duration in years.
        -print the following indicative message using printf
         ""please enter principle,time in months and rate of interest""
         -read the values of p ,n and r using scanf.
        -devide n by 12.0 using / symbol and store the result in m, to convert time duration from months to years.
        Hint : m = n / 12.0;
        -calculate simple interest using the below formula and store in si variable.
        si = p * m * r / 100;
        - print si value to the user using printf.
    
    4)calculation of average of 4 numbers
    5)calculation of area and perimeter of rectangle,square and circle
    6)if sale price and profit of n items is given find the cost price of 1 item.
