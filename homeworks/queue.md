## Atividade: Fila usando lista encadeada
### Aluno: Matheus Rocha Monteiro
### Matrícula: 494577
### Curso: Engenharia de Computação 

Descrição: O objetivo desta atividade é implementar uma fila usando lista simplesmente encadeada em que as operações de IncluirFila e RemoverFila tenham custo O(1).

Para isso, observe que são necessárias variáveis adicionais ao que foi feito em sala de aula.

## Problemas

1 - Descreva as variáveis usadas por sua fila F e para cada nó x de F.

**Solução**

#### Para a fila F:

| Variável |                                    Descrição                                   |
|:--------:|:------------------------------------------------------------------------------:|
|     F    |                                     A fila                                     |
| front[F] |         Ponteiro para o 1º elemento de F, nulo caso a fila esteja vazia        |
|  back[F] | Ponteiro para o último elemento adicionado em F, nulo caso a fila esteja vazia |

#### Para cada nó de F:
| Variável |                                Descrição                                |
|:--------:|:-----------------------------------------------------------------------:|
|     chave[x]    |                       O valor guardado no elemento x                     |
|  next[x] | Ponteiro para o próximo elemento da fila F, nulo caso seja o último elemento |

2 - Escreva algoritmos para os seguintes problemas:

  **Problema**: FilaVazia(F)

  **Objetivo**: retorna um valor booleano (V ou F) indicando se a fila está vazia

  **Solução**:
  ```
  FilaVazia(F)
    se front[F] = NULO então
      retorna V
    retorna F

  ```

  **Problema**: IncluirFila(F, x)

  **Entrada**: fila F e nó x

  **Objetivo**: incluir x em F

  **Solução**:
  ```
  IncluirFila(F, x)
    se !FilaVazia(F) então
      next[back[F]] <- x
      back[F] <- x
    senão
      front[F] <- x
      back[F] <- x

  ```

  **Problema**: RemoverFila(F)

  **Entrada**: fila F
  
  **Objetivo**: remove e retorna o nó de F que foi incluído a mais tempo. Retorna erro de "fila vazia" caso não tenha elemento na fila para remover.

  **Solução**:
  ```
  RemoverFila(F)
    se FilaVazia(F) então
      erro "fila vazia"
    
    ans <- front[F]
    front[F] <- next[front[F]]

    retorna ans
  ```