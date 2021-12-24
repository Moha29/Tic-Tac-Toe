#include "header.h"

int main() {
  srand (time(NULL));
  char choices[] = {'1','2','3','4','5','6','7','8','9'};
  char user_choice;
  int valid;
  char com_choice;
  int random;
  int input;
  int end = 0;

 
  while(end == 0){
  //Display the game
  cout<<'\n'<<choices[0]<<" | "<<choices[1]<<" | "<<choices[2]<<"\n~~~~~~~~~~\n"<<choices[3]<<" | "<<choices[4]<<" | "<<choices[5]<<"\n~~~~~~~~~~\n"<<choices[6]<<" | "<<choices[7]<<" | "<<choices[8]<<'\n';
  
  //Get the user's choice
  cout<<"\nWhere do you want to play (1-9): ";
  cin>>user_choice;
  cin.ignore(100,'\n');
  while(user_choice-'0' < 1 || user_choice-'0' > 9){
    cout<<"\nWhere do you want to play (1-9): ";
    cin>>user_choice;
    cin.ignore(100,'\n');
  }
  //Check if the user's choice is taken
  if(enter(choices,user_choice) == 0){
    cout<<"You cannot play there!";
    end = 0;
  }
  //Procees with the game
  else{
    //Get the user choice into the array
    int index1 = user_choice - '0';
    choices[index1 - 1] = 'X';

    //Check if the user wins
    end = check(choices,'X');

    //Proceed with the game
    if(end == 0){
      //Display the game before the computer plays
      cout<<'\n'<<choices[0]<<" | "<<choices[1]<<" | "<<choices[2]<<"\n~~~~~~~~~~\n"<<choices[3]<<" | "<<choices[4]<<" | "<<choices[5]<<"\n~~~~~~~~~~\n"<<choices[6]<<" | "<<choices[7]<<" | "<<choices[8]<<'\n';

      //The computer's turn to pick
      random = rand() % 9 + 1; //Set a random number
      
      //Check if the choice is taken
      while(enter(choices,com_choice) == 0){
        random = rand() % 9 + 1;
        com_choice = random + '0';
      }
      //Place the computer's choice
      int index2 = random;
      choices[index2 - 1] = 'O';
      cout<<"\nComputer has played in: "<<random<<'\n';
      //Check if the computer wins
      end = check(choices,'O');

    }
    
    }

  }
    cout<<"\nThe match result:\n";
    cout<<'\n'<<choices[0]<<" | "<<choices[1]<<" | "<<choices[2]<<"\n~~~~~~~~~~\n"<<choices[3]<<" | "<<choices[4]<<" | "<<choices[5]<<"\n~~~~~~~~~~\n"<<choices[6]<<" | "<<choices[7]<<" | "<<choices[8]<<'\n';



  return 0;
} 
