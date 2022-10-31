#include <iostream>
#include <string>

using namespace std;

struct veiculos
{
    string modelo;
    string marca;
    float valor;
    bool trio;
    bool direcao;
    bool ar_condicionado;
};
//seleciona a ultima posição vazia do array
void addArray(veiculos listVeiculos[],veiculos veiculo){
    for(int i=0;i<10;i++){
        if(listVeiculos[i].modelo==""){
            listVeiculos[i]=veiculo;
            break;
        }
    }
}

void incluiVeiculos(veiculos veiculo[]){
    string continua;
    string marca;
    string modelo;
    veiculos veic;
    float valor;
    continua="s";
    while (continua != "n")
    {
        cout << "Insira a marca do veiculo";
        cin>>marca;
        cout << "Insira a modelo do veiculo";
        cin>>modelo;
        cout << "Insira o valor do veiculo";
        cin>>valor;
        veic.modelo=marca;
        veic.marca=modelo;
        veic.valor=valor;
        addArray(veiculo,veic);
        cout << "Deseja continuar ?";
        cin>>continua;
    }
}

int main(){
    veiculos veiculo[10];
    incluiVeiculos(veiculo);
    for(int i=0;i<10;i++){
        cout<<veiculo[i].modelo;
    }
}