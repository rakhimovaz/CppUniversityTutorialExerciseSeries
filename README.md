


# C++ Exercises with GitHub Classroom

Welcome to the C++ exercises repository! This guide will help you get started with GitHub Classroom and understand how to use this repository for your assignments.

## Getting Started

1. **Accept the Assignment**: Click on the GitHub Classroom link provided by your instructor. This will create a personal copy of the repository for you.

2. **Clone the Repository**: Once your personal repository is created, clone it to your local machine using:
   ```bash
   git clone [YOUR_REPOSITORY_LINK]
   ```

3. **Navigate to the Project**: Change your directory to the cloned repository:
   ```bash
   cd c_plus_exercises
   ```

## Working on Assignments

1. **Open the Exercise File**: For example, open the `hello.cpp` file to work on the exercise. 

2. **Implement the Function**: Follow the comments and instructions in the file to complete the exercise. For the `hello.cpp` exercise, you'll need to implement the `HelloWorld` function to return the string "Hello, World!". (for now, you shouldn't worry about for the first getting started exercise, just run the test and see if it passes, if it does, you're good to go!, you can commit and push your changes to your repository)

3. **Compile and Test**: Use the provided `Makefile` or your preferred C++ compiler to compile and test your solution.

4. **Commit Your Changes**: Once you're satisfied with your solution, commit your changes:
   ```bash
   git add .
   git commit -m "Completed the Get Started exercise"
   ```

5. **Push to GitHub**: Push your changes to your personal repository on GitHub:
   ```bash
   git push origin main
   ```

## Submitting Assignments

1. **Verify Your Changes on GitHub**: Visit your personal repository on GitHub and ensure that your changes are visible.

2. **Submit Through Classroom**: If your instructor requires, go back to GitHub Classroom and submit your assignment.

3. **Wait for Feedback**: Your instructor will review your code and provide feedback directly on GitHub.

## Getting Help

If you encounter any issues or have questions, please reach out to your instructor or TA. You can also refer to the [GitHub Classroom documentation](https://classroom.github.com/help) for more information.

---

Remember to replace `[YOUR_REPOSITORY_LINK]` with the actual link to the student's personal repository. This README provides a basic workflow for students using GitHub Classroom. Adjustments might be needed based on specific classroom settings or additional tools used in the course.


## Assignments

### 1. Hello, World!

**Description**: Write a simple program that outputs "Hello, World!" to the console. This assignment will introduce you to the basic structure of a C++ program.

**Test Code**:
```cpp
TEST_CASE( "Hello, World!", "[lesson:1]" ) {
    REQUIRE( HelloWorld() == "Hello, World!" );
}
```

---

Students can use these descriptions to better understand the requirements of each assignment and write their code accordingly.
### Run command
`make test`
### Clean command
`make clean`


### Notes
- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- If students push `a.out` files, the autograder may attempt to run that version instead of a newly compiled binary. If this happens, and your are not  on Linux, the script will crash. To fix this issue, it's recommended to clean before building.
