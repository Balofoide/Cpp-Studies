#include <iostream>


//Codigo que utilizado algoritimo de luhn para verificar se um cartão é valido 
//o Algoritimo consiste em dividir o numero do cartão em duas partes
//de numeros impares e numeros pares

//Todo segundo digito da direita pra esquerda para esquerda será dobrado e se o numero der 2 digitos será dividido
//Adicione todo numero sozinho do primeiro passo
//Adicione todo numero impar da direita para esquerda
//Some os dois resultados
//se o numero for divisivel por 10 ele é um cartão valido


int getDigito(const int numero);
int somaDigitoPar(const std::string cartaoNumero);
int somaDigitoImpar(const std::string cartaoNumero);

int main() {

  std::string cartaoNumero;

  int resultado = 0;

  std::cout << "Digite o numero do cartao de credito: ";
  std::cin >> cartaoNumero;

  resultado = somaDigitoImpar(cartaoNumero) + somaDigitoPar(cartaoNumero);

  if (resultado % 10 == 0) {

    std::cout << cartaoNumero << "  VALIDO!!"
              << "\n";

  } else {
    std::cout << cartaoNumero << "  INVALIDO!!"
              << "\n";
  }
  return 0;
}

int getDigito(const int numero) { return numero % 10 + (numero / 10 % 10); }

int somaDigitoPar(const std::string cartaoNumero) {

  int soma = 0;

  for (int i = cartaoNumero.size() - 1; i >= 0; i -= 2) {
    soma += cartaoNumero[i] - '0';
  }
  return soma;
}

int somaDigitoImpar(const std::string cartaoNumero) {

  int soma = 0;

  for (int i = cartaoNumero.size() - 2; i >= 0; i -= 2) {

    soma += getDigito((cartaoNumero[i] - '0') * 2);
  }
  return soma;
}
