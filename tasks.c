1.)By making the constructor private, you prevent other classes from directly instantiating objects of this class, 
 ensuring that the Singleton pattern is enforced.

public class Singleton {
    private static final Singleton instance = new Singleton();

    // Private constructor to prevent instantiation from outside
    private Singleton() {}

    // Public method to access the Singleton instance
    public static Singleton getInstance() {
        return instance;
    }
}
________________________________________________________________________________________________
Task 2 : 

it  requires return type or change it to void main.

Task 3 :
program :
class emp {
    private static int count = 0; // static variable to count the number of objects

    public emp() {
        count++; // increment count every time a new object is created
    }

    // static method to get the count of objects created
    public static int getCount() {
        return count;
    }
}
______________________________________________________
task 4:

public class Main {
    public static void main(String[] args) {
        // Creating 5 emp objects
        emp a = new emp();
        emp b = new emp();
        emp c = new emp();
        emp d = new emp();
        emp e = new emp();

        // Printing the count of objects created
        System.out.println("Number of emp objects created: " + emp.getCount());
    }
}
__________________________________________________________________________________________________________________
 Output :
Number of emp objects created: 5 
______________________________________
task 5:
__if a keep int nearby constr - what happens

	 //int Constr() {
		//if a keep int nearby constr we have to  add the 
		//return statement and it will be considered as method.