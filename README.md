# 🃏 Super Trunfo - Países (Nível Mestre)

Bem-vindo ao projeto **Super Trunfo**, desenvolvido como parte do desafio de lógica de programação em C. O objetivo deste sistema é cadastrar cartas de cidades/países e permitir uma comparação avançada entre elas.

## 🚀 Funcionalidades (Nível Mestre)

Nesta versão final, o sistema atingiu o nível máximo de complexidade exigido:

- **Cadastro de Cartas**: Entrada de dados como Estado, Código, Nome da Cidade, População, Área, PIB e Pontos Turísticos.
- **Cálculos Automáticos**: O sistema gera automaticamente a **Densidade Demográfica** e o **PIB per Capita**.
- **Atributos Múltiplos**: O jogador agora escolhe **dois atributos** diferentes para a batalha.
- **Menu Dinâmico**: Ao escolher o primeiro atributo, o sistema remove essa opção do segundo menu, garantindo que não haja duplicidade.
- **Lógica de Vitória**:
    - Soma dos valores dos dois atributos escolhidos.
    - Comparação final usando **Operador Ternário** para maior eficiência do código.
    - Tratamento de empates.

## 🛠️ Tecnologias Utilizadas

- **Linguagem C** (Padrão ISO C99)
- **Git & GitHub** (Controle de versionamento)
- **GitHub Codespaces** (Ambiente de desenvolvimento)

## 🎮 Como Jogar

1. **Cadastre a Carta 1**: Insira os dados solicitados no terminal.
2. **Cadastre a Carta 2**: Insira os dados da segunda cidade.
3. **Escolha os Atributos**:
    - Selecione o primeiro atributo para o duelo (Ex: População).
    - Selecione o segundo atributo (Ex: PIB).
4. **Resultado**: O programa somará os valores e anunciará o vencedor com base no "Super Poder" da combinação escolhida.

## 📝 Exemplo de Código (Lógica de Comparação)

O projeto utiliza a estrutura `switch-case` para menus e o operador ternário para a decisão final:
```c
(somaC1 > somaC2) ? printf("Vencedor: %s\n", nomeDaCidade1) : 
(somaC2 > somaC1) ? printf("Vencedor: %s\n", nomeDaCidade2) : 
                    printf("Empate!\n");
