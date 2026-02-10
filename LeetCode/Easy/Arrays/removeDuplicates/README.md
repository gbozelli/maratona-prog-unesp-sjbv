# Remove Duplicates from Sorted Array

Este projeto resolve o problema clássico de remover elementos duplicados de um array **ordenado**, modificando-o *in-place* e retornando o novo comprimento do array sem duplicatas.

---

## 📌 Problema

Dado um array ordenado `nums`, remova os elementos duplicados de forma que cada valor apareça apenas **uma vez**.

### Requisitos
- O array já está ordenado
- A modificação deve ser feita *in-place*
- Uso de memória extra deve ser **O(1)**

---

## 📊 Exemplos

### Exemplo 1
**Entrada**
```
[1, 1, 2]
```

**Saída**
```
Comprimento: 2
Array modificado (prefixo): [1, 2]
```

### Exemplo 2
**Entrada**
```
[0,0,1,1,1,2,2,3,3,4]
```

**Saída**
```
Comprimento: 5
Array modificado (prefixo): [0,1,2,3,4]
```

---

## 🧠 Abordagem (Dois Ponteiros)

A solução utiliza a técnica de **dois ponteiros**:

- O ponteiro `i` mantém a posição do último elemento **único**
- O ponteiro `j` percorre o array
- Sempre que `nums[j]` for diferente de `nums[i]`, avançamos `i` e copiamos o valor

---

## 🪜 Passo a Passo

1. Inicialize `i = 0`
2. Percorra o array com `j` a partir da posição `1`
3. Quando encontrar um valor diferente:
   - Incrementar `i`
   - Copiar `nums[j]` para `nums[i]`
4. Retornar `i + 1` como o novo comprimento

---

## ⏱️ Complexidade

- **Tempo:** `O(n)` — apenas uma passagem pelo array
- **Espaço:** `O(1)` — modificação feita diretamente no array original

---

## 💡 Observações

- O array após a execução contém os valores corretos **apenas até o índice retornado**
- Os valores após esse índice não são relevantes
- Ideal para entrevistas técnicas e problemas de arrays ordenados

---

## 🧩 Pseudocódigo

```
if nums está vazio
    return 0

i = 0
para j de 1 até o final do array
    se nums[j] != nums[i]
        i = i + 1
        nums[i] = nums[j]

return i + 1
```

---

## ✅ Conclusão

Essa abordagem é simples, eficiente e explora diretamente a propriedade do array estar ordenado, tornando-se a solução ideal para o problema.
