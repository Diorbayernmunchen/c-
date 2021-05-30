// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c, Max;
//     cout << "a = "; cin >> a;
//     cout << "b = "; cin >> b;
//     cout << "c = "; cin >> c;
 
//     if (a > b  &&  a > c)
//     {
//         Max = a;
//     }

//     if (a < b  &&  b > c)
//     {
//          Max = b;
//     }

//     if (a < c  &&  b < c)
//     {
//         Max = c;
//     }


//     cout << "Kottasi = " << Max << endl;
    
    
    

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c, Max;
    
//     cout << "a = "; cin >> a;
//     cout << "b = "; cin >> b;
//     cout << "c = "; cin >> c;

//     if (a > b)
//     {
//         Max = a;
//     }
//     else
//         Max = b;
    
//     if (Max < c)
//     {
//         Max =  c;
//     }

//     cout << "Kottasi = " << Max;

//     return 0;
// }



#include <iostream>
using namespace std;
int main()
{
    int a, b, c, Max;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    Max = (a > b) ? a : b;
    Max = (Max < c) ? c : Max;

    cout << "Kottasi = " << Max;


return 0;
}