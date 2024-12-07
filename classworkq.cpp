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

