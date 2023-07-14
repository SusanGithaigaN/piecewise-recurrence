# Piecewise Reccurrence using C

## Learning Goals
- Implement piecewise recurrent relation using three different methods
- Understand the advantages and disadvantages of all three methods

## Getting started
Fork and clone this github repository.
To test the program in (VS Code), you'll need to set up a few things. Here's a step-by-step guide:

1. Install the C/C++ VSCode extension by Microsoft.
2. To execute the programs, open a new terminal on VSCode and navigate to the foler containing the programs.

Let's start with the explanations of each method, along with the advantages and disadvantages of each method.

**Method 1: Iterative loop**

**Advantages**
- Faster execution.
The iterative approach is faster than the recursive approach because it has a linear time complexity, which means that the execution time is proportional to the size of the input.
- Efficient.
This method avoids unnecessary computations by calculating each value in a loop based on the previous two values.
- Lower memory usage. 
This approach uses less memory because it does not create stack frames.

**Disadvantages**
- Recurrence relations can be difficult to understand at first because they use a recursive definition, which means that the definition of a term depends on the definition of previous terms.
- Doesn't take advantage of memoization. Memoization is a technique that can be used to speed up the calculation of a recurrence relation by storing the values of already computed terms in a table.