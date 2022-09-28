#include <iostream>
using namespace std;

int main()
{
    int x[5];
    int j, aux;

    for (int i = 0; i <= 4; i++)
    {
        cout << "Digite o " << i + 1 << "º numero: ";
        cin >> x[i];
    }
    
    for (int i = 1; i <= 4; i++)
        {
        aux = x [i];
        j = i - 1;
                    // laço que vai percorrer os elementos a esquerda do numero na variável 'aux'
                    // ou até encontrar a posiçao para recolaçao do numero da 'aux',
                    // de acordo com a ordenação buscada.
        while (j >= 0 && x[j] > aux)
        {
            x[j + 1] = x[j];
            j = j - 1;
        }
        x[j + 1] = aux;
    }
    // mostrando os valores ordenados em ordem cerscente.   
    for (int i = 0; i <= 4; i++)
    {
        cout << "\n " << i + 1 << " º numero " << x[i]<<endl;
        cout << "\t ";
        
    }

    return 0;
}