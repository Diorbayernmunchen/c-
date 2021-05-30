#include <iostream>
using namespace std;
int main()
{
    int a;

   cout << "a = "; cin >> a;

   switch (a)
   {
   case 12:
   case 1:
   case 2:
       cout << "Qish";  break;

    case 3:
   case 4:
   case 5:
       cout << "Bahor";  break;

         case 6:
   case 7:
   case 8:
       cout << "Yoz";  break;

         case 9:
   case 10:
   case 11:
       cout << "Kuz";  break;
   
   default: cout << "Bunday oy yoq 1 dan 12 gacha son kiriting";
       break;
   } 



    return 0;
}