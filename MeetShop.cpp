#include<iostream>
using namespace std;
int main ()
{

    int beaf,mutton,chicken,legs,wings,neck,golden;

    cout<<"Here is a Meet Shop "<<endl;

    cout<<"The Price of Beaf is 670 per kilogram "<<endl;
    cout<<"The Price of Mutton is 1800 per kilogram "<<endl;
    cout<<"The price of chicken meat is 400 per kilogram "<<endl;
    cout<<"The Price of chicken legs is 330 per kilogram "<<endl;
    cout<<"The Price of chicken wings is 300 per kilogram "<<endl;
    cout<<"The price of chicken neck is 650 per kilogram "<<endl;
    cout<<"The price of golden is 450 per kilogram "<<endl;

    cout<<"The amount of beaf is 10 kg "<<endl;
    cout<<"The amount of mutton is 15 kg "<<endl;
    cout<<"The amount of chicken meat is 30 kg "<<endl;
    cout<<"The amount of chicken legs is 25 kg "<<endl;
    cout<<"The amount of chicken wings is 25 kg "<<endl;
    cout<<"The amount of chicken neck is 30 kg "<<endl;
    cout<<"The amount of golden is 30 kg "<<endl;

    beaf=670*10;
    mutton=1800*15;
    chicken=400*30;
    legs=330*25;
    wings=300*25;
    neck=650*30;
    golden=450*30;

    cout<<"Total amount of beaf is "<<beaf<<endl;
    cout<<"Total amount of mutton is "<<mutton<<endl;
    cout<<"Total amount of chicken meat is "<<chicken<<endl;
    cout<<"Total amount of chicken legs is "<<legs<<endl;
    cout<<"Total amount of chicken wings is "<<wings<<endl;
    cout<<"Total amount of chicken neck is "<<neck<<endl;
    cout<<"Total amount of golden is "<<golden<<endl;

    beaf=beaf*20/100;
    mutton=mutton*20/100;
    chicken=chicken*20/100;
    legs=legs*20/100;
    wings=wings*20/100;
    neck=neck*20/100;
    golden=golden*20/100;

    cout<<"Profit on beaf is "<<beaf<<endl;
    cout<<"Profit on mutton is "<<mutton<<endl;
    cout<<"Profit on chicken meat is "<<chicken<<endl;
    cout<<"Profit on chicken legs is "<<legs<<endl;
    cout<<"Profit on chicken wings is "<<wings<<endl;
    cout<<"Profit on chicken neck is "<<neck<<endl;
    cout<<"Profit on golden is "<<golden<<endl;

    return 0;

}
