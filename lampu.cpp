#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string lampu;

   raptor_prompt_variable_zzyz ="Lampu : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> lampu;
   if (lampu=="Hijau")
   {
      cout << "Jalan" << endl;   }
   else
   {
      cout << "Berhenti" << endl;   }

   return 0;
}
