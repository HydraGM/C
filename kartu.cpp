#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string kartu;
   string bonus;

   raptor_prompt_variable_zzyz ="Masukkan kartu anda GOLD/PREMIUM : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> kartu;
   if (kartu=="gold" || kartu=="GOLD" || kartu=="Gold")
   {
      raptor_prompt_variable_zzyz ="Pilih bonus anda AMBIL/TUKAR : ";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> bonus;
      if (bonus=="ambil" || bonus=="AMBIL" || bonus=="Ambil")
      {
         cout << "Kartu anda : "+kartu+" Selamat bonus anda telah diambil" << endl;      }
      else
      {
         cout << "Kartu anda : "+kartu+" Selamat bonus anda telah masuk ke poin" << endl;      }
   }
   else
   {
      raptor_prompt_variable_zzyz ="Pilih bonus anda AMBIL/TUKAR : ";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> bonus;
      if (bonus=="ambil" || bonus=="AMBIL" || bonus=="Ambil")
      {
         cout << "Kartu anda : "+kartu+" Selamat bonus anda telah diambil" << endl;      }
      else
      {
         cout << "Kartu anda : "+kartu+" Selamat bonus anda telah masuk ke poin" << endl;      }
   }

   return 0;
}
