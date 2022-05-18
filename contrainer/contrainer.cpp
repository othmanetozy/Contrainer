// contrainer.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <deque>
#include <iostream>
#include<list>
#include<stack>
using namespace std;


bool palindrome(string A)
{
	stack<char>	p;
	for (int i = 0; i < A.size(); i++)
	{
		p.push(A[i]);
	}
	int i = 0;
	bool var = true;
	while (!p.empty()) 
	{
		if (A[i] == p.top() )
		{
			i++;
		}
		else
		{
			var = false;
				cout << "ce n'est pas un palindrome " << endl;
				break;
		}		
	}
	return var;
}
int main()
{
	int N , i;
	string Mot;
	cout << "stocker le nombre " << endl;
	cin >> N;
	deque<string>d;
	for (i = 0; i < N; i++)
	{
		cout << "le mot est" << endl;
		cin >> Mot;
		d.push_back(Mot);
	}

	list<string>l;
	deque<string>::iterator it;
	for (it=d.begin(); it != d.end(); it++)
	{
		l.push_back(*it);
	}
	list<string>::iterator it1;
	for (it1=l.begin(); it != d.end(); it1++)
	{
		cout << *it1 << endl;

	}


	string phrase = "aya ayaayaaya";
	phrase.erase(remove(phrase.begin(),phrase.end(),' '),phrase.end());
	cout << phrase << endl;
	if (palindrome(phrase))
	{
		cout << "c'est un palindrome" << endl;
	}
	else
	{
		cout << "ce n'est pas un palindrome" << endl;
	}
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
