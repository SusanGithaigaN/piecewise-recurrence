# Piecewise Reccurrence using C

## Learning Goals
- Implement piecewise recurrent relation using three different methods
- Understand the advantages and disadvantages of all three methods

## Getting started
Fork and clone this github repository.
To test the program in (VS Code), you'll need to set up a few things. Here's a step-by-step guide:

1. Install the C/C++ extension: Open VS Code and navigate to the Extensions view on the left sidebar (icon with four squares). Search for "C/C++" in the search bar and install the official C/C++ extension by Microsoft.

2. Create a new folder and open it in VS Code: Create a new folder where you'll save your C program files. Open VS Code and use the "File" menu to open the folder you created.

3. Create a new C file: In the Explorer view of VS Code (left sidebar), right-click on the folder you opened and select "New File." Give it a name with the **.c extension**, and press Enter to create the file.

4. Configure tasks.json file: Press **Ctrl+Shift+P** (or **Cmd+Shift+P** *on macOS*) to open the Command Palette. Type "*Tasks: Configure Task*" and select "*Tasks: Configure Task*" from the dropdown. **Choose** "*Create tasks.json*" file from template" and select "*Others*" to create a custom task. Modify the generated tasks.json file as follows:
```json
{
    // See https://go.microsoft.com/fwlink/?LinkId=733558
    // for the documentation about the tasks.json format
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Build and run loop",
            "type": "shell",
            "command": "gcc",
            "args": [
                "${workspaceFolder}/piecewise-recurrence-relation/loop.c",
                "-o",
                "${workspaceFolder}/piecewise-recurrence-relation/loop"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": [
                "$gcc"
            ],
            "presentation": {
                "reveal": "always",
                "panel": "shared"
            }
        },
        {
            "label": "Build and run recursive",
            "type": "shell",
            "command": "gcc",
            "args": [
                "${workspaceFolder}/piecewise-recurrence-relation/recursive_function.c",
                "-o",
                "${workspaceFolder}/piecewise-recurrence-relation/recursive_function"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": [
                "$gcc"
            ],
            "presentation": {
                "reveal": "always",
                "panel": "shared"
            }
        },
        {
            "label": "Build and run memoization",
            "type": "shell",
            "command": "gcc",
            "args": [
                "${workspaceFolder}/piecewise-recurrence-relation/memoization.c",
                "-o",
                "${workspaceFolder}/piecewise-recurrence-relation/memoization"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": [
                "$gcc"
            ],
            "presentation": {
                "reveal": "always",
                "panel": "shared"
            }
        }
    ]
}
```
5. Build and run the program: Press **Ctrl+Shift+B** (or **Cmd+Shift+B** *on macOS*) to trigger the build task you just configured. VS Code will compile your C program and generate an executable file

6. To execute the programs, open a new terminal on VSCode and navigate to the fodler containing the programs. Run the following commands to test each of the files:

```
1. loop.c - ./loop
2. recursive_function.c - ./2. recursive_function
3. memoization.c - ./memoization
```

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



**Method 2: Recursive Function**

**Advantages**
- Simple implementation.
- Easy to understand

**Disadvantages**
- This method is inefficient.
- Memory usage.
It creates many function calls on the call stack which can lead to Stack Overflow errors if recursion depth exceeds



**Method 3: Memoization with Dynamic Programming**

Memoization refers to storing previously computed values so that they can be retrieved instead of recomputing
them again.  

**Advantages**
- Helps prevent stack overflow errors.
Stack overflow errors can occur when a recursive function calls itself too many times. Memoization can help to prevent stack overflow errors by storing the values of previously computed subproblems in the memo table. This means that the recursive function does not have to call itself as many times, which can prevent stack overflow errors.
- Efficient.
Memoization avoids redundant computations by storing previously computed values in a table, called the memo table. This means that the same value does not have to be recalculated every time it is needed, which can save a lot of time
- Faster execution.
The time complexity of memoization with dynamic programming is linear, which means that the running time of the algorithm is proportional to the size of the input. This is similar to the iterative approach, but with the advantage of memoization.

**Disadvantages**
- Requires additional memory for the memo table This can be a concern when dealing with very large values of *n*, as the memo table can quickly become very large.
- Slightly more complex due to the need for managing the memoization table.
