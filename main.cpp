#include <iostream>
#include <math.h>
using namespace std;
// PROJECTS_1

   void Rectangle() //by Maksims Mihajlovs
   {
   int sideA, sideB, area;
   cout <<"Ievadiet tainsturu garumu: ";
   cin >> sideA;
   cout <<"Ievadiet taisnsturu platumu: ";
   cin >> sideB;
   
   area = sideA * sideB;

   cout <<"Taisnstūra laukums: " << area << endl;
   }

void Square()//by Maksims Fedosejevs
{
  int a, S; 
  cout << "Ievadiet kvadrata malu" <<endl;
  cin >> a;
  S=a*a;
  cout <<"Kvadrāta laukums: "<< S;
}


  

void Paralelogram_angle () // by Ekaterina Blinova
{
  int a, b, x; 
  float pa;

  cout << "\n Paralelograma mala ir: ";
  cin >> a;
  cout << "\n Paralelograma otra mala ir: ";
  cin >> b; 
  cout << "\n Paralelograma lenķu vērtība ir: ";
  cin >> x;
  cout << "\n Paralelograma laukums ir: ";
  pa = a*b*sin(x*3.14/180); 
  cout <<"Paralelograma laukums: "<< pa;
}

void Triangle()// by Diana Vanovicha
{
  int mala,augstums;
  cout << "Ievadiet malu un augstumu" << endl;
  cin >> mala >> augstums;
  float Laukums = (mala * augstums)/2;
  cout <<"Trijstūra laukums: "<< Laukums << endl;

}

void Paralelogram()  // by Diana Tureiko
{
  int pamats, augstums, S;
  cout << "Ievadiet paralelograma pamatu un augstumu"<<endl;
  cin >>  pamats >> augstums; 
  S = pamats * augstums;    
  cout << "Paralelograma laukums ir "<< S;    
}

void Trapeze() //by Denis Tomko
  {
  cout << "lai uzzināt Trapecijas laukumu uzraksti augstumu un pamati" << endl ;
  int h,a,b;
  cin >> h ;
  cin >> a ;
  cin >> b ;
  int STr=(a+b)*h/2;
  cout << "Trapecijas laukums = " << STr << endl ;
  }

void Circle ()  // by Anna Butujeva
{
  float R, S;
  cout << "Riņķa rādiuss ir " ;
  cin >> R;
  S=R*R*3.14;
  cout << "Riņķa laukums ir " << S << endl;
 }

  
  void Triangle_angle()  // by Kristina Lapinska

{
 int a, b, y;
 float S;
  cout << "Trijstūra pamats ir ";
  cin >> a;
  cout << "Trijstūra sānu mala ir ";
  cin >> b;
  cout << "Trijstura leņķa vērtība ir ";
  cin >> y;
  S=a*b*sin(y*3.14/180)/2;
  cout << "Trijstūra laukums " << S;
}
  
  int main() {
   
  cout << "Programma pieprasa figūras elementus un aprēķina to laukumu. \n";
  cout << " Ievadiet burtus:\n";
  cout << "T  - ja figūra ir trijstūris" << endl;
  cout << "Tr  - ja figūra ir trapece" << endl;
  cout << "P  - ja figūra ir paralelograms" << endl;
  cout << "Ta  - ja figūra ir tainstūris" << endl;
  cout << "K  - ja figūra ir kvadrāts" << endl;
  cout << "R  - ja figūra ir riņķis" << endl;
  cout << "_____________________________________" << endl;
  cout << endl;

  string user_answer;
  cin >> user_answer;

  if (user_answer=="K" || user_answer=="k")
  {
    Square();
  }
  
  if (user_answer=="Ta"|| user_answer=="ta")
  {
    Rectangle();
  }

  if (user_answer=="Tr"|| user_answer=="tr")
  {
    Trapeze();
  }

  if (user_answer=="R"|| user_answer=="r")
  {
    Circle();
  }

  if (user_answer=="T"|| user_answer=="t")
  {
    cout << "Vai zinams trijstūra leņkis? Nospiediet 1, ja zinams, ja nē, nospiediet 2" << endl;
    int atb;
    cin >> atb;
    if (atb ==1 ) { Triangle_angle();}
      else {Triangle();}
  }
   if (user_answer=="P"|| user_answer=="p")
  {
    cout << "Vai zinams paralelograma leņkis? Nospiediet 1, ja zinams, ja nē nospiediet 2" << endl;
    int atb;
    cin >> atb;
    if (atb ==1 ) { Paralelogram_angle();}
      else {Paralelogram();}
  }
  
  return 0;
}