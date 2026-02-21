# Length of Last Word (LeetCode 58)

Este problema é um clássico de **manipulação de strings** e aparece com frequência em:
- entrevistas técnicas  
- maratonas de programação  
- listas de exercícios introdutórios de algoritmos  

Apesar de parecer simples à primeira vista, ele exige bastante atenção a **casos de borda (edge cases)**, como:
- espaços no final da string  
- múltiplos espaços entre palavras  
- strings com apenas uma palavra  
- strings compostas somente por espaços  

Dominar esse tipo de problema ajuda muito a evitar erros bobos em competições.

---

## 📌 Problema

Dada uma string `s` que contém palavras e espaços, retorne o comprimento da **última palavra** da string.

Uma palavra é definida como uma sequência contínua de caracteres diferentes de `" "` (espaço).

---

## 📋 Regras importantes

- Pode haver:
  - espaços no início da string  
  - espaços no final da string  
  - vários espaços entre palavras  
- A string pode conter apenas uma palavra  
- A string pode conter apenas espaços e uma palavra no meio  

---

## 📊 Exemplos

### Exemplo 1

Entrada

jooj
s = "Hello World"
jooj

Saída

jooj
5
jooj

---

### Exemplo 2

Entrada

jooj
s = "   fly me   to   the moon  "
jooj

Saída

jooj
4
jooj

---

### Exemplo 3

Entrada

jooj
s = "a"
jooj

Saída

jooj
1
jooj

---

### Exemplo 4 (caso de borda importante)

Entrada

jooj
s = "    hello     "
jooj

Saída

jooj
5
jooj

---

## ❌ Abordagens ingênuas (e por que evitá-las em maratona)

Uma solução comum é usar funções prontas da linguagem, por exemplo:

- quebrar a string em palavras
- pegar a última palavra
- retornar o tamanho dela

Embora isso funcione, essa abordagem:

- cria estruturas auxiliares (listas)
- usa mais memória do que o necessário
- pode ser menos eficiente em entradas muito grandes

Em maratonas e entrevistas, muitas vezes é esperado que você resolva o problema usando:

- apenas variáveis auxiliares  
- uma única passagem pela string  
- sem criar listas extras  

---

## 🧠 Abordagem Principal — Varredura da direita para a esquerda

A ideia central é percorrer a string **do final para o começo**, porque:

- a última palavra está no final  
- pode haver espaços sobrando depois da última palavra  
- é fácil ignorar esses espaços andando para a esquerda  

Essa abordagem pode ser dividida em **duas fases**:

### Fase 1 — Ignorar espaços no final

- Comece com um índice `i` no último caractere da string  
- Enquanto `s[i]` for espaço `" "`, continue andando para a esquerda  
- Ao final dessa fase, `i` estará apontando para o **último caractere da última palavra**

### Fase 2 — Contar os caracteres da última palavra

- A partir desse ponto, conte quantos caracteres consecutivos são diferentes de `" "`  
- Pare quando:
  - encontrar um espaço, ou  
  - chegar ao início da string  

O número contado é exatamente o comprimento da última palavra.

---

## 🪜 Passo a Passo Detalhado

1. Crie uma variável `i` que começa em `len(s) - 1`  
2. Ignore todos os espaços no final da string  
3. Inicialize um contador `length = 0`  
4. Enquanto `i >= 0` e `s[i] != " "`:
   - incremente `length`  
   - decremente `i`  
5. Retorne `length`  

---

## 🧪 Análise de Casos de Borda

| Entrada                  | O que acontece                              |
|--------------------------|---------------------------------------------|
| `"Hello"`               | Conta todos os caracteres                  |
| `"Hello   "`            | Ignora os espaços finais                   |
| `"   Hello"`            | Encontra corretamente a última palavra     |
| `"   Hello   World   "` | Ignora espaços finais e conta `World`      |
| `"a"`                   | Conta 1                                    |

Esses casos quebram muitas soluções mal implementadas.

---

## ⏱️ Complexidade

### Tempo

- **O(n)**  
No pior caso, percorremos toda a string uma única vez.

### Espaço

- **O(1)**  
Usamos apenas:
- um índice  
- um contador  

Não criamos listas, vetores ou strings auxiliares.

---

## 🧩 Código (Python)

jooj
class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """

        i = len(s) - 1
        length = 0

        # Fase 1: ignorar espaços no final da string
        while i >= 0 and s[i] == " ":
            i -= 1

        # Fase 2: contar os caracteres da última palavra
        while i >= 0 and s[i] != " ":
            length += 1
            i -= 1

        return length
jooj

---

## 🧠 Por que essa solução é boa para maratona?

- Não usa funções prontas caras  
- Não cria estruturas auxiliares  
- Funciona em tempo linear  
- É robusta contra casos de borda  
- A lógica é simples de adaptar para outros problemas parecidos  

---

## 🧠 Exercícios para treinar

1. Modifique a solução para retornar a **última palavra em si**, não apenas o tamanho.  
2. Resolva o mesmo problema sem usar `while`.  
3. Faça uma versão que percorra da esquerda para a direita e compare com essa abordagem.  

---

## ✅ Conclusão

Esse problema ensina conceitos fundamentais para programação competitiva:

- manipulação manual de strings  
- controle de índices  
- tratamento de casos de borda  
- escrita de código eficiente em tempo e memória  

Apesar de simples, é exatamente o tipo de exercício que separa uma solução correta de uma solução que quebra em testes ocultos.