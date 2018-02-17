
#include <iostream>
#include <iomanip>
using namespace std;

void hungry(char &a)
{
  cout <<endl<<endl<<endl<<endl<< "So you must be hungry right now right?!  (Y/N)"<< endl;
  cout << "ermmm i think that's why you are using this application right now >_< hahahaha"<< endl;
  cin >> a;
}

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
    int menu;
    string japan[]={"Udon","Ramen","Sushi","Okonomiyaki","Takoyaki","Tempura","Soba","Onigiri","Japanese Curry Rice","Sashimi","Karaage","Oden","Korokke (Croquette)","Bento","Gyudon (Beef Bowl)","Omurice (Omelette Rice)"};

    system("cls");
    cout << endl << setw(30) << right<< message<<endl;
    cout << "These are the menu for this cuisine" <<endl;
    for(int a=0;a<16;a++)
    {
      cout << setw(8) << right << a+1 <<". " << japan[a] <<endl;
    }
  switch (menu) {
    case 1: cout << "You want to eat " << japan[0] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 2: cout << "You want to eat " << japan[1] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 3: cout << "You want to eat " << japan[2] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 4: cout << "You want to eat " << japan[3] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 5: cout << "You want to eat " << japan[4] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 6: cout << "You want to eat " << japan[5] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 7: cout << "You want to eat " << japan[6] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 8: cout << "You want to eat " << japan[7] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 9: cout << "You want to eat " << japan[8] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 10: cout << "You want to eat " << japan[9] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 11: cout << "You want to eat " << japan[10] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 12: cout << "You want to eat " << japan[11] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 13: cout << "You want to eat " << japan[12] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 14: cout << "You want to eat " << japan[13] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 15: cout << "You want to eat " << japan[14] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    case 16: cout << "You want to eat " << japan[15] << " huh?" << endl << "Okay! The price range will be RM 18-25 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is SUSHI KING. "<<endl<<endl; break;
    default : cout << "YOU BETTER DONT EAT ANYTHING!!!!"<< endl<<endl; break;
  }
}

  void western(const char* message)  // WESTERN
  {
    int menu;
    string west[]={"Chicken Chop","Lamb Chop","Fish and Chips","Meatballs","Cheesy Fries","Onion Rings","Black Pepper Meat Steak","Chicken Maryland","Burger","Macaroni and Cheese","Mashed Potato","Chicken Pie","Sandwich","Mushroom Soup"};

    system("cls");
    cout << endl << setw(30) << right<< message<<endl;
    cout << "These are the menu for this cuisine" <<endl;
    for(int a=0;a<14;a++)
    {
      cout << setw(8) << right << a+1 <<". " << west[a] <<endl;
    }
    cin >> menu;
    switch(menu){
      case 1: cout << "You want to eat " << west[0] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 2: cout << "You want to eat " << west[1] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 3: cout << "You want to eat " << west[2] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 4: cout << "You want to eat " << west[3] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 5: cout << "You want to eat " << west[4] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 6: cout << "You want to eat " << west[5] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 7: cout << "You want to eat " << west[6] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 8: cout << "You want to eat " << west[7] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 9: cout << "You want to eat " << west[8] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 10: cout << "You want to eat " << west[9] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 11: cout << "You want to eat " << west[10] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 12: cout << "You want to eat " << west[11] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 13: cout << "You want to eat " << west[12] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      case 14: cout << "You want to eat " << west[13] << " huh?" << endl << "Okay! The price range will be RM 15-35 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is DOME. "<<endl<<endl; break;
      default : cout << "YOU BETTER DONT EAT ANYTHING!!!!" ; break;

    }
  }

  void korean(const char* message)
  {
    int menu;
    string kpop[]={"Ramyeon","Bibimbap (Mixed Rice)" ,"Jjajangmyeon (Black Bean Noodles)" , "Kimbap","Pancake","Dumpling","Naengmyeon (Cold Noodles)" , "Japchae (Stir Fried Noodles)" , "Tteokbokki (Rice Cake)" , "Yukgaejang (Spicy Shredded Beef Stew)" , "Soondubu Stew (Tofu Stew)" , "Bulgogi (Marinated Beef)" , "Kimchi JJigae (Kimchi Stew)" , "Fried Chicken", "Kimchi"};

    system("cls");
    cout << endl << setw(30) << right<< message<<endl;
    cout << "These are the menu for this cuisine" <<endl;
    for(int a=0;a<15;a++)
    {
      cout << setw(8) << right << a+1 <<". " << kpop[a] <<endl;
    }
    cin >> menu;
    switch(menu){
      case 1: cout << "You want to eat " << kpop[0] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 2: cout << "You want to eat " << kpop[1] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 3: cout << "You want to eat " << kpop[2] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 4: cout << "You want to eat " << kpop[3] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 5: cout << "You want to eat " << kpop[4] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 6: cout << "You want to eat " << kpop[5] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 7: cout << "You want to eat " << kpop[6] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 8: cout << "You want to eat " << kpop[7] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 9: cout << "You want to eat " << kpop[8] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 10: cout << "You want to eat " << kpop[9] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 11: cout << "You want to eat " << kpop[10] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 12: cout << "You want to eat " << kpop[11] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 13: cout << "You want to eat " << kpop[12] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 14: cout << "You want to eat " << kpop[13] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      case 15: cout << "You want to eat " << kpop[14] << " huh?" << endl << "Okay! The price range will be RM 18-24 so bring your money!" << endl<< "---------------------------------"<<endl<<"The nearest restaurant is Dubuyo. "<<endl<<endl; break;
      default : cout << "YOU BETTER DONT EAT ANYTHING!!!!" ; break;

    }
  }

  void local(const char* message)
  {
    int menu;
    string lcl[]={"Nasi Lemak","Lemang","Murtabak","Rojak","Roti Canai","Roti John","Satay","Char Kway Teow","Curry Mee","Laksa","Banana Leaf Rice","Nasi Dagang","Nasi Kerabu","Rendang"};

    system("cls");
    cout << endl << setw(30) << right<< message<<endl;
    cout << "These are the menu for this cuisine" <<endl;
    for(int a=0;a<14;a++)
    {
      cout << setw(8) << right << a+1 <<". " << lcl[a] <<endl;
    }
    cin >> menu;
    switch(menu){
      case 1: cout << "You want to eat " << lcl[0] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl << "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 2: cout << "You want to eat " << lcl[1] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl << "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 3: cout << "You want to eat " << lcl[2] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl << "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 4: cout << "You want to eat " << lcl[3] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl<< "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 5: cout << "You want to eat " << lcl[4] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl<< "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 6: cout << "You want to eat " << lcl[5] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl<< "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 7: cout << "You want to eat " << lcl[6] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl<< "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 8: cout << "You want to eat " << lcl[7] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl<< "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 9: cout << "You want to eat " << lcl[8] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl<< "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 10: cout << "You want to eat " << lcl[9] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl<< "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 11: cout << "You want to eat " << lcl[10] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl<< "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 12: cout << "You want to eat " << lcl[11] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl<< "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl;break;
      case 13: cout << "You want to eat " << lcl[12] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl<< "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      case 14: cout << "You want to eat " << lcl[13] << " huh?" << endl << "Okay! The price range will be RM 8-16 so bring your money!" << endl<< "---------------------------------" <<endl<<"The nearest restaurant is OLD TOWN WHITE COFFEE. "<<endl<<endl; break;
      default : cout << "YOU BETTER DONT EAT ANYTHING!!!!" ; break;
    }
  }
};
main(void)
{
    int craving;
    char lapar;
    cuisine cuis;
    string listcuisine[]={"Japanese", "Korean", "Western", "Local Malaysian"};


    wait();
    loading();
    hungry(lapar);

    if(lapar=='Y'||lapar=='y'){
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
    else{return 0;}

}
