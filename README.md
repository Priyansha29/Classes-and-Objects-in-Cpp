

# Object Oriented Programming in C++

##  Introduction
In C++, **classes and objects** are the foundation of Object-Oriented Programming (OOP).  
They allow us to combine **data** (variables) and **functions** (methods) into a single unit.  

- A **class** is a blueprint or template.  
- An **object** is a real-world entity created from a class.  
- **Methods** are functions that operate on the data of the object.  
- **Access specifiers** (public, private) control **how the members of a class can be accessed**.  

This design ensures **encapsulation, data security, and modularity**.

---

##  What is a Class?
- A **class** is defined using the keyword `class`.  
- By default, all members of a class are **private**, unless explicitly declared otherwise.  
- A class typically contains:  
  - **Data Members** (variables, usually private).  
  - **Member Functions** (methods, usually public).  

 Think of a **class** as a **blueprint of a house**. It describes the design, but does not actually build the house.

---

##  What is an Object?
- An **object** is an **instance of a class**.  
- When an object is created, memory is allocated for its data members.  
- Multiple objects of the same class can exist independently.  

 Continuing the house analogy: a **class is the blueprint**, but the **house you live in** is the object.

---

## Definition of  Methods (Member Functions)
- **Member functions** define the **behavior of objects**.  
- They are written inside the class and can directly access data members.  
- Methods can be:
  - **Public**: accessible to the outside world.  
  - **Private**: used only internally within the class.  
- Methods may be defined **inside** or **outside** the class using **scope resolution (::)**.  

---

## Different types of Access Specifiers :

### 1. Public
- Declared using the keyword `public:`.  
- Accessible **inside and outside** the class.  
- Typically used for:
  - **Interfaces** (methods to interact with the object).  
  - **Special variables** that are safe to be accessed directly.  

### 2. Private
- Declared using the keyword `private:` (default in C++).  
- Accessible **only within the class**.  
- Protects data from being accidentally or maliciously changed.  
- Typically used for:
  - **Data Members** like `balance`, `password`, `rollNumber`.  

---

##  Comparison: Public vs Private

| Feature              | Public Members                          | Private Members                         |
|----------------------|------------------------------------------|------------------------------------------|
| Accessibility        | Accessible from anywhere                 | Accessible only within the class         |
| Typical Usage        | Methods, safe variables                  | Sensitive data, internal calculations    |
| Encapsulation Role   | Interface between class and outside world | Hides details and ensures data security  |

---

# Programs on OOPS in C++

## Program 1: Student Details using Class

This program demonstrates basic class usage in C++. A class Student is defined with public data members to store student details like name, branch, subject, year, and result. Two objects s1 and s2 are created, and their values are hardcoded. The program then displays the details of both students using cout. It shows how classes act as templates for creating multiple objects with similar properties.

### Algorithm
1. Start the program.  
2. Define a class `Student` with attributes: name, branch, subject, result.  
3. Create two objects `s1` and `s2`.  
4. Assign values for each student.  
5. Print the details.  
6. End.  


---

##  Program 2: Vehicle Details using Class (Car and Bike)


This program demonstrates basic class usage in C++ by defining a Car class with public data members: brand, model, year, and cost. It creates two objects, c1 and c2, to store details of two different cars. The program takes user input for each data member of both objects and stores the values directly in the public variables. After collecting the data, it displays all stored details for each car separately. Since the data members are public, they can be accessed and modified directly from the main() function without the need for getter or setter methods. This illustrates the concept of data encapsulation at a basic level but without restricting access to the variables.
### Algorithm
1. Start the program.  
2. Define classes `Car` and `Bike` with attributes.  
3. Create two car objects and two bike objects.  
4. Accept details of cars and bikes from the user.  
5. Print the details of each vehicle.  
6. End.
     
---
##  Program 3: Area of Rectangle using Class and Method


This program demonstrates the concept of a class with data members and a member function in C++. The class Rect contains public variables length and width, and a member function area() to calculate the area of a rectangle. In main(), an object r1 of class Rect is created. The user is prompted to enter the rectangle's length and width, which are stored in the object’s variables. The area() function is called by passing these values, and it returns the computed area (length × width). Finally, the program displays the calculated area on the screen.

### Algorithm
1. Start the program.  
2. Define a class `Rectangle` with members `length`, `width`, and a method `area()`.  
3. Take input for length and width from the user.  
4. If both values are equal, display "It is a square".  
5. Otherwise, calculate and display the area.  
6. End.  

---

---

##  Program 4: Simple Calculator using Class and Methods


This program demonstrates Object-Oriented Programming in C++ by creating a class Calc that performs basic arithmetic operations. The class has two public float variables num1 and num2 for storing input values, and four member functions — add(), sub(), multi(), and div() — for performing addition, subtraction, multiplication, and division respectively. In main(), an object c1 is created, and the user is prompted to enter two numbers. Each arithmetic operation is then performed by calling the respective member functions with the entered values. The results are displayed on the screen, showing how class methods can encapsulate and organize related operations. This program also shows function overloading with parameters and promotes code reusability by grouping multiple related operations in one class.

### Algorithm
1. Start the program.  
2. Define a class `Calculator` with methods for addition, subtraction, multiplication, division.  
3. Input two numbers from the user.  
4. Call each method and display the result.  
5. Handle division by zero separately.  
6. End.  


---
## Program 5: To Define Method Inside a Class and Outside a Class


This program demonstrates class creation and member function definitions in C++. The class Cube contains a public data member side to store the cube’s side length and two functions for calculating its volume. The first function vol_in() is defined inside the class, while the second function vol_out() is declared inside but defined outside the class using the scope resolution operator ::. The formula used for volume is side × side × side. In main(), the user enters the side length, and the program calculates and displays the volume using both methods. This illustrates the difference between inline and outside-class function definitions in C++.

### Algorithm

1. Start the program.

2. Define class MyClass with height, width, length.

3. Define method Volume() inside the class.

4. Declare method myVolume() inside and define it outside the class.

5. In main(), create an object M1.

6. Call M1.Volume() and M1.myVolume() to display results.

7. Stop.

---


##  Program 6:Find error in code (concept of public and private and methods in class & outside class )

This program demonstrates the concept of data members and member functions in C++ classes. A class Cube is defined with a private data member side, initialized to 5. It contains a public member function vol_in() that calculates and returns the cube’s volume using the formula 
side
3
. In main(), an object c1 of class Cube is created. The program then calls vol_in() to compute the volume and displays it. It also illustrates data encapsulation, where side is private and accessed only through a public method.

### Algorithm
1. Start the program.  
2. Define class `Cube` with attributes: height, width, length.  
3. Define method `volume()` that multiplies all three.  
4. Create an object of `Cube`.  
5. Calculate and print the height and volume.  
6. End.  

## Conclusion

All six programs demonstrate the basic concepts of Object-Oriented Programming (OOP) in C++, such as defining classes, creating objects, using public and private access specifiers, and implementing member functions. The first two programs show storing and displaying data using class attributes. The third program introduces member functions to perform calculations (area of a rectangle). The fourth program applies multiple member functions for arithmetic operations. The fifth program shows function definition inside and outside the class. The sixth program highlights the use of private data members with a fixed value. Together, these codes strengthen understanding of encapsulation, object creation, and basic class-based problem-solving in C++.
