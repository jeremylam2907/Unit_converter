#include <iostream>
#include<iomanip>

using namespace std;

        // 1) length
        // 2) area 
        // 3) volume
        // 4) mass 
        // 5) pressure
        // 6) velocity
        // 7) temperature

void Convert()
{
    //Selecting conversion mode
    cout << endl << "[   1 for metric ==> imperial   ]              [   2 for US customary ==> metric   ]\n\n";
    int UserInput;
    cin >> UserInput;
    cout << endl;

    cout << setprecision(3) << scientific; //Set exponential and decimal precision



    //                [<<<<<<<<<      Metric to imperial      >>>>>>>>>>]
    if ( UserInput==1 )
    {
        cout << "[1] for length   \n[2] for area   \n[3] for volume\n";
        cout << "[4] for mass   \n[5] for pressure\n[6] for velocity \n[7] for temperature\n";
        int MetricSelect;
        cin >> MetricSelect;
        cout << endl;


             if (MetricSelect == 1) // length
        {
            cout << "PREFIX REFERENCE:\n\nmega: e6\nkilo: e3\ncenti: e-2\nmilli: e-3\nmicro: e-6\nnano: e-9\n\n";

            //input length value and conversion
            double Length;
            cout << "Input in meters: "; cin >> Length;
            cout << "Convert to:\n[1] inch\n[2] feet\n[3] yard\n[4] mile\n";
            int ChoiceLength;
            cin >> ChoiceLength;

            //conversion
            if (ChoiceLength ==1)
            {cout << "Equals: " << Length * 39.3701 <<" inches";}
            else if (ChoiceLength == 2)
            {cout << "Equals: " << Length * 3.28084 << " feet";}
            else if (ChoiceLength == 3)
            {cout << "Equals: " << Length * 1.09361 <<" yards";}
            else if (ChoiceLength == 4)
            {cout << "Equals: " << Length * 0.000621371 << " miles";}
            
        }
        else if (MetricSelect == 2) // Area
        {
            cout << "PREFIX REFERENCE:\n\nmega: e6\nkilo: e3\ncenti: e-2\nmilli: e-3\nmicro: e-6\nnano: e-9\n\n";
            
            //input area value and select conversion
            double Area;
            cout << "Input in meter squared: "; cin >> Area;
            cout << "Convert to:\n[1] inch squared\n[2] feet squared\n[3] mile squared\n";
            int ChoiceArea;
            cin >> ChoiceArea;

            //convert
            if (ChoiceArea ==1)
            {cout << "Equals: " << Area * 1550 <<" square inches";}
            else if (ChoiceArea == 2)
            {cout << "Equals: " << Area * 10.763888889 <<" square feet";}
            else if (ChoiceArea == 3)
            {cout << "Equals: " << Area * 3.861013863421144847e-7 <<" square miles";}
        }
        else if (MetricSelect == 3) // Volume
        {
            cout << "PREFIX REFERENCE:\n\nmega: e6\nkilo: e3\ncenti: e-2\nmilli: e-3\nmicro: e-6\nnano: e-9\n\n";
            
            //input volume value and select conversion
            double Vol;
            cout << "Input in cubic meter: "; cin >> Vol;
            cout << "Convert to:\n[1] gallon\n[2] quart\n[3] pint\n[4] cup\n[5] fl ounce\n";
            int ChoiceVol;
            cin >> ChoiceVol;

            //convert
            if (ChoiceVol ==1)
            {cout << "Equals: " << Vol * 264.172 << " gallons";}
            else if (ChoiceVol == 2)
            {cout << "Equals: " << Vol * 1056.68799999699 << " quarts";}
            else if (ChoiceVol == 3)
            {cout << "Equals: " << Vol * 2113.3759999939798035 << " pints";}
            else if (ChoiceVol == 4)
            {cout << "Equals: " << Vol * 4166.6658408333314583 << " cups";}
            else if (ChoiceVol == 5)
            {cout << Vol * 33814.015999903684133 << " fl ounce";}
            
        }
        else if (MetricSelect == 4) // Mass
        {
             cout << "PREFIX REFERENCE:\n\nmega: e6\nkilo: e3\ncenti: e-2\nmilli: e-3\nmicro: e-6\nnano: e-9\n\n";
            
            //input mass value and select conversion
            double Mass;
            cout << "Input in kg: "; cin >> Mass;
            cout << "Convert to:\n[1] slug\n[2] US ton\n[3] pound\n[4] ounce\n";
            int ChoiceMass;
            cin >> ChoiceMass;

            //convert
            if (ChoiceMass ==1)
            {cout << "Equals: " << Mass * 0.0685218<< " slug";}
            else if (ChoiceMass == 2)
            {cout << "Equals: " << Mass * 0.00110231186493503<< " US tons";}
            else if (ChoiceMass == 3)
            {cout << "Equals: " << Mass * 2.2046237298700597229 << " pounds";}
            else if (ChoiceMass == 4)
            {cout << "Equals: " << Mass * 35.273979677920955567 << " ounces";}
            
        }
        else if (MetricSelect == 5) // Pressure
        {
            cout << "PREFIX REFERENCE:\n\nmega: e6\nkilo: e3\ncenti: e-2\nmilli: e-3\nmicro: e-6\nnano: e-9\n\n";
            
            //input pressure value and select conversion
            double Pressure;
            cout << "Input in pascal (1 atm = 101325): "; cin >> Pressure;
            cout << "\n pascal to PSI equals: \n";
            
            cout << "Equals: " << Pressure * 0.000145038;
        }
        else if (MetricSelect == 6) // Velocity
        {
            cout << "[   1 for km/h to customary   ]              [   2 for m/s to customary   ]\n\n";
            int ChooseUnit;
            cin >> ChooseUnit;
            cout << endl;
            if (ChooseUnit == 1) // km per hour to customary
            {
                //input velocity value and select conversion
                double VeloKm;
                cout << "Input in km/h: "; cin >> VeloKm;
                cout << "Convert to:\n[1] mi/h\n[2] ft/sec\n";
                int ChoiceVeloKm;
                cin >> ChoiceVeloKm;

                //convert
                if (ChoiceVeloKm ==1)
                {cout << "Equals: " << VeloKm * 0.621371 << " mi/h";}
                else
                {cout << "Equals: " << VeloKm * 0.9113441333297608 << " ft/sec ";}
            }
            else                 // m per second to customary
            {
                double VeloM;
                cout << "Input in m/s: "; cin >> VeloM;
                cout << "Convert to:\n[1] mi/h\n[2] ft/sec\n";
                int ChoiceVeloM;
                cin >> ChoiceVeloM;

                //convert
                if (ChoiceVeloM ==1)
                {cout << "Equals: " << VeloM * 2.2369355999910522925 << " mi/h";}
                else
                {cout << "Equals: " << VeloM * 3.2808388799868768437 << " ft/sec ";}
            }
        }
        else if (MetricSelect == 7) // Temperature
        {
           //input temp value and select conversion
            double Temp;
            cout << "Input in degree Celcius: "; cin >> Temp;
            cout << "Convert to:\n[1] Degree Fahrenheit\n[2] Kelvin\n";
            int ChoiceTemp;
            cin >> ChoiceTemp;

            //convert
            if (ChoiceTemp == 1)
            {cout << "Equals: " << (Temp*9/5) + 32;}
            else
            {cout << "Equals: " << Temp +  273.15;} 
        }
    }
    
    
    //                [<<<<<<<<<      US customary to metric      >>>>>>>>]
    else if (UserInput ==2)
    {
        cout << "[1] for length   \n[2] for area   \n[3] for volume\n";
        cout << "[4] for mass   \n[5] for pressure\n[6] for velocity \n[7] for temperature\n";    
        int CustomarySelect;
        cin >> CustomarySelect;
        cout << endl;


        if (CustomarySelect == 1) // length
        {
            cout << "You are converting from:\n [1] inches\n [2] feet\n [3] yards\n [4] miles\n\n";
            double Length;
            cin >> Length;
            double a;
            
            if( Length == 1)
            { 
                cout << "Enter in inches: "; cin >> a;
                double b = a;
                cout << "Equals to: " << b/39.37 << " meters";
            }
            else if (Length == 2)
            {
                cout << "Enter in feet: "; cin >> a;
                double b = a * 12;
                cout << "Equals to: " << b/39.37 << " meters";
            }
            else if (Length == 3)
            {
                cout << "Enter in yard: "; cin >> a;
                double b = a * 36;
                cout << "Equals to: " << b/39.37 << " meters";
            }
            else
            {
                cout << "Enter in miles: "; cin >> a;
                double b = a * 63360;
                cout << "Equals to: " << b/39.37 << " meters";
            }
            cout << "\nPREFIX REFERENCE:\n\nmega: e6\nkilo: e3\ncenti: e-2\nmilli: e-3\nmicro: e-6\nnano: e-9\n\n";
        }
        else if (CustomarySelect == 2) // Area
        {
            cout << "You are converting from:\n [1] square inches\n [2] square feet\n [3] square miles\n\n";
            int Area;
            cin >> Area;
            double c;
            
            if( Area == 1)
            { 
                cout << "Enter in square inches: "; cin >> c;
                double d = c;
                cout << "Equals to: " << d/1550 << " square meters";
            }
            else if ( Area == 2)
            {
                cout << "Enter in square feet: "; cin >> c;
                double d = c * 144;
                cout << "Equals to: " << d/1550 << " square meters";
            }
            else if ( Area == 3)
            {
                cout << "Enter in square miles: "; cin >> c;
                double d = c * 4.014e+9;
                cout << "Equals to: " << d/1550 << " square meters";
            }

            cout << "\nPREFIX REFERENCE:\n\nkilo: e6\ncenti: e-4\n\n";
        }
        else if (CustomarySelect == 3) // Volume
        {
            cout << "You are converting from:\n [1] floz\n [2] cups\n [3] pints\n [4] quarts\n [5] gallons\n\n";
            double Vol;
            cin >> Vol;
            double a;

            //Conversion
            if( Vol == 1)
            { 
                cout << "Enter in floz: "; cin >> a;
                double b = a;
                cout << "Equals to: " << b/33814 << " cubic meters";
            }
            else if( Vol == 2)
            { 
                cout << "Enter in cups: "; cin >> a;
                double b = a*8.115;
                cout << "Equals to: " << b/33814 << " cubic meters";
            }
            else if( Vol == 3)
            { 
                cout << "Enter in pints: "; cin >> a;
                double b = a*16;
                cout << "Equals to: " << b/33814 << " cubic meters";
            }
            else if( Vol == 4)
            { 
                cout << "Enter in quarts: "; cin >> a;
                double b = a*32;
                cout << "Equals to: " << b/33814 << " cubic meters";
            }
            else if( Vol == 5)
            { 
                cout << "Enter in gallons: "; cin >> a;
                double b = a*128;
                cout << "Equals to: " << b/33814 << " cubic meters";
            }
                cout << "\nPREFIX REFERENCE:\n\nkilo: e9\ncenti: e-6\n1 cubic meter = 1000 liter\n";
        }
        else if (CustomarySelect == 4) // Mass
        {
            cout << "You are converting from:\n [1] pounds\n [2] ounce\n\n";
            int Mass;
            cin >> Mass;
            double c;

            //Conversion
            if( Mass == 1)
            { 
                cout << "Enter in pounds: "; cin >> c;
                double d = c * 16; //convert to ounce
                cout << "Equals to: " << d/35.274 << " Kilograms";
            }
            else if ( Mass == 2)
            {
                cout << "Enter in ounces: ", cin >> c;
                cout << "Equals to: " << c/35.274 << " Kilograms";
            }
            cout << "\nPREFIX REFERENCE:\n\n metric ton: e3\n grams: e-3\n milligrams: e6\n";
        }
        else if (CustomarySelect == 5) // Pressure
        {
            double a;
            cout << "You are converting from PSI to Pa\n" << "Enter in PSI: "; cin >> a;
            cout << endl;
            cout << "Equal to: " << a * 6894.76 << " Pascal";
            cout << "\n\n 1 Standard Atmosphere = 101325 Pascal ";
        }
        else if (CustomarySelect == 6) // Velocity
        {
            cout << "You are converting from:\n [1] ft/sec\n [2] mi/h";
            int Velo;
            cin >> Velo;
            cout << "You are converting to: \n [1] m/s\n [2] km/h";
            int VeloOut;
            cin >> VeloOut;
            double a;
            
            //Conversion
            if( Velo == 1)
            {
                cout << "Enter in ft/sec: "; cin >> a;
                if (VeloOut == 1)
                {
                    cout << "Equals: " << a * 0.3048 << "m/s";
                }
                else
                {
                    cout << "Equals: " << a * 1.09728 << "km/h";
                }
            }
            else if( Velo == 2)
            {
                cout << "Enter in mi/h: "; cin >> a;
                if (VeloOut == 1)
                {
                    cout << "Equals: " << a * 0.44704 << "m/s";
                }
                else
                {
                    cout << "Equals: " << a * 1.60934 << "km/h";
                }
            }
        }
        else if (CustomarySelect == 7) // Temperature
            {
                double a;
                cout << "Input in degree Farhenheit: "; cin >> a;
                cout << "Convert to:\n [1] degree Celcius\n [2] Kelvin\n";
                int Degree;
                cin >> Degree;
                if(Degree == 1)
                {
                    cout << (a - 32) * 5/9 ;
                }
                else if(Degree==2)
                {
                    cout << (a - 32) * 5/9 + 273.15;
            }    
        }
    }
    
}

int main ()
{
    int i = 1;
    while(i >= 1 )
    {
        Convert();
        cout << "\n\n[   1 to convert again   ]          [   2 to stop converting   ]" <<endl;
        int Decision;
        cin >> Decision;
        if (Decision == 1)
        {
            ++i;
        }
        else
        {
            i = 0;
        }    
    }

    cout << endl;
    system("pause");
    return 0;
}