#include<iostream>
using namespace std;

int main(){
  cout << "#include<iostream>" << endl << 
  "using namespace std;" << endl << 
  "int main(){" << endl;
  cout << "  int choice1, choice2;" << endl;
  cout << "  cout << \"enter two numbers to add\" << endl;" << endl;
  cout << "  cin >> choice1;" << endl;
  cout << "  cin >> choice2;" << endl;

  for(int i = 0; i < 100; i++){
    for(int k = 0; k < 100; k++){
      cout << "  if(choice1 == " << i << " && choice2 == " << k << "){cout << " << i + k << " << endl;}" << endl << endl;
    }
  }

  cout << "  return 0;" << endl;
  cout << "}" << endl;
  return 0;
} 
