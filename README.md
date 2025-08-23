# 🧮 Calcula-Tudo

Um projeto simples em C para centralizar e calcular diversas fórmulas matemáticas a partir de um menu interativo no terminal.

![Status](https://img.shields.io/badge/status-em%20desenvolvimento-yellow)

## 📝 Sobre o Projeto

A ideia do **Calcula-Tudo** é ser uma ferramenta de linha de comando versátil para estudantes, programadores e entusiastas de matemática. Em vez de criar um programa para cada cálculo, este projeto busca reunir várias operações matemáticas em um único lugar, com uma interface simples e direta.

## ✨ Funcionalidades Atuais

Atualmente, o programa é capaz de realizar as seguintes operações:

* **Conversor de Base:** Converte um número da base 10 para qualquer outra base (ex: binário, octal, hexadecimal).
* **Cálculo de Potenciação:** Calcula o resultado de um número base elevado a uma potência.

## 🚀 Como Usar

Para compilar e executar o projeto em sua máquina local, siga os passos abaixo.

### Pré-requisitos

Você vai precisar de um compilador C. O mais comum é o **GCC**, que pode ser instalado em sistemas Linux, macOS e Windows (via MinGW ou WSL).

### Compilação

1.  Clone este repositório ou salve o arquivo `.c` em seu computador.
2.  Abra o terminal na pasta onde o arquivo está localizado.
3.  Execute o seguinte comando para compilar o programa:

    ```bash
    gcc nome_do_arquivo.c -o calcula_tudo
    ```
    *Substitua `nome_do_arquivo.c` pelo nome real do seu arquivo.*

### Execução

1.  Após a compilação, um arquivo executável chamado `calcula_tudo` (ou `calcula_tudo.exe` no Windows) será criado.
2.  Execute-o com o comando:

    ```bash
    ./calcula_tudo
    ```
    *No Windows, o comando pode ser apenas `calcula_tudo.exe`.*

3.  O programa exibirá um menu de opções. Digite o número da operação desejada e pressione `Enter` para continuar.

## 🤝 Como Contribuir

Este projeto está no início e há muito espaço para melhorias e novas funcionalidades! Se você deseja contribuir, aqui estão algumas ideias:

#### 1. Adicionar Novas Fórmulas
Você pode adicionar novas funções de cálculo. Algumas sugestões:
-   Calculadora de Bhaskara
-   Cálculo de Fatorial
-   Sequência de Fibonacci
-   Cálculos de Área (círculo, triângulo, retângulo)
-   Conversor de Temperatura (Celsius, Fahrenheit, Kelvin)
-   Calculadora de Média, Mediana e Moda

#### 2. Melhorar Funções Existentes
-   **Potenciação:** A função `Potencia()` atual pode ser melhorada para aceitar expoentes negativos ou zero.
-   **Conversor de Base:** A função `Conversorbase10()` pode ter sua saída formatada para não exibir os zeros à direita do resultado. O nome também poderia ser alterado para `ConverterDaBase10` para ficar mais claro.

#### 3. Refatorar o Código
-   Melhorar a validação de entradas do usuário (ex: impedir que o divisor seja zero na conversão de base).
-   Organizar o código, talvez separando as funções em arquivos de cabeçalho (`.h`).

Se você tem uma ideia, sinta-se à vontade para dar um "fork" no projeto, criar sua funcionalidade em uma nova "branch" e abrir um "Pull Request"!

## 👤 Autor

**Paulo Vitor**
* [GitHub](https://github.com/Paulovitormr0) *(<- Coloquei o link do seu perfil que vi nos logs do Git!)*

## 📄 Licença

Este projeto pode ser distribuído sob a licença MIT. Veja o arquivo `LICENSE` para mais detalhes.