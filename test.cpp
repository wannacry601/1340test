#include <iostream>
#include <string>
using namespace std;

double calculate_bmi(double height,double weight)
{
    double bmi;
    bmi = weight / (height*height);
    return bmi;
}

void de_bmi(double bmi)
{
    if (bmi<25){
        cout << "bmi is normal" << endl;
    }else{
        cout << "you are too heavy owen!" << endl;
    }
}

int main()
{
    double weight,height;
    double bmi_value;
    cin >> weight >> height;
    bmi_value = calculate_bmi(height,weight);//pass by value
    cout << bmi_value << endl;
    de_bmi(bmi_value);  
    return 0;
}