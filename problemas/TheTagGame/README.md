# 1. Submissão

- [Link da submissão](https://codeforces.com/contest/813/submission/181847806)

![Submissão](./img/submissao.jpg)

# 2. Problem - C. The Tag Game

- [Link do problema](https://codeforces.com/problemset/problem/813/C)

Alice got tired of playing the tag game by the usual rules so she offered Bob a little modification to it. Now the game should be played on an undirected rooted tree of n vertices. Vertex 1 is the root of the tree.

Alice starts at vertex 1 and Bob starts at vertex x (x ≠ 1). The moves are made in turns, Bob goes first. In one move one can either stay at the current vertex or travel to the neighbouring one.

The game ends when Alice goes to the same vertex where Bob is standing. Alice wants to minimize the total number of moves and Bob wants to maximize it.

You should write a program which will determine how many moves will the game last.

## 2.1. Input

The first line contains two integer numbers n and x (2 ≤ n ≤ 2·105, 2 ≤ x ≤ n).

Each of the next n - 1 lines contains two integer numbers a and b (1 ≤ a, b ≤ n) — edges of the tree. It is guaranteed that the edges form a valid tree.

## 2.2. Output

Print the total number of moves Alice and Bob will make.

## 2.3. Examples

### Input

```
4 3
1 2
2 3
2 4
```

### Output

```
4
```

### Input

```
5 2
1 2
2 3
3 4
2 5
```

### Output

```
6
```

## 2.4. Note

In the first example the tree looks like this:

![Imagem 1](./img/eea44df3202ab8bed66be66908b08240870f70e3.png)


The red vertex is Alice's starting position, the blue one is Bob's. Bob will make the game run the longest by standing at the vertex 3 during all the game. So here are the moves:

- B: stay at vertex 3

- A: go to vertex 2

- B: stay at vertex 3

- A: go to vertex 3

In the second example the tree looks like this:

![Imagem 2](./img/a75c162001b6a7a7bc2ee6bc41a8f3bbf5f88b1a.png)

The moves in the optimal strategy are:

- B: go to vertex 3

- A: go to vertex 2

- B: go to vertex 4

- A: go to vertex 3

- B: stay at vertex 4

- A: go to vertex 4

# 3. Instalação 

- **Linguagem**: C++<br>

## 3.1. Requisito

- Compilador C++

## 3.2. Uso 

- Compile o código da solução do problema com o comando abaixo:
  
  ```
  $ g++ solution.cpp -o prog
  ```

- Por fim, execute a solução e teste os casos presentes na :

  ```
  $ ./prog
  ```