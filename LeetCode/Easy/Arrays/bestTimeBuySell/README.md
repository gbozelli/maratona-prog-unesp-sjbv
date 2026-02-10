# Best Time to Buy and Sell Stock (LeetCode 121)

Calcule o lucro máximo possível ao comprar e vender uma ação uma única vez, dado o histórico de preços ao longo dos dias.

---

## 📌 Problema

Você recebe um array `prices`, onde:

- `prices[i]` representa o preço da ação no dia `i`
- Você pode comprar uma vez e vender uma vez
- A compra deve acontecer antes da venda

Seu objetivo é retornar o maior lucro possível.  
Se não for possível obter lucro, retorne `0`.

---

## 📊 Exemplos

### Exemplo 1
Entrada
```
prices = [7,1,5,3,6,4]
```

Saída
```
5
```

Explicação  
Compra no dia em que o preço é `1` e vende quando o preço é `6`.  
Lucro = `6 - 1 = 5`.

---

### Exemplo 2
Entrada
```
prices = [7,6,4,3,1]
```

Saída
```
0
```

Explicação  
Os preços só caem, então não existe forma de obter lucro.

---

## 🧠 Ideia Intuitiva (para quem nunca viu algoritmos)

Pense assim:

- Você quer comprar o mais barato possível
- Depois disso, quer vender pelo maior preço possível
- Mas sempre respeitando a ordem dos dias

Então, enquanto percorremos os preços:
- Guardamos o menor preço visto até agora
- Em cada dia, verificamos:
  - *“Se eu tivesse comprado no menor preço e vendido hoje, quanto lucraria?”*

---

## 🧠 Abordagem Técnica — Uma passagem pelo array

A solução usa apenas uma varredura no array e duas variáveis:

- `min_price`: menor preço encontrado até o momento
- `max_profit`: maior lucro possível encontrado até agora

### O que acontece a cada passo?

1. Atualizamos o menor preço, se encontrarmos um valor menor
2. Caso contrário, calculamos o lucro vendendo no preço atual
3. Se esse lucro for maior que o lucro máximo atual, atualizamos

---

## 🪜 Passo a Passo

1. Inicialize:
   - `min_price` com um valor muito alto
   - `max_profit` com `0`
2. Percorra o array `prices`
3. Para cada preço:
   - Se for menor que `min_price`, atualize `min_price`
   - Caso contrário, calcule o lucro (`price - min_price`)
4. Atualize `max_profit` se o lucro atual for maior
5. Retorne `max_profit`

---

## ⏱️ Complexidade

- Tempo: `O(n)` — apenas uma passagem pelo array
- Espaço: `O(1)` — uso constante de memória

Essa é a solução mais eficiente possível para esse problema.

---

## 💡 Dicas e lembretes

- Nunca tentamos vender antes de comprar
- Não é necessário testar todas as combinações de dias
- Esse padrão aparece muito em problemas de arrays
- Excelente exemplo de algoritmo guloso (greedy)

---

## 🧩 Código (Python)

```
class Solution(object):
    def maxProfit(self, prices):
        min_price = float('inf')
        max_profit = 0
        
        for price in prices:
            if price < min_price:
                min_price = price
            elif price - min_price > max_profit:
                max_profit = price - min_price
                
        return max_profit
```

---

## ✅ Conclusão

Esse problema mostra como uma solução simples, bem pensada e
