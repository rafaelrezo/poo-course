## Questão

Crie dois programas, um em **C++** e outro em **Python**, que:

1. Recebam, via argumentos de linha de comando (**argv**), uma lista de valores em ponto flutuante e um **valor de referência**.
2. Considerem que **o último argumento** é sempre o valor de referência, e todos os anteriores compõem a lista.
3. Calculem a **média** dos valores da lista.
4. Imprimam:
   - A média calculada
   - O valor de referência
   - Uma mensagem indicando se a média é **maior** ou **não maior** que o valor de referência.

### Exemplo de entrada e saída

**Execução em C++:**
```bash
g++ media.cpp -o media
./media 10.5 20 30 15.5
