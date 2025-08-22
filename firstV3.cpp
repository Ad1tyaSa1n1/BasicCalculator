#include <iostream>
using namespace std;
int main()
{
  int fir_input, sec_input, operation_input;
  cout << "Basic Calculator"<<endl;
  cout << "--------------------------------------"<<endl;
  cout << "Enter value 1: "<<endl;
  cin >> fir_input;
  cout << "Enter value 2: "<<endl;
  cin >> sec_input;
  cout << "Enter operation(1.Add,2.Subtraction,3.Multiply,4.Divide): "<<endl;
  cin >> operation_input;
  cout<<"----------------------------------------"<<endl;
  switch (operation_input)
  {
  case 1:
      cout << "Addition of " << fir_input << " and " << sec_input << " is " << fir_input + sec_input;
      break;
    case 2:
      cout << "Subtraction of " << fir_input << " and " << sec_input << "is " << fir_input - sec_input;
        break;
    case 3:
      cout << "Multiplication of " << fir_input << " and " << sec_input << " is " << fir_input * sec_input;
      break;
     case 4:
      cout << "Division of " << fir_input << " and " << sec_input << " is " << (float)fir_input / sec_input;
      break;
    default:
      cout<<"Invalid Input";
  }
}