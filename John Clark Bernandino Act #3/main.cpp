#include <iostream>

using namespace std;

int main()
{
    int hour;
    int minutes;
    int seconds;
    int time_in_sec;

    cout << "Enter Exact hours : " << endl;
    cin >> hour;

    cout << "Enter Exact minutes : "<< endl;
    cin >> minutes;

    cout << "Enter Exact seconds : "<< endl;
    cin >> seconds;
    cout << endl;

    time_in_sec = ( hour * 3600) + (minutes  * 60) + seconds;

    cout << "__________________________________________________________" << endl << endl;
    cout << " Converted Hours in Second will be: " <<time_in_sec  <<" seconds " << endl<< endl;
    cout << "__________________________________________________________" << endl << endl;
    cout << " Submitted by :  John Clark L. Bernandino" << endl<< endl;
    cout << " Submitted to : Dennis Zapanta Espiritu " << endl << endl ;
    cout << " Course/ Code/ Program :  BS CPE 2" << endl;
    cout << "__________________________________________________________" << endl;
    return 0;
}
