# Beecrowd 1025 — Onde Está o Mármore?
## Editorial Técnico Completo

### Enunciado (resumo)
Dados vários intervalos `[a, b]`, liste todos os valores, ordene-os e informe as posições onde um número **X** aparece.

---

## Ideia Central
O problema reduz-se a:
1. Expandir intervalos
2. Ordenar
3. Localizar primeira e última ocorrência

---

## Análise das Soluções

### Solução 1 — Vetor + sort + busca linear
- Simples
- Ineficiente para busca

---

### Solução 2 — `map`
- Evita vetor grande
- Controla posições acumuladas

---

### Solução 3 — Vetor + sort + busca binária
- Busca eficiente
- Controle preciso dos limites

---

## Complexidade
- **Tempo:** `O(N log N)`
- **Espaço:** `O(N)`

---

## Melhor Solução
✅ **Busca binária após ordenação**, padrão em problemas de busca.

---

## Conclusão
Esse problema testa domínio de **ordenção + busca binária**.
