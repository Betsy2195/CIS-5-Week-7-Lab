# Lab 7 · Two arrays

**Week 07 · Arrays**  
**Theme:** One name, many values  
**Type:** Lesson week


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

The video should show both arrays, including the index, the element, the sum, and the high score.

**Your demo:** https://drive.google.com/file/d/1vnwsc7srTzJTUWTsFnpc_RSWr12uSi-d/view?usp=sharing 


## What to build

You will declare two homogeneous arrays of five `int` elements and traverse each array once by subscript.

- Declare `const int N = 5`, `int quiz[N] = { ... }`, and `int lab[N] = { ... }` with ten integers you choose.
- For each array, traverse with `for (int i = 0; i < N; ++i)`.
- Print a label, then the index and the element. `[0] 88` means index 0 stores 88.
- Keep a `sum` of the elements, not the indexes. After the loop, print `Sum:` and the total.
- Initialize `hi` to the first element. After the loop, print `High:` and the maximum.
- If every element is equal, the maximum is that element.
- `i <= N` is out of bounds. The last valid index is `N - 1`.

Your numbers and your labels can differ. Both arrays must print.

Example.

```
Quiz
[0] 88
[1] 92
[2] 70
[3] 95
[4] 81
Sum: 426
High: 95
Lab
[0] 70
[1] 70
[2] 70
[3] 70
[4] 70
Sum: 350
High: 70
```

## Starter

Use `main.cpp`. Put your name in the file-top comment. The starter is only `main`. You decide the variables.

## Environment

VS 2022 · **GitHub Codespaces** · Replit · library machines

## Scope fence

No `goto`. No `vector`. No function other than `main`.

## Definition of done

- Compiles with zero errors
- Two arrays of five `int` elements, each traversed once
- Each array prints its index and element, then `Sum:` and `High:`
- Repo + short demo + Canvas

## Rubric (100)

| Criterion | Pts |
|-----------|----:|
| Runs correctly on a supported path | 40 |
| Meets prompt requirements | 30 |
| Clear outcome messages | 15 |
| GitHub + short demo video | 15 |

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run. Show both arrays.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
