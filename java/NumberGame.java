Sure, here's a simple number guessing game implemented in Java that you can run in Visual Studio Code:

```java
import java.util.Scanner;
import java.util.Random;

public class NumberGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        
        int maxNumber = 100; // You can change this to set the range of numbers
        int secretNumber = random.nextInt(maxNumber) + 1;
        int guess;
        int attempts = 0;
        
        System.out.println("Welcome to the Number Guessing Game!");
        System.out.println("I've selected a number between 1 and " + maxNumber + ". Try to guess it!");
        
        do {
            System.out.print("Enter your guess: ");
            guess = scanner.nextInt();
            attempts++;
            
            if (guess < secretNumber) {
                System.out.println("Too low! Try again.");
            } else if (guess > secretNumber) {
                System.out.println("Too high! Try again.");
            }
        } while (guess != secretNumber);
        
        System.out.println("Congratulations! You've guessed the number " + secretNumber + " in " + attempts + " attempts.");
        
        scanner.close();
    }
}
```

To run this code in Visual Studio Code:

1. Open Visual Studio Code.
2. Create a new Java file and paste the code into it, for example, `NumberGame.java`.
3. Save the file.
4. Open a terminal in Visual Studio Code (Terminal > New Terminal).
5. Navigate to the directory where you saved your Java file using the `cd` command.
6. Compile the Java file using `javac NumberGame.java`.
7. Run the compiled program using `java NumberGame`.

Now you should be able to play the number guessing game in your terminal within Visual Studio Code.