#include <iostream>
#include <deque>
#include <random>
#include <thread>

// while (game_running){
//     leer_input()
//     actualizar_estado()
//     renderizar()
//     dormir_un_poco()
// }

std::deque<std::pair<int, int>> snake;

const int WIDTH = 20;
const int HEIGHT = 20;

enum Direction {UP, DOWN, LEFT, RIGHT};

/**
 * @brief Check if a coordinate is on the snake
 *
 * 
 * @param snake The snake.
 * @param x The x coordinate.
 * @param y The y coordinate.
 * @return true If the coordinate is on the snake.
 * @return false If the coordinate is not on the snake.
 */
bool is_on_snake(const std::deque<std::pair<int,int>>& snake, int x, int y){
    for (const auto& s: snake){
        if (s.first == x && s.second == y)
            return true;
    }
    return false;
}

/**
 * @brief Generate food
 *
 * 
 * @param snake The snake.
 * @return std::pair<int, int> The food.
 */
std::pair<int, int> generate_food(const std::deque<std::pair<int,int>>& snake){
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> x_dist(0, WIDTH-1);
    std::uniform_int_distribution<> y_dist(0, HEIGHT-1);

    int x, y;
    // Generate random coordinates until they are not on the snake
    do {
        x = x_dist(gen);
        y = y_dist(gen);
    } while (is_on_snake(snake, x, y));
    
    return {x, y};
}

/**
 * @brief Render the game
 *
 * 
 * @param snake The snake.
 * @param food The food.
 * @param score The score.
 */
void render(
    const std::deque<std::pair<int, int>>& snake, 
    const std::pair<int, int>& food, 
    int score
){
    // Given a pair of coordinates, print an "O"
    // If the pair is in the snake, print an "X"
    system("cls"); // Windows (Linux/Mac: "clear")

    for (int y=0; y < HEIGHT; y++){
        for (int x=0; x <WIDTH; x++){
            bool isSnake = false;

            // Si serpiente está en la comida
            if (x == food.first && y == food.second){
                std::cout << "X";
            } else if (is_on_snake(snake, x, y)){
                std::cout << "O";
            } else {
                std::cout << ".";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\nScore: " << score << "\n";
}



int main(){

    std::cout << "Welcome to Snake Game" << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "Grid Size: " << WIDTH << " x " << HEIGHT << std::endl;
    std::cout << "Snake Length: " << snake.size() << std::endl;

    // Create the initial snake (3 blocks)
    std::deque<std::pair<int, int>> snake = {{
        {5,5}, {5,6}, {5,7}
    }};

    // Create the direction
    Direction dir = RIGHT;
    bool running = true;
    int score = 0;

    // Create the food (random position)
    std::pair<int, int> food = generate_food(snake);

    while (running){
        // Input
    
        char input;
        std::cout << "Mover (WASD, Q para salir): ";
        std::cin >> input;

        if (input == 'q') break;
        if (input == 'W') dir = UP;
        if (input == 'S') dir = DOWN;
        if (input == 'A') dir = LEFT;
        if (input == 'D') dir = RIGHT;

        // Update
        auto new_head = snake.front();
        if (dir == UP) new_head.second --;
        if (dir == DOWN) new_head.second ++;
        if (dir == LEFT) new_head.first --;
        if (dir == RIGHT) new_head.first ++; 
        
        // Colision pared
        if (new_head.first < 0 || new_head.first >= WIDTH ||
            new_head.second < 0 || new_head.second >= HEIGHT){
                std::cout << "💥 Game Over (pared)\n" << std::endl;
                break;
            }
        
        // Colision consigo misma
        if (is_on_snake(snake, new_head.first, new_head.second)){
            std::cout << "💥 Game Over (snake)\n" << std::endl;
            break;
        }

        snake.push_front(new_head);

        // Comida
        if (new_head.first == food.first && new_head.second == food.second){
            score ++;
            food = generate_food(snake);
        } else {
            snake.pop_back();
        }

        // Render
        render(snake, food, score);

        // Time
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    return 0;
}

// snake es una cola (deque) por ejemplo [{5,5}, {5,6}, {5,7}] que sería la serpiente.
// Antes de mover extraigo la cabeza de la serpiente.
// Si me muevo hacia "arriba" aumento el valor de y en la cabeza de la serpiente.
// Si me muevo hacia "abajo" disminuyo el valor de y en la cabeza de la serpiente.
// Si me muevo hacia "izquierda" disminuyo el valor de x en la cabeza de la serpiente.
// Si me muevo hacia "derecha" aumento el valor de x en la cabeza de la serpiente.
// Luego inserto la cabeza nuevamente en la cola.
// De alguna manera lo que hago es modificar la cabeza de la serpiente y dejarla en frente (quitando el último elemento de la cola)
// Ejemplo: [{5,5}, {5,6}, {5,7}] -> (UP) -> [{5,6}, {5,5}, {5,6}] 

// v2
// Si snake toca la comida, entonces crece => no se hace pop_back() y se crea una nueva comida