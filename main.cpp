#include <iostream>

// A function that takes a function pointer and an integer argument
void apply_func(int (*func_ptr)(int), int x) {
    int result = func_ptr(x); // Call the function pointed to by func_ptr with x as argument
    std::cout << "The result is: " << result << std::endl;
}



// A function that squares an integer
int square(int x) {
    return x * x;
}

// A function that doubles an integer
int double_int(int x) {
    return x * 2;
}

int cube(int x) {
    return x * x * x;
}

int main() {
    int value = 5;

    // Declare a function pointer that points to the 'square' function
    int (*square_ptr)(int) = &square;

    // Apply the 'square' function to the value using the function pointer
    apply_func(square_ptr, value);

    // Declare a function pointer that points to the 'cube' function
    int (*cube_ptr)(int) = &cube;

    // Apply the 'cube' function to the value using the function pointer
    apply_func(cube_ptr, value);


    // Declare a function pointer that points to the 'double_int' function
    int (*double_ptr)(int) = &double_int;

    // Apply the 'double_int' function to the value using the function pointer
    apply_func(double_ptr, value);

    return 0;
}
