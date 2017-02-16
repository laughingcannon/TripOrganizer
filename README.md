An object-oriented program in C++ that manages a user's trip based on his/her standards and preferences.

The program's speciality: It makes use of concepts such as operator overloading, function overloading, friend functions, virtual functions and inheritance - all in one piece!

#### class endpoints:
  - Takes source and destination from the user as input;
  - Is the super class of *logistic*.
  
#### class logistic:
- Manages transport, and takes in travelling details, i.e. mode of travel, number of members, and travel budget;
- Is the subclass of *endpoints*, and superclass of *accommo*.

#### class accommo:
- Takes food and accommodation data, which includes living standard, food budget, and number of days of stay;
- Computes and diplays the expenditure of the trip in various counts, along with the total;
- Is the subclass of *logistic* (multi-level inheritance).
