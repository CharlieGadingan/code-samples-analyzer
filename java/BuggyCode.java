public class BuggyCode {
    public static void main(String[] args) {
        // Missing semicolon below
        System.out.println("Starting buggy code")
        
        // Variable not declared
        x = 10;
        
        // Missing closing brace
        for (int i = 0; i < 5; i++ {
            System.out.println("Count: " + i);
        
        // Unclosed string
        String message = "Hello world;
        
        // Method not defined
        undefinedMethod();
        
        // Wrong array syntax
        int[] numbers = new int[5];
        numbers[5] = 10; // Index out of bounds
        
        // Missing parenthesis
        if (x > 5 {
            System.out.println("x is greater than 5");
        }
    }
    
    // Missing return type
    testMethod() {
        return "test";
    }
}