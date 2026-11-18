Tema: Integração de Pilares da POO (Encapsulamento, Static, Construtores/Destrutores, Herança e Polimorfismo)

Exercício: Crie uma classe Veiculo que possua atributos privados marca e ano, 
garantindo encapsulamento por meio de métodos públicos getters e setters. Implemente um método estático 
para mostrar a quantidade total de veículos criados. Utilize construtor para inicializar os atributos e 
destrutor para exibir mensagem de destruição do objeto.
A partir da classe Veiculo, crie duas classes derivadas Carro e Moto usando herança pública. Cada classe 
derivada deve possuir pelo menos um atributo adicional privado, métodos getters e setters correspondentes, 
e sobrescrever o método mover da classe base, aplicando polimorfismo em tempo de execução.
No main, crie pelo menos um objeto de cada classe, utilize os getters e setters para modificar e acessar 
os atributos, teste os métodos sobrescritos para observar o polimorfismo, e utilize o método estático 
para exibir a quantidade total de veículos criados.

#include <iostream>
#include <string>
using namespace std;

class Veiculo {
private:
    string marca;
    int ano;
    static int totalVeiculos;

public:
    Veiculo(string marca, int ano) {
        this->marca = marca;
        this->ano = ano;
        totalVeiculos++;
    }

    virtual ~Veiculo() {
        cout << "Destruindo veiculo da marca: " << marca << endl;
    }

    void setMarca(string marca) { this->marca = marca; }
    string getMarca() const { return marca; }

    void setAno(int ano) { this->ano = ano; }
    int getAno() const { return ano; }

    virtual void mover() const {
        cout << "O veiculo " << marca << " (" << ano << ") esta se movendo." << endl;
    }

    static int getTotalVeiculos() {
        return totalVeiculos;
    }
};

int Veiculo::totalVeiculos = 0;

class Carro : public Veiculo {
private:
    int portas;

public:
    Carro(string marca, int ano, int portas) : Veiculo(marca, ano) {
        this->portas = portas;
    }

    void setPortas(int portas) { this->portas = portas; }
    int getPortas() const { return portas; }

    void mover() const override {
        cout << "O carro " << getMarca() << " (" << getAno() << ") de " 
             << portas << " portas esta dirigindo na estrada." << endl;
    }
};

class Moto : public Veiculo {
private:
    int cilindradas;

public:
    Moto(string marca, int ano, int cilindradas) : Veiculo(marca, ano) {
        this->cilindradas = cilindradas;
    }

    void setCilindradas(int cilindradas) { this->cilindradas = cilindradas; }
    int getCilindradas() const { return cilindradas; }

    void mover() const override {
        cout << "A moto " << getMarca() << " (" << getAno() << ") de " 
             << cilindradas << "cc esta acelerando na pista." << endl;
    }
};

int main() {
    Carro* c1 = new Carro("Toyota", 2023, 4);
    Moto* m1 = new Moto("Honda", 2024, 600);

    c1->setAno(2025);
    m1->setCilindradas(1000);

    cout << "Total de veiculos criados: " << Veiculo::getTotalVeiculos() << "\n" << endl;

    Veiculo* garagem[2] = { c1, m1 };

    for (int i = 0; i < 2; i++) {
        garagem[i]->mover();
    }

    cout << endl;

    delete c1;
    delete m1;

    return 0;
}