#include "header.h"



int check(char choices[], char input){

  if(choices[0]== choices[1] && choices[1] == choices[2] && choices[0] == input){
    //user winning
    if(input == 'X'){
      cout<<"\nYou have won the game!\n";
      return 1;
    }
    //computer winning
    else{
      cout<<"\nYou have lost the game!\n";
      return 1;
    }
  }
  //case 2
  if(choices[3]== choices[4] && choices[4] == choices[5] && choices[3] == input){
    //user winning
    if(input == 'X'){
      cout<<"\nYou have won the game!\n";
      return 1;
    }
    //computer winning
    else{
      cout<<"\nYou have lost the game!\n";
      return 1;
    }
  }
  //case 3
  if(choices[6]== choices[7] && choices[7] == choices[8] && choices[6] == input){
    //user winning
    if(input == 'X'){
      cout<<"\nYou have won the game!\n";
      return 1;
    }
    //computer winning
    else{
      cout<<"\nYou have lost the game!\n";
      return 1;
    }
  }
  //case 4
  if(choices[0]== choices[3] && choices[3] == choices[6] && choices[0] == input){
    //user winning
    if(input == 'X'){
      cout<<"\nYou have won the game!\n";
      return 1;
    }
    //computer winning
    else{
      cout<<"\nYou have lost the game!\n";
      return 1;
    }
  }
  //case 5
  if(choices[1]== choices[4] && choices[4] == choices[7] && choices[1] == input){
    //user winning
    if(input == 'X'){
      cout<<"\nYou have won the game!\n";
      return 1;
    }
    //computer winning
    else{
      cout<<"\nYou have lost the game!\n";
      return 1;
    }
  }
  //case 6
  if(choices[2]== choices[5] && choices[5] == choices[8] && choices[2] == input){
    //user winning
    if(input == 'X'){
      cout<<"\nYou have won the game!\n";
      return 1;
    }
    //computer winning
    else{
      cout<<"\nYou have lost the game!\n";
      return 1;
    }
  }
  //case 7
  if(choices[0]== choices[4] && choices[4] == choices[8] && choices[0] == input){
    //user winning
    if(input == 'X'){
      cout<<"\nYou have won the game!\n";
      return 1;
    }
    //computer winning
    else{
      cout<<"\nYou have lost the game!\n";
      return 1;
    }
  }
  //case 8
  if(choices[2]== choices[4] && choices[4] == choices[6] && choices[2] == input){
    //user winning
    if(input == 'X'){
      cout<<"\nYou have won the game!\n";
      return 1;
    }
    //computer winning
    else{
      cout<<"\nYou have lost the game!\n";
      return 1;
    }
  }
  //case 9
  if(choices[0] != '1' && choices [1] != '2' && choices[2] != '3' && choices [3] != '4' && choices[4] != '5' && choices [5] != '6' && choices[6] != '7' && choices [7] != '8' && choices [8] != '9'){
    cout<<"\nIt is a tie!\n";
    return 1;
  }
  return 0;
}

int enter(char choices[], char input){
  
  int index = input - '0';
  if(choices[index-1] == input ){
    return 1;
  }
  else{
    return 0;
  }

}
