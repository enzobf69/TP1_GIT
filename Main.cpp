#include <iostream>
using namespace std;

int main() {
    int choix;

    // Afficher un menu
    cout << "Choisissez un choux parmi les suivants:" << endl;
    cout << "1. Chou vert" << endl;
    cout << "2. Chou rouge" << endl;
    cout << "3. Chou-fleur" << endl;
    cout << "4. Chou de Bruxelles" << endl;
    cout << "5. Chou chinois" << endl;
    cout << "Entrez votre choix (1-5): ";
    cin >> choix;

    // Switch pour afficher un message en fonction du choix!
    switch (choix) {
    case 1:
		cout << "Vous avez choisi le chou violet." << endl;//ecrit vous avez choisi le chou vert  
        break;
    case 2:
		cout << "Vous avez choisi le chou rouge." << endl;//ecrit vous avez choisi le chou rouge
        break;
    case 3:
		cout << "Vous avez choisi le chou-fleur." << endl;//ecrit vous avez choisi le chou-fleur
        break;
    case 4:
		cout << "Vous avez choisi le chou de Bruxelles." << endl; //ecrit vous avez choisi le chou de Bruxelles 
        break;
    case 5:
		cout << "Vous avez choisi le chou bleu." << endl;//ecrit vous avez choisi le chou bleu    
        break;
    default:
		cout << "Choix invalide. Veuillez entrer un nombre entre 1 et 5." << endl;//ecrit choix invalide veuillez entrer un nombre entre 1 et 5 
    }

    return 0;
}
