# Tic-Tac-Toe Game
# C Program for Two-Player Command-Line Tic-Tac-Toe 🎮

This project is a **two-player Tic-Tac-Toe game** implemented in C for the command line.  
It demonstrates the use of **2D arrays**, **game logic**, **loops**, and **user input handling**.

---

## 🧩 Table of Contents
- [Project Overview](#project-overview)
- [File Structure](#file-structure)
- [Gameplay Rules](#gameplay-rules)
- [Program Logic](#program-logic)
- [Functions Used](#functions-used)
- [How to Compile and Run](#how-to-compile-and-run)
- [Example Gameplay](#example-gameplay)
- [Concepts Used](#concepts-used)

---

## 🧠 Project Overview
The **Tic-Tac-Toe Game** allows **two players (X and O)** to take turns marking spaces on a **3×3 grid**.  
The first player to align three of their marks horizontally, vertically, or diagonally wins the game.  
If all cells are filled and no player has won, the game ends in a draw.

---

## 📁 File Structure
├── tic_tac_toe.c # Source code of the game  
└── README.md # Project documentation

---

## 🎮 Gameplay Rules
1. The board is a **3x3 grid**, represented using a 2D character array.
2. **Player X** starts first, followed by **Player O**.
3. Players enter the **row and column (0–2)** for their move.
4. If a position is already taken or invalid, the program prompts the player to try again.
5. The game ends when:
   - A player wins (three symbols in a line), or  
   - The board is full (draw).

---

## ⚙️ Program Logic
1. **Initialize the board** with empty spaces.
2. **Display the grid** after each move.
3. **Accept player input** for row and column.
4. **Validate the move** to prevent overwriting or invalid positions.
5. **Check for winning conditions** after every move.
6. **Detect draw** when the board is full.
7. **Alternate players (X ↔ O)** after each valid turn.

---

## 🧩 Functions Used

| Function | Description |
|-----------|--------------|
| `initBoard()` | Initializes all cells of the board to `' '` (empty). |
| `displayBoard()` | Displays the 3×3 grid with separators. |
| `checkWin()` | Checks rows, columns, and diagonals for three matching symbols. |
| `isFull()` | Checks if the board is completely filled (for draw detection). |

---

## 🧱 How to Compile and Run

### **Using GCC (Linux/macOS/WSL)**
```bash
gcc tic_tac_toe.c -o tic_tac_toe
./tic_tac_toe
```
Using Windows (MinGW or Code::Blocks Terminal)
```bash
gcc tic_tac_toe.c -o tic_tac_toe.exe
tic_tac_toe.exe
```

## Example Gameplay
🎮 TIC-TAC-TOE GAME 🎮
Player 1: X
Player 2: O

<pre>

   |   |     
---|---|---  
   |   |     
---|---|---  
   |   |     

Player X, enter row and column (0, 1, or 2): 0 0

 X |   |     
---|---|---  
   |   |     
---|---|---  
   |   |     

Player O, enter row and column (0, 1, or 2): 1 1

 X |   |     
---|---|---  
   | O |     
---|---|---  
   |   |     
</pre>

Player X, enter row and column (0, 1, or 2): 0 1  
Player O, enter row and column (0, 1, or 2): 2 2  
Player X, enter row and column (0, 1, or 2): 0 2  

🏆 Player X WINS!

## Concepts Used
| Concept                    | Description                                               |
| -------------------------- | --------------------------------------------------------- |
| **2D Arrays**              | Used to represent the 3x3 Tic-Tac-Toe board.              |
| **Nested Loops**           | For initializing and displaying the board.                |
| **Conditionals (if-else)** | To validate moves and check win conditions.               |
| **Game Loop**              | The main loop that keeps the game running until win/draw. |
| **Player Alternation**     | Switches between players 'X' and 'O' each turn.           |
