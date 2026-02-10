# Majority Element (LeetCode 169)

Encontre o elemento majoritário em um array.  
O elemento majoritário é aquele que aparece mais de ⌊n / 2⌋ vezes.

---

## 📌 Problema

Dado um array de inteiros `nums` de tamanho `n`, encontre o majority element.

### Garantias
- O elemento majoritário sempre existe
- O array não está vazio

---

## 📊 Exemplos

### Exemplo 1
Entrada
```
nums = [3,2,3]
```

Saída
```
3
```

---

### Exemplo 2
Entrada
```
nums = [2,2,1,1,1,2,2]
```

Saída
```
2
```

---

## 🧠 Abordagem — Algoritmo de Boyer-Moore (Votação)

Essa solução utiliza o Boyer-Moore Majority Vote Algorithm, que funciona com base em cancelamento de votos.

### Ideia principal

- Mantemos um `candidate` (candidato ao majority element)
- Mantemos um `count` (contador de votos)
- Percorremos o array:
  - Se `count == 0`, escolhemos um novo candidato
  - Se o número atual for igual ao candidato, incrementamos o contador
  - Caso contrário, decrementamos o contador
- No final, o candidato restante é o elemento majoritário

O motivo de funcionar é que o elemento majoritário aparece mais da metade das vezes, então ele não pode ser completamente cancelado pelos outros.

---

## 🪜 Passo a Passo

1. Inicialize `candidate = None` e `count = 0`
2. Percorra o array elemento por elemento
3. Se `count` for zero:
   - Atualize `candidate` para o elemento atual
4. Compare o elemento atual com o candidato:
   - Se forem iguais → `count += 1`
   - Se forem diferentes → `count -= 1`
5. Ao final do loop, retorne `candidate`

---

## ⏱️ Complexidade

- Tempo: `O(n)` — apenas uma passagem pelo array
- Espaço: `O(1)` — uso constante de memória

---

## 💡 Dicas e lembretes

- Esse algoritmo só funciona porque o majority element é garantido
- Pense em votos se cancelando par a par
- Muito comum em entrevistas técnicas
- Extremamente eficiente comparado a soluções com hash map

---

## 🧩 Código (Python)

```
class Solution(object):
    def majorityElement(self, nums):
        candidate = None
        count = 0
        
        for num in nums:
            if count == 0:
                candidate = num
            
            if num == candidate:
                count += 1
            else:
                count -= 1
                
        return candidate
```

---

## ✅ Conclusão

O algoritmo de Boyer-Moore é uma solução elegante e ótima para o problema do Majority Element, combinando simplicidade, eficiência e uso mínimo de memória.
