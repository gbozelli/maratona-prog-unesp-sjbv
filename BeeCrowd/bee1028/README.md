# Beecrowd 1022 — MDC (Máximo Divisor Comum)
## Editorial Técnico Completo

### Enunciado (resumo)
Dado um número **N** de casos de teste, para cada caso leia dois inteiros **F1** e **F2** e imprima o **MDC(F1, F2)**.

---

## Ideia Central
O problema é uma aplicação direta do **Algoritmo de Euclides**, baseado na propriedade:

> `mdc(a, b) = mdc(b, a % b)`

O algoritmo termina quando o resto da divisão é zero.

---

## Análise das Soluções

### Solução 1 — Euclides Iterativo com while
- Implementa manualmente o cálculo do resto
- Controle explícito das variáveis
- Boa para aprendizado

**Problemas:**
- Mais verbosa
- Menos clara que versões clássicas

---

### Solução 2 — Euclides Recursivo
- Implementação canônica
- Código curto e elegante

**Problemas:**
- Uso de pilha
- Não ideal para limites extremos

---

### Solução 3 — Euclides Iterativo Otimizado
- Evita recursão
- Usa apenas variáveis auxiliares
- Mais robusta

---

## Complexidade
- **Tempo:** `O(log(min(a,b)))`
- **Espaço:** `O(1)` (iterativo)

---

## Melhor Solução
✅ **Iterativa otimizada**, por ser segura, eficiente e padrão em competições.

---

## Conclusão
Problema clássico. Saber implementar o Algoritmo de Euclides é obrigatório em programação competitiva.
