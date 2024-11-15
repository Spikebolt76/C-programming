#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  // For _kbhit() and _getch() on Windows
#include <time.h>
#include <windows.h>  // For Sleep() on Windows

// Constants
#define WIDTH 20
#define HEIGHT 20
#define MAX_SNAKE_LENGTH 100
#define FOOD_LIFETIME 10  // Time in seconds that food is available

// Directions for the snake
enum Direction { UP, DOWN, LEFT, RIGHT };

// Global variables for the snake and the game
int snake_x[MAX_SNAKE_LENGTH], snake_y[MAX_SNAKE_LENGTH];  // Snake's body
int snake_length;  // Length of the snake
enum Direction dir;  // Current direction
int food_x, food_y;  // Position of food
int score;
int game_over;
time_t food_spawn_time;  // Time when food was spawnedwa

// Function to initialize the game
void init_game() {
    // Initialize snake in the center
    snake_x[0] = WIDTH / 2;
    snake_y[0] = HEIGHT / 2;
    snake_length = 1;
    dir = RIGHT;  // Start by moving right
    score = 0;
    game_over = 0;

    // Place the first food at a random location
    srand(time(0));  // Seed for random number generation
    food_x = rand() % WIDTH;
    food_y = rand() % HEIGHT;
    food_spawn_time = time(0);  // Record the time the food was spawned
}

// Function to draw the game board
void draw_board() {
    system("cls");  // Clear the console (use 'clear' for Linux)

    // Draw the top wall
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    // Draw the grid
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0) printf("#");  // Left wall

            // Check if the current position is the snake's head or body
            int is_snake = 0;
            for (int k = 0; k < snake_length; k++) {
                if (snake_x[k] == j && snake_y[k] == i) {
                    printf(k == 0 ? "O" : "o");  // Head (O), body (o)
                    is_snake = 1;
                    break;
                }
            }

            // Check if the current position is the food
            if (food_x == j && food_y == i) {
                printf("*");
                is_snake = 1;
            }

            if (!is_snake) printf(" ");  // Empty space

            if (j == WIDTH - 1) printf("#");  // Right wall
        }
        printf("\n");
    }

    // Draw the bottom wall
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    // Display score
    printf("Score: %d\n", score);
    // Display time left for the food
    printf("Food available for: %ld seconds\n", FOOD_LIFETIME - (time(0) - food_spawn_time));
}

// Function to handle input
void handle_input() {
    if (_kbhit()) {  // Check if a key is pressed
        switch (_getch()) {  // Get the pressed key
            case 'w':
                if (dir != DOWN) dir = UP;
                break;
            case 's':
                if (dir != UP) dir = DOWN;
                break;
            case 'a':
                if (dir != RIGHT) dir = LEFT;
                break;
            case 'd':
                if (dir != LEFT) dir = RIGHT;
                break;
        }
    }
}

// Function to update the game state
void update_game() {
    // Move the snake's body (shift each part to the position of the previous part)
    for (int i = snake_length - 1; i > 0; i--) {
        snake_x[i] = snake_x[i - 1];
        snake_y[i] = snake_y[i - 1];
    }

    // Move the head in the current direction
    switch (dir) {
        case UP: snake_y[0]--; break;
        case DOWN: snake_y[0]++; break;
        case LEFT: snake_x[0]--; break;
        case RIGHT: snake_x[0]++; break;
    }

    // Check if the snake hit the walls
    if (snake_x[0] < 0 || snake_x[0] >= WIDTH || snake_y[0] < 0 || snake_y[0] >= HEIGHT) {
        game_over = 1;
    }

    // Check if the snake hit itself
    for (int i = 1; i < snake_length; i++) {
        if (snake_x[0] == snake_x[i] && snake_y[0] == snake_y[i]) {
            game_over = 1;
        }
    }

    // Check if the snake ate the food
    if (snake_x[0] == food_x && snake_y[0] == food_y) {
        score += 10;
        snake_length++;

        // Generate new food at a random position
        food_x = rand() % WIDTH;
        food_y = rand() % HEIGHT;
        food_spawn_time = time(0);  // Reset the food spawn time
    }

    // Check if the food has disappeared
    if (time(0) - food_spawn_time >= FOOD_LIFETIME) {
        // Place new food at a random location and reset the spawn time
        food_x = rand() % WIDTH;
        food_y = rand() % HEIGHT;
        food_spawn_time = time(0);
    }
}

// Main function
int main() {
    init_game();  // Initialize the game

    while (!game_over) {
        draw_board();      // Draw the game board
        handle_input();    // Handle user input
        update_game();     // Update the game state
        Sleep(50);         // Shorten the delay for smoother gameplay (50 ms delay)
    }

    printf("\nGame Over! Final Score: %d\n", score);
    return 0;
}
