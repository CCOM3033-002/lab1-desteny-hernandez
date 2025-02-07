[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Zw7L1z6F)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=18088238&assignment_repo_type=AssignmentRepo)
# Box Office  

Este laboratorio tiene un valor de 15 puntos. La fecha de entrega está en moodle. Entregas tardías perderán 1 punto por cada día o fracción de día tarde. 

## Instructions  

A movie theater only keeps a percentage of the revenue earned from ticket sales. The remainder goes to the movie distributor. Write a program that calculates a theater's gross and net box office profit for a night. The program should ask for the name of the movie, and how many adult and child tickets were sold. (An adult ticket is \$10.00, a child's ticket is $6.00.) It should display a report similar to:  

```
Movie Name:                    “Wheels of Fury”             
Adult Tickets Sold:               382  
Child Tickets Sold:               127  
Gross Box Office Profit:       $ 4582.00  
Net Box Office Profit:         $  916.40  
Amount Paid to Distributor:    $ 3665.60
```

Some details to note:  

- Gross Box Office Profit is the total of money made in sales  
- The Net Box Office Profit is the amount of money the theater keeps  
  - Assume the theater keeps 20% of the gross box office profit
- The Amount Paid to Distributor is the difference between the Gross and Net  Box Office Profit  

Notice that:  

- The user data is displayed aligned as a secong column  
- For the currency, the $ as well as the decimal point are aligned
- The name of the movie is displayed _with_ quoatation marks  



**Example output (option 1):**  

```
This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater.

Enter the name of the movie: Wheels of Fury  
Enter the amount of adult tickets sold: 382  
Enter the amount of child tickets sold: 127  
 
Movie Name:                 “Wheels of Fury”  
Adult Tickets Sold:           382  
Child Tickets Sold:           127  
Gross Box Office Profit:    $  4582.00  
Net Box Office Profit:      $   916.40  
Amount Paid to Distributor: $  3665.60  
```

**Example output (option 2):**  

```
This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater.
 
Movie Name:                 “Wheels of Fury”  
Adult Tickets Sold:           382  
Child Tickets Sold:           127  
Gross Box Office Profit:    $  4582.00  
Net Box Office Profit:      $   916.40  
Amount Paid to Distributor: $  3665.60  
```

- In the last example output, the user entered the name of the movie and the amount of tickets sold for adults and children. 

## Rubric

Your program should:

- Follow the above instructions (9 pts):

  - Display the purpose of the program (1 pt)
  - Display appropriate input prompts for the user (1 pt)
  - Correctly calculate the Gross and Net profit and the amount paid to the distributor (2 pts)
  - Amounts of money shoud be displayed with exactly 2 decimal points and must include the $ sign (2 pt)
    - All three periods must be aligned with each other (2 pts)
  - The name of the movie must appear with quotation marks (not added by the user as input) (1 pt)

- Comment your code and use spacing appropriatly to improve readability of your code (1 pt)

- The display must be aligned the same way as the example output (2 pts)

- Avoid using whitespaces inside string literals to add the padding needed for the correct display output (2 pts)

  - All of the padding or spacing must be coded with stream manipulators discussed in class (setw, setprecission, fixed, showpoint, left, right)

- Your code should be propperly documented with comments in a way that promotes readability. It should also containt a header with your information (see example bellow) (1 pts)

  ```c++
  /*
  Asignación 1: Binary Digit
  Nombre: Juan del Pueblo
  Núm. Est: 801-XX-XXXX
  Colaboraciones: 
  - tutor X,
  - página web: [link]
  */
  ```

- Only use concepts discussed in class or in this rubric, otherwise you will loose 1/3 of the points

- If your program doesnt compile or has a run-time error, you will loose half the points. 
