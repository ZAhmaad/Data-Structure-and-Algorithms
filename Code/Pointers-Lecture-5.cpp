// Pointer and Array 

// Example-1


// #include <iostream>
// using namespace std;

// int main() {
//     int numbers[5] = {10, 20, 30, 40, 50};  // Array of integers
//     int *ptr = numbers;  // Pointer pointing to the first element of the array

//     cout << "Accessing array elements using pointers:\n";

//     for (int i = 0; i < 5; i++) {
//         cout << "Element " << i << " (Address: " << (ptr + i) << ") = " << *(ptr + i) << endl;
//     }

//     return 0;
// }


// Example-2


// #include <iostream>  // Required for cout
// using namespace std; // Allows using cout without std::

// int main() { 
//     int numbers[5];  // Array declaration
//     int *p;          // Pointer declaration

//     p = numbers;     // p points to the first element of the array
//     *p = 10;         // numbers[0] = 10

//     p++;             // Move pointer to numbers[1]
//     *p = 20;         // numbers[1] = 20

//     p = &numbers[2]; // Point directly to numbers[2]
//     *p = 30;         // numbers[2] = 30

//     p = numbers + 3; // Point to numbers[3]
//     *p = 40;         // numbers[3] = 40

//     p = numbers;     // Reset pointer to start of array
//     *(p + 4) = 50;   // numbers[4] = 50

//     // Print array values
//     for (int n = 0; n < 5; n++) {
//         cout << numbers[n] << ", ";
//     }

//     return 0; 
// }


// Pointer and String

// Example-1

// #include <iostream> 
// using namespace std;

// int main() {
//     char str[] = "Pointer";   // Character array (string)
//     char *ptr = str;          // Pointer to first character

//     cout << "First character: " << *ptr << endl;      
//     cout << "Third character: " << *(ptr + 2) << endl; 

//     ptr++;  // Move to the next character
//     cout << "After increment, points to: " << *ptr << endl;

//     return 0;
// }


// Example-2


// #include <iostream>
// using namespace std;

// int main() {
//     char str[] = "Programming";   // Character array (string)
//     char *ptr = str;              // Pointer to the first character

//     // Printing characters with pointer arithmetic
//     cout << "First character: " << *ptr << endl;     
//     cout << "Fourth character: " << *(ptr + 3) << endl; 
    
//     ptr += 2;  
//     cout << "After increment by 2, points to: " << *ptr << endl;  

//     ptr += 5;  
//     cout << "After increment by 5, points to: " << *ptr << endl;  

//     ptr -= 3;  
//     cout << "After decrement by 3, points to: " << *ptr << endl;  

//     // Using pointer arithmetic with array indexing
//     cout << "Character at index 4: " << *(str + 4) << endl;  
//     cout << "Character at index 7: " << *(str + 7) << endl;  
    
//     // Using array indexing with pointer
//     cout << "Character at index 6: " << ptr[6] << endl;  
    
//     // Moving pointer to the end of the string and printing the null character
//     while (*ptr) { 
//         ptr++;  // Move pointer to the next character until the null terminator
//     }
//     cout << "Null character (end of string): " << *ptr << endl; // Dereference to print null terminator '\0'

//     return 0;
// }



// Pointer to Pointer 


// Example-1

// #include <iostream>
// using namespace std;

// int main() {
//     char a;          
//     char *b;         
//     char **c;        

//     a = 'z';         
//     b = &a;         
//     c = &b;          

//     // Print memory addresses and values
//     cout << (void*)&a << endl;  // Address of 'a' (casting to void* for pointer printing)
//     cout << (void*)&b << endl;  // Address of 'b'
//     cout << (void*)&c << endl;  // Address of 'c'
//     cout << a << endl;         // Value of 'a'
//     cout << b << endl;         // Value of 'b' (which is address of 'a')
//     cout << c << endl;         // Value of 'c' (which is address of 'b')
//     cout << *b << endl;        // Value at address pointed by 'b' (value of 'a')
//     cout << *c << endl;        // Value at address pointed by 'c' (value of 'b')
//     cout << **c << endl;       // Value at address pointed by address pointed by 'c' (value of 'a')

//     return 0;
// }


// Example-2

// #include <iostream>
// using namespace std;

// int main() {
//     float a;           // Declare a float variable 'a'
//     float *b;          // Declare a pointer 'b' to float
//     float **c;         // Declare a pointer to pointer 'c'
//     float ***d;        // Declare a pointer to pointer to pointer 'd'

//     a = 5.5f;          // Assign 5.5 to 'a'
//     b = &a;            // Assign the address of 'a' to 'b'
//     c = &b;            // Assign the address of 'b' to 'c'
//     d = &c;            // Assign the address of 'c' to 'd'

//     // Print memory addresses and values
//     cout << (void*)&a << endl;    // Address of 'a'
//     cout << (void*)&b << endl;    // Address of 'b'
//     cout << (void*)&c << endl;    // Address of 'c'
//     cout << (void*)&d << endl;    // Address of 'd'

//     cout << a << endl;           // Value of 'a'
//     cout << *b << endl;          // Value at address pointed by 'b' (value of 'a')
//     cout << **c << endl;         // Value at address pointed by address pointed by 'c' (value of 'a')
//     cout << ***d << endl;        // Value at address pointed by address pointed by address pointed by 'd' (value of 'a')

//     cout << b << endl;           // Value of 'b' (address of 'a')
//     cout << c << endl;           // Value of 'c' (address of 'b')
//     cout << d << endl;           // Value of 'd' (address of 'c')

//     cout << *c << endl;          // Value at address pointed by 'c' (value of 'b')
//     cout << **d << endl;         // Value at address pointed by address pointed by 'd' (value of 'b')

//     return 0;
// }


// Pointer to function

// Example-1

// #include <iostream>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int (*ptr)(int, int);  // Declare function pointer
//     ptr = add;  // Store function address

//     cout << "Sum: " << ptr(10, 5) << endl; // Call function using pointer
//     return 0;
// }



// Example-2


// #include <iostream>
// using namespace std;


// void greet() {
//     cout << "Hello, welcome to function pointers!" << endl;
// }

// int main() {
//     void (*funcPtr)();  // Declare a function pointer
//     funcPtr = greet;    // Assign the function address

//     funcPtr();  // Call function using the pointer

//     return 0;
// }




// Dynamic memory allocation

#include <iostream>
#include <new>
using namespace std;

int main() {
    int i, n;
    int *p;

    cout << "How many numbers would you like to type? ";
    cin >> i;

    // Dynamically allocate memory for the array
    p = new (nothrow) int[i];

    // Check if memory allocation was successful
    if (p == nullptr) {
        cout << "Error: memory could not be allocated";
    } else {
        // Get user input for the array
        for (n = 0; n < i; n++) {
            cout << "Enter number: ";
            cin >> p[n];
        }

        // Display the entered numbers
        cout << "You have entered: ";
        for (n = 0; n < i; n++) {
            cout << p[n] << ", ";
        }
        cout << endl;

        // Deallocate the dynamically allocated memory
        delete[] p;
    }

    return 0;
}


// Pointer and Structure


#include <iostream>
using namespace std;

// Define a structure to represent a person
struct Person {
    string name;
    int age;
};

int main() {
    // Create a structure variable
    Person person1 = {"Alice", 30};

    // Create a pointer to the structure
    Person *ptr = &person1;

    // Access structure members using pointer
    cout << "Using pointer:" << endl;
    cout << "Name: " << ptr->name << endl;  // Using pointer to access 'name'
    cout << "Age: " << ptr->age << endl;    // Using pointer to access 'age'

    // Access structure members directly
    cout << "\nUsing direct access:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;

    return 0;
}
