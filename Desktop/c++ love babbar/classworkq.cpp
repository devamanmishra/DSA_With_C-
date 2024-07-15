// program to find and print the maximum of three numbers:#include <iostream>
using namespace std;

int main() {
    // Declare three variables to store the numbers
    int num1, num2, num3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the maximum number
    int maxNum = num1;

    if (num2 > maxNum) {
        maxNum = num2;
    }
    if (num3 > maxNum) {
        maxNum = num3;
    }

    // Print the maximum number
    cout << "The maximum of the three numbers is: " << maxNum << endl;

 return 0;
}



//Here's a simple C++ program that counts from 1 to a user-specified number n
#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Count from 1 to n
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    // Print a new line at the end
    cout << endl;

 return 0;
}



//Here's a C++ program to check if a given number is a prime number:

#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is less than 2
    if (num <= 1) {
        isPrime = false;
    } else {
        // Check if the number has any divisors other than 1 and itself
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Print the result
    if (isPrime) {
  cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

 return 0;
}


 //program to check whether a given number is even or odd:

 #include <iostream>
using namespace std;

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is even or odd
    if (num % 2 == 0) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }

 return 0;
}

//program to calculate the sum of all numbers from 1 to a user-specified number n:
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Calculate the sum of all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the sum
    cout << "The sum of all numbers from 1 to " << n << " is: " << sum << endl;

return 0;
}


//calculate the sum of all even numbers from 1 to a user-specified number n:

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Calculate the sum of all even numbers from 1 to n
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    // Print the sum
    cout << "The sum of all even numbers from 1 to " << n << " is: " << sum << endl;

  return 0;
}

//function to calculate the area of a circle:

#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    const double PI = 3.14159265358979323846;
    return PI * radius * radius;
}

int main() {
    double radius;

    // Prompt the user to enter the radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the area
    double area = calculateArea(radius);

    // Print the area
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

 return 0;


//function to find the factorial of a number:

#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Calculate the factorial
    int fact = factorial(num);

    // Print the factorial
    cout << "The factorial of " << num << " is: " << fact << endl;

  return 0;
}

//program to print all prime numbers from 1 to a user-specified number n:

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Print all prime numbers from 1 to n
    cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

 return 0;
}

// program to print all digits of a given integer:

#include <iostream>
using namespace std;

void printDigits(int num) {
    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // Extract and print each digit
    while (num > 0) {
        int digit = num % 10;
        cout << digit << " ";
        num /= 10;
    }

    cout << endl;
}

int main() {
    int number;

    // Prompt the user to enter an integer
    cout << "Enter an integer: ";
    cin >> number;

    // Print all digits of the integer
    cout << "Digits of the integer are: ";
    printDigits(number);

 return 0;
}

//program that creates a number from individual digits:

#include <iostream>
using namespace std;

// Function to create a number from an array of digits
int createNumber(int digits[], int size) {
    int number = 0;
    for (int i = 0; i < size; i++) {
        number = number * 10 + digits[i];
    }
    return number;
}

int main() {
    const int SIZE = 5;  // Number of digits
    int digits[SIZE];

    // Prompt the user to enter digits
    cout << "Enter " << SIZE << " digits: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> digits[i];
    }

    // Create the number from the digits
    int number = createNumber(digits, SIZE);

    // Print the created number
    cout << "The number created from the digits is: " << number << endl;

return 0;
}

//program to print the binary representation of a decimal number

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int number;

    // Prompt the user to enter a decimal number
    cout << "Enter a decimal number: ";
    cin >> number;

    // Print the binary representation using bitset
    cout << "The binary representation of " << number << " is: ";
    cout << bitset<32>(number) << endl;  // Assumes up to 32-bit integers

return 0;
}

// program to convert kilometers to miles:

#include <iostream>
using namespace std;

// Function to convert kilometers to miles
double kmToMiles(double km) {
    const double KM_TO_MILES_CONVERSION_FACTOR = 0.621371;
    return km * KM_TO_MILES_CONVERSION_FACTOR;
}

int main() {
    double kilometers;

    // Prompt the user to enter the distance in kilometers
    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    // Convert kilometers to miles
    double miles = kmToMiles(kilometers);

    // Print the distance in miles
    cout << kilometers << " kilometers is equal to " << miles << " miles." << endl;

return 0;
}

// program to convert Fahrenheit to Celsius:

#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double fahrenheit;

    // Prompt the user to enter the temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    double celsius = fahrenheitToCelsius(fahrenheit);

    // Print the temperature in Celsius
    cout << fahrenheit << " Fahrenheit is equal to " << celsius << " Celsius." << endl;

return 0;
}


//Convert all set bits of a number 

#include <iostream>
using namespace std;

// Function to set all bits to 1
unsigned int setAllBitsToOne(unsigned int num) {
    return ~0;  // Return a number where all bits are set to 1
}

int main() {
    unsigned int number;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Set all bits to 1
    unsigned int result = setAllBitsToOne(number);

    // Print the result
    cout << "The number with all bits set to 1 is: " << result << endl;

  return 0;
}

//number is odd or even using bitwise operator
#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is even or odd using the bitwise AND operator
    if (number & 1) {
        cout << number << " is an odd number." << endl;
    } else {
        cout << number << " is an even number." << endl;
    }

  return 0;
}