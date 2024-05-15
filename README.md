**Gerador de Sequência de Collatz em C++**

Este é um simples programa em C++ para gerar a sequência de Collatz para um número dado.

## O que é a sequência de Collatz?

A sequência de Collatz, também conhecida como o problema 3x + 1, é uma sequência de números definida da seguinte forma:

- Comece com qualquer número inteiro positivo.
- Se o número for par, divida-o por 2.
- Se o número for ímpar, multiplique-o por 3 e adicione 1.
- Repita esse processo com o novo número gerado, até que eventualmente chegue a 1.

## Como usar

1. Certifique-se de ter um compilador C++ instalado em seu sistema, como o g++.
2. Clone este repositório para o seu computador ou faça o download dos arquivos.
3. Abra um terminal ou prompt de comando e navegue até o diretório onde os arquivos estão localizados.
4. Compile o programa com o seguinte comando:

```bash
g++ collatz.cpp -o collatz
```

5. Execute o programa gerado:

```bash
./collatz
```

6. O programa solicitará que você insira um número inteiro positivo.
7. Após inserir o número, o programa irá gerar a sequência de Collatz para esse número e exibi-la no terminal.

## Exemplo

```
Digite um numero inteiro positivo maior que 1: 3
3 10 5 16 8 4 2 1 
```
