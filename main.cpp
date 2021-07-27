#include <iostream>
using namespace std;

int main() {
  
  float idade;
  float anoN, mesN, diaN;
  float anoQ, mesQ, diaQ;
 
  cout << "Dia de nascimento: "; cin >> diaN;
  cout << "Mês de nascimento: "; cin >> mesN;
  cout << "Ano de nascimento: "; cin >> anoN;
  
  cout << "Dia qualquer: "; cin >> diaQ;
  cout << "Mês qualquer: "; cin >> mesQ;
  cout << "Ano qualquer: "; cin >> anoQ;

  if (anoN <=0||mesN <=0||diaN <=0||anoQ <=0||mesQ <=0||diaQ <=0) 
  cout << "Dados Invalidos\n";

  if (anoQ < anoN)
  cout << "Dados Invalidos\n";

  else{

    if(mesQ >= mesN || diaQ >= diaN || diaQ <= diaN)
    idade = anoQ - anoN;
    if(mesN >= mesQ && diaQ < diaN)
    idade = anoQ - anoN-1;

    cout << "Idade = " << idade << " ano(s)";
  }

  return 0;
}
