Questão 8

  R:  p = mat + 1; é válida pois p é 1 ponteiro para inteiro que aponta para a primeira
      posição de mat e caminha uma posição à frente.
      p = mat++; e p = ++mat; são inválidas, pois mat não pode ser incrementada ou decrementada.
      x = (*mat)++; é válida, pois o operador ++ incrementa o conteúdo de mat.

