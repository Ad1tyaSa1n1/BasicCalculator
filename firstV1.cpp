#include <iostream>
using namespace std;
int main(){
    int fir_input,sec_input;
    int add_output,sub_output,mult_output;
    float divide_output;
    
    
    cout<<"Basic Calculator"<<endl;
    cout<<"------------------------------------------------------------------------------------------"<<endl;
    cout<<"Enter first value: "<<endl;
    cin>>fir_input;
    cout<<"Enter second value: "<<endl;
    cin>>sec_input;
    cout<<"------------------------------------------------------------------------------------------"<<endl;
    add_output=fir_input+sec_input;
    sub_output=fir_input-sec_input;
    mult_output=fir_input*sec_input;
    divide_output=(float)fir_input/sec_input;
    
    
    cout<<"Adding " << fir_input << " and " <<sec_input << " is " <<add_output<<endl;
    cout<<"Subtracting "<< fir_input << " and " <<sec_input << " is " <<sub_output<<endl;
    cout<<"Multiplying "<< fir_input << " and " <<sec_input << " is "<<mult_output<<endl;
    if (sec_input==0){
        cout<<"Invalid divide"<<endl;
    }
    else{
        cout<<"Dividing "<< fir_input << " and " <<sec_input << " is " <<divide_output<<endl;
    }
    cout<<"------------------------------------------------------------------------------------------";
    return 0;
}