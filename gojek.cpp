#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int total;
   int jarak;
   string pilih;

   raptor_prompt_variable_zzyz ="gored/gokar";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> pilih;
   if (pilih=="gored")
   {
      raptor_prompt_variable_zzyz ="Jarak : ";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> jarak;
      if (jarak<=5)
      {
         total =(5*2000)+5000;
         cout << total << endl;      }
      else
      {
         if (jarak<=10)
         {
            total =(10*2500)+7500;
            cout << total << endl;         }
         else
         {
            if (jarak<=15)
            {
               total =(15*3000)+10000;
               cout << total << endl;            }
            else
            {
               cout << "Maapin" << endl;            }
         }
      }
   }
   else
   {
      raptor_prompt_variable_zzyz ="Jarak : ";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> jarak;
      if (jarak<=5)
      {
         total =(5*3000)+15000;
         cout << total << endl;      }
      else
      {
         if (jarak<=10)
         {
            total =(10*4500)+17500;
            cout << total << endl;         }
         else
         {
            if (jarak<=15)
            {
               total =(5*5000)+20000;
               cout << total << endl;            }
            else
            {
               cout << "Maapin" << endl;            }
         }
      }
   }

   return 0;
}
