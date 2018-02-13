#include <iostream>
#include <iomanip>
using namespace std;

void wait()
{
  cout <<endl<< endl<< endl<< endl<< "Press ENTER to continue...." ;
  cin.ignore(1);
}
void loading()
{
      for(int x=0;x<100;x++)
      {
          system("cls");
          cout <<endl<<endl<<endl<<endl<<setw(12)<<right<< x+1 << " percent completed.";
      }
      system("cls");
}
class cuisine
{
private:
public:
  void japanese(const char* message)
  {
    system("cls");
    cout << setw(30) << right<< message<<endl;
    cout << "Places ";
  }
  void western(const char* message)
  {
    system("cls");
    cout << setw(30) << right<< message<<endl;
    cout << "Places ";
  }
  void korean(const char* message)
  {
    system("cls");
    cout << setw(30) << right<< message<<endl;
    cout << "Places ";
  }
  void local(const char* message)
  {
    system("cls");
    cout << setw(30) << right<< message<<endl;
    cout << "Places ";
  }
};
main(void)
{
    int craving;
    char hungry;
    cuisine cuis;
    string listcuisine[]={"Japanese", "Korean", "Western", "Local Malaysian"};

   wait();
    loading();

    cout <<endl<<endl<<endl<<endl<< "Are you hungry right now?  (Y/N)"<< endl;
    cin >> hungry;

    if(hungry=='Y'||hungry=='y')
    {
      system("cls");
      cout <<endl<<endl<< "What kind of cuisine you want to eat?" << endl;
      for(int i=0; i<4; i++)
      {
        cout << setw(14) << right << i+1 <<". " << listcuisine[i] <<endl;
      }
      cin >> craving;

      if(craving == 1)
      {
          cuis.japanese("[ J A P A N E S E ]");
      }
      else if(craving == 2)
      {
          cuis.korean("[ K O R E A N ]");
      }
      else if(craving == 3)
      {
          cuis.western("[ W E S T E R N ]");
      }
      else if(craving == 4)
      {
          cuis.local("[ L O C A L  M A L A Y S I A N ]");
      }
    }
    else
    {
      return 0;
    }

}
