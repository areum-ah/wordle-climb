# wordle-climb
### A C++ Word Ladder Puzzle Game using Theory of Computation. 

### Deterministic Finite Automaton (DFA)

The DFA processes the player's input character by character and determines whether it belongs to the language of strings containing exactly four alphabetic characters.

### Validation Workflow

The game uses separate validation stages:

1. **DFA Validation:** Checks whether the input contains exactly four alphabetic characters.
2. **Answer Validation:** Compares the input against the correct answer for the clue.
3. **Word Ladder Validation:** Checks the one-letter relationship between consecutive puzzle words.

This separation demonstrates how automata-based string recognition can be incorporated into a practical application.

## Technology Stack

- **Language:** C++
- **Compiler:** Clang++ / G++
- **Development Environment:** Visual Studio Code
- **Version Control:** Git and GitHub
- **Core Concepts:** Functions, Structures, Strings, Loops, Conditional Logic and Finite Automata

## Getting Started

### Clone the Repository

```bash
git clone YOUR_GITHUB_REPOSITORY_URL
cd WordleClimb
```

### Prerequisites

- A C++ compiler (Clang++ or G++)
- Terminal or command-line interface
- Git (optional, for cloning the repository)

### Compile the Project

Using Clang++:

```bash
clang++ main.cpp Puzzle.cpp Ladder.cpp DFA.cpp -o wordleclimb
```

### Run the Game

```bash
./wordleclimb
```

## Project Structure

```text
WordleClimb/
│
├── main.cpp       # Main menu and game management
├── Puzzle.h       # Puzzle structure and declarations
├── Puzzle.cpp     # Clue display and answer validation
├── Ladder.h       # Word ladder function declarations
├── Ladder.cpp     # One-letter difference validation
├── DFA.h          # DFA function declarations
├── DFA.cpp        # DFA input validation and transitions
│
└── README.md      # Project documentation
```

## How to Play

1. Launch the executable.
2. Select **Start Game** from the main menu.
3. Read the displayed clue.
4. Enter a four-letter answer.
5. The DFA validates the input format.
6. The game checks the answer and awards points for correct responses.
7. Complete all five levels to finish the word ladder.

Incorrect answers can be attempted again. Attempts are tracked throughout the game.



