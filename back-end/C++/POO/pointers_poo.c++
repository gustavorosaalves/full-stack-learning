Tema: Smart Pointers (std::unique_ptr, std::make_unique e std::move)

Exercício: Crie uma função criarLivro(string titulo) que retorna um unique_ptr<Livro>. 
No main, crie uma lista de livros utilizando um vetor de unique_ptr<Livro> e inicialize cada livro 
diretamente com make_unique, atribuindo títulos diferentes para cada um. Em seguida, percorra o vetor 
e exiba os títulos de todos os livros criados. Depois, transfira a posse do primeiro livro para um 
ponteiro separado usando move() e verifique que o ponteiro original ficou vazio (nullptr). Por fim, 
exiba o título do livro que foi transferido para o ponteiro separado.
 
#include <iostream>
#include <memory>
#include <vector>
#include <string>
using namespace std;

class Livro {
public:
    string titulo;
    Livro(string titulo) : titulo(titulo) {}
};

unique_ptr<Livro> criarLivro(string titulo) {
    return make_unique<Livro>(titulo);
}

int main() {
    vector<unique_ptr<Livro>> biblioteca;

    biblioteca.push_back(criarLivro("Clean Code"));
    biblioteca.push_back(criarLivro("O Programador Pragmatico"));
    biblioteca.push_back(criarLivro("Estruturas de Dados em C++"));

    cout << "--- Livros na Biblioteca ---" << endl;
    for (const auto& livro : biblioteca) {
        cout << "- " << livro->titulo << endl;
    }

    unique_ptr<Livro> livroEmprestado = move(biblioteca[0]);

    cout << "\nVerificando ponteiro original no vetor: " 
         << (biblioteca[0] == nullptr ? "Vazio (nullptr)" : "Ainda ocupado") << endl;

    if (livroEmprestado != nullptr) {
        cout << "Livro no ponteiro separado: " << livroEmprestado->titulo << endl;
    }

    return 0;
}