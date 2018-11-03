#include <iostream>

using namespace std;

//AULA CONDICIONAIS

//MELHOR ALUNO
int main(){
      double a, b;

      cin >> a >> b;

      if(a<=b){
        cout << "Pedro" << endl;
      }else{
        cout << "Paulo" << endl;
      }

      return 0;
}

//MAIOR AREA
int main(){
  int l1, l2, a1, a2, area1, area2;

  cin >> l1 >> a1;
  cin >> l2 >> a2;

  area1 = l1*a1/2;
  area2 = l2*a2/2;

  if(area1 > area2){
    cout << "Primeiro" << endl;
  }else if(area1 < area2){
    cout << "Segundo" << endl;
  }else{
    cout << "Empate" << endl;
  }

//FLIPER
int main(){
  int p, r;

  cin >> p >> r;

  if(p == 0)
    cout << "C" << endl;
  else if (p == 1 && r == 0)
    cout << "B" << endl;
  else
    cout << "A" << endl;
}

//MEDALHAS
int main(){
  int t1, t2, t3;
  char a, b, c;

  cin >> t1 >> t2 >> t3;

  if(t1<t2 && t1<t3)
    a = '1';
  else if((t1<t2 && t1>t3) || (t1>t2 && t1<t3))
    b = '1';
  else
    c = '1';

  if(t2<t1 && t2<t3)
    a = '2';
  else if((t2<t1 && t2>t3) || (t2>t1 && t2<t3))
    b = '2';
  else
    c = '2';

  if(t3<t1 && t3<t2)
    a = '3';
  else if((t3<t1 && t3>t2) || (t3>t1 && t3<t2))
    b = '3';
  else
    c = '3';

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
}
