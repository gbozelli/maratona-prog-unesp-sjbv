# Beecrowd 1171 — Frequência de Números
## Editorial Técnico Completo

### Enunciado (resumo)
Dado um inteiro **N**, leia **N números** e informe quantas vezes cada número aparece, **em ordem crescente**.

---

## Ideia Central
O problema exige:
1. Contar frequências
2. Imprimir ordenado

---

## Análise das Soluções

### Solução 1 — Array + Merge Sort
- Conta manualmente
- Implementa ordenação própria

**Problemas:**
- Código longo
- Maior chance de erro
- Reinventa a roda

---

### Solução 2 — `map<int,int>`
- Estrutura já ordenada
- Contagem automática
- Código simples

---

## Complexidade
- **Tempo:** `O(N log N)`
- **Espaço:** `O(N)`

---

## Melhor Solução
✅ **Uso de `map`**, pela clareza, segurança e aderência à STL.

---

## Conclusão
Sempre que precisar contar e manter ordenação, `map` é a escolha natural.
