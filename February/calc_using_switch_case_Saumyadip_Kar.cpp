#include <iostream>
using namespace std;

int main()
{
   int choice;
   long num1, num2, x;

   //displaying different options
   cout << "Please choose your option:"
           "\n1 = Addition"
           "\n2 = Subtraction"
           "\n3 = Multiplication"
           "\n4 = Division"
           "\n5 = Squares"
           "\n6 = exit"
           "\n\nChoice: ";
   cin >> choice;

   //while loop check whether the choice is in the given range
   while (choice < 1 || choice > 6)
   {
      cout << "\nPlease choose the above mentioned option."
              "\nChoice: ";
      cin >> choice;
   }

   switch (choice)
   {

   case 1:
      cout << "Enter two numbers: \n";
      cin >> num1 >> num2;
      x = num1 + num2;
      cout << "Sum = " << x;
      break;

   //Subtraction
   case 2:
      cout << "Enter two numbers: \n";
      cin >> num1 >> num2;
      x = num1 - num2;
      cout << "Subtraction = " << x;
      break;

   //Multiplication
   case 3:
      cout << "Enter two numbers: \n";
      cin >> num1 >> num2;
      x = num1 * num2;
      cout << "Product = " << x;
      break;

   //Division
   case 4:
      cout << "Enter Dividend: ";
      cin >> num1;
      cout << "Enter Divisor: ";
      cin >> num2;

      //while loop checks for divisor whether it is zero or not
      while (num2 == 0)
      {
         cout << "\nDivisor cannot be zero."
                 "\nEnter divisor once again: ";
         cin >> num2;
      }
      x = num1 / num2;
      cout << "\nQuotient = " << x;
      break;

   //Square
   case 5:
      cout << "Enter any number: \n";
      cin >> num1;
      x = num1 * num1;
      cout << "Square = " << x;
      break;

   case 6:
      return 0;

   default:
      cout << "\nError";
   }
}