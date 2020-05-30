#include <iostream>
using namespace std;

void Convert()
{
     cout << endl << "[   1 for metric ==> imperial   ]              [   2 for US customary ==> metric   ]\n\n";
    int UserInput;
    cin >> UserInput;
    cout << endl;

    //Metric to imperial
    if ( UserInput==1 )
    {
        cout << "[    1 for length   ]\n[    2 for area   ]\n[    3 for volume   ]\n";
        cout << "[    4 for mass   ]\n[    5 for pressure   ]\n[    6 for velocity      ]\n[    7 for temperature   ]\n";
        int MetricSelect;
        cin >> MetricSelect;
        cout << endl;

        // 1) length
        // 2) area 
        // 3) volume
        // 4) mass 
        // 5) pressure
        // 6) velocity
        // 7) temperature

             if (MetricSelect == 1) // length
        {
            cout << "PREFIX REFERENCE:\n\nmega: e6\nkilo: e3\ncenti: e-2\nmilli: e-3\nmicro: e-6\nnano: e-9\n\n";

            //input length value and conversion
            float Length;
            cout << "Input in meters: "; cin >> Length;
            cout << "[1] inch\n[2] feet\n[3] yard\n[4] mile\n";
            int ChoiceLength;
            cin >> ChoiceLength;

            //conversion
            if (ChoiceLength ==1)
            {cout << "Equals: " << Length * 39.3701;}
            else if (ChoiceLength == 2)
            {cout << "Equals: " << Length * 3.28084;}
            else if (ChoiceLength == 3)
            {cout << "Equals: " << Length * 1.09361;}
            else
            {cout << "Equals: " << Length * 0.000621371;}
            
        }
        else if (MetricSelect == 2) // Area
        {
            cout << "PREFIX REFERENCE:\n\nmega: e6\nkilo: e3\ncenti: e-2\nmilli: e-3\nmicro: e-6\nnano: e-9\n\n";
            
            //input area value and select conversion
            float Area;
            cout << "Input in meter squared: "; cin >> Area;
            cout << "[1] inch squared\n[2] feet squared\n[3] mile squared\n";
            int ChoiceArea;
            cin >> ChoiceArea;

            //convert
            if (ChoiceArea ==1)
            {cout << "Equals: " << Area * 1550;}
            else if (ChoiceArea == 2)
            {cout << "Equals: " << Area * 10.763888889;}
            else
            {cout << "Equals: " << Area * 3.861013863421144847e-7;}
        }
        else if (MetricSelect == 3) // Volume
        {
            cout << "PREFIX REFERENCE:\n\nmega: e6\nkilo: e3\ncenti: e-2\nmilli: e-3\nmicro: e-6\nnano: e-9\n\n";
            
            //input volume value and select conversion
            float Vol;
            cout << "Input in cubic meter: "; cin >> Vol;
            cout << "[1] gallon\n[2] quart\n[3] pint\n[4] cup\n[5] ounce\n";
            int ChoiceVol;
            cin >> ChoiceVol;

            //convert
            if (ChoiceVol ==1)
            {cout << "Equals: " << Vol * 264.172;}
            else if (ChoiceVol == 2)
            {cout << "Equals: " << Vol * 1056.68799999699;}
            else if (ChoiceVol == 3)
            {cout << "Equals: " << Vol * 2113.3759999939798035;}
             else if (ChoiceVol == 4)
            {cout << "Equals: " << Vol * 4166.6658408333314583;}
             else
            {cout << Vol * 33814.015999903684133;}
            
        }
        else if (MetricSelect == 4) // Mass
        {
             cout << "PREFIX REFERENCE:\n\nmega: e6\nkilo: e3\ncenti: e-2\nmilli: e-3\nmicro: e-6\nnano: e-9\n\n";
            
            //input mass value and select conversion
            float Mass;
            cout << "Input in kg: "; cin >> Mass;
            cout << "[1] slug\n[2] US ton\n[3] pound\n[4] ounce\n";
            int ChoiceMass;
            cin >> ChoiceMass;

            //convert
            if (ChoiceMass ==1)
            {cout << "Equals: " << Mass * 0.0685218;}
            else if (ChoiceMass == 2)
            {cout << "Equals: " << Mass * 0.00110231186493503;}
            else if (ChoiceMass == 3)
            {cout << "Equals: " << Mass * 2.2046237298700597229;}
            else
            {cout << "Equals: " << Mass * 35.273979677920955567;}
            
        }
        else if (MetricSelect == 5) // Pressure
        {
            cout << "PREFIX REFERENCE:\n\nmega: e6\nkilo: e3\ncenti: e-2\nmilli: e-3\nmicro: e-6\nnano: e-9\n\n";
            
            //input pressure value and select conversion
            float Pressure;
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
                float VeloKm;
                cout << "Input in km/h: "; cin >> VeloKm;
                cout << "[1] mi/h\n[2] ft/sec\n";
                int ChoiceVeloKm;
                cin >> ChoiceVeloKm;

                //convert
                if (ChoiceVeloKm ==1)
                {cout << "Equals: " << VeloKm * 0.621371 ;}
                else
                {cout << "Equals: " << VeloKm * 0.9113441333297608 ;}
            }
            else                 // m per second to customary
            {
                float VeloM;
                cout << "Input in m/s: "; cin >> VeloM;
                cout << "[1] mi/h\n[2] ft/sec\n";
                int ChoiceVeloM;
                cin >> ChoiceVeloM;

                //convert
                if (ChoiceVeloM ==1)
                {cout << "Equals: " << VeloM * 2.2369355999910522925 ;}
                else
                {cout << "Equals: " << VeloM * 3.2808388799868768437 ;}
            }
        }
           else                     // Temperature
        {
           //input temp value and select conversion
            float Temp;
            cout << "Input in degree Celcius: "; cin >> Temp;
            cout << "[1] Degree Fahrenheit\n[2] Kelvin\n";
            int ChoiceTemp;
            cin >> ChoiceTemp;

            //convert
            if (ChoiceTemp == 1)
            {cout << "Equals: " << (Temp*9/5) + 32;}
            else
            {cout << "Equals: " << Temp +  273.15;} 
        }
        
    }
    
    
    //US customary to metric
    else
    {
        cout << "[    1 for length   ]\n[    2 for area   ]\n[    3 for volume   ]\n";
        cout << "[    4 for mass   ]\n[    5 for pressure   ]\n[    6 for velocity      ]\n[    7 for temperature   ]\n";
        int CustomarySelect;
        cin >> CustomarySelect;
        cout << endl;

        // 1) length
        // 2) area 
        // 3) volume
        // 4) mass 
        // 5) pressure
        // 6) velocity
        // 7) temperature

        
    }
    
}

int main ()
{
    int i = 1;
    while(i >= 1 )
    {
        Convert();
        cout << "\n\n[   1 to convert more   ]          [   2 to stop converting   ]" <<endl;
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