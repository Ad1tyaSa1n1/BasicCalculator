#include <iostream>
#include <string>
using namespace std;
int main(){
    int fir_input,sec_input;
    string op_input;
    cout<<"Basic Calculator"<<endl;
    cout<<"------------------------------------------------------------------------------------------"<<endl;
    cout<<"Enter first value: "<<endl;
    cin>>fir_input;
    cout<<"Enter second value: "<<endl;
    cin>>sec_input;
    cout<<"Enter operation to perform (+,-,/,*): "<<endl;
    cin>>op_input;
    cout<<"------------------------------------------------------------------------------------------"<<endl;
    if (op_input=="+"){
        cout<<"Result: "<<fir_input+sec_input<<endl;
    }
    if (op_input=="-"){
        cout<<"Result: "<<fir_input-sec_input<<endl;
    }
    if (op_input=="*"){
       cout<<"Result: "<<fir_input*sec_input<<endl;
    }
    if (op_input=="/"){
        if (sec_input==0){
            cout<<"Division by zero is not possible"<<endl;
        }else{
            cout<<"Result: "<<fir_input/sec_input<<endl;
        }
    }
    cout<<"------------------------------------------------------------------------------------------";
    return 0;
}