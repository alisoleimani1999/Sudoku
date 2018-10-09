#include <iostream>
#include <random>
using namespace std;

void sudoku() {
    //Creación de variables
    int num = 0;

    //Creando del menú
    cout << ("Juego de Sudoku");
    cout << endl << endl;
    cout << "Presiona 1 para generar el sudoku: " << endl;
    cin >> num;

    //Creacion de condicionales
    if (num==1){

        //Declaracion de variables
        int N[9][9]={};
        int random ;
        int matriz_1 = 0;
        int matriz_2 = 0;
        int matriz_3 = 0;
        int matriz_4 = 0;
        int matriz_5 = 0;
        int matriz_6 = 0;
        int matriz_7 = 0;
        int matriz_8 = 0;
        int matriz_9 = 0;
        int sumatotal = 0;
        bool rep = false;

        //Creando la matriz aleatoria
        random_device rand;
        cout<<endl;
        for (size_t i= 0; i < 9; i++) {
            for (size_t j= 0; j < 9; j++) {
                //Usando la libreria #include <random> para imprimir los numeros aleatorios
                random = rand()%9 + 1;
                N[i][j] = random;
                if (j == 3 || j == 6){
                    cout << "|";
                    cout << N[i][j] << " ";
                }
                else
                    cout << N[i][j] << " ";
            }
            cout << endl;
            if (i == 2 || i == 5){
                cout << "-------------------";
                cout << endl;
            }
        }
        cout<< endl;

        //Creando un bucle y condiciones para buscar numeros repetidos, aunque no nos salio.
        for(size_t z= 0; z<9; z++){
            if (N[0][0]==N[0][z] || N[0][0]==N[z][0]){

                rep = true;
            }
        }

        if(rep){
            cout<<"El tablero no fue llenado de forma valida";
        }
        else{
            cout<<"El tablero si fue llenado de forma valida";
        }
    }
    else{
        cout<<"El numero no es valido";
        exit (-1);
    }
}

int main(){
    sudoku();
    return 0;
}