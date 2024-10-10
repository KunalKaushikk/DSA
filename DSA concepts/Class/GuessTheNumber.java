import java.util.*;

class Game {
    private int numberToGuess;
    private int count = 0;
    
    Game(int upperBound) {
        Random rand = new Random();
        numberToGuess = rand.nextInt(upperBound) + 1;
        System.out.println("A number between 1 and " + upperBound + " has been chosen.");
    }

    public int takeUserInput(Scanner sc) {
        while (true) {
            System.out.print("Guess the number: ");
            int userGuess = sc.nextInt();
            count++;

            if (userGuess == numberToGuess) {
                System.out.println("Correct! You've guessed the number.");
                break;
            } else if (userGuess > numberToGuess) {
                System.out.println("Try a smaller number.");
            } else {
                System.out.println("Try a larger number.");
            }
        }
        return count;
    }
}

public class GuessTheNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the upper bound for the guessing range: ");
        int upperBound = sc.nextInt();

        Game game = new Game(upperBound);
        int attempts = game.takeUserInput(sc);

        System.out.println("Total attempts: " + attempts);
        sc.close();
    }
}
