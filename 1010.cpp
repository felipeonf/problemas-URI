#include <iostream>

using namespace std;

int main() {
  int codigo_produto_1,codigo_produto2, qtd_produtos_1, qtd_produtos_2;
  double preco_produto_1, preco_produto_2, valor_final;

  cin >> codigo_produto_1 >> qtd_produtos_1 >> preco_produto_1;

  cin >> codigo_produto2 >> qtd_produtos_2 >> preco_produto_2;

  valor_final = (qtd_produtos_1 * preco_produto_1) + (qtd_produtos_2 * preco_produto_2);

  printf("VALOR A PAGAR: R$ %.2f\n", valor_final);
  
  return 0;
}
