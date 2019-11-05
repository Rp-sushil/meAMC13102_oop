import java.util.Scanner;

class Main{
    public static void main(String[] args){
        float p = (float)2.0;
        int q = 0;
        char c1 = 'H';
        char c2 = 'r';
        char c3 = 'W';
        char c4 = 'd';
        int r = 3;
        int t = 1;
        String s = new String();
        s = "" + c1 + r + t +t +q + " " + c3+ q + c2 + t + c4 +" "+ p + " true";
        System.out.println(s);
        Scanner in = new Scanner(System.in);
        System.out.println("Aritmetic Operation:");
        System.out.print("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Remainder\n");
        System.out.print("Enter option: ");
        int option = in.nextInt();
        System.out.println("Enter Integers: ");
        int a = in.nextInt();
        int b = in.nextInt();
        int  z = 0;
        switch(option){
            case 1:
                z = a + b;break;
            case 2:
                z = a - b;break;
            case 3:
                z = a * b;break;
            case 4:
                z = a / b;break;
            case 5:
                z = a % b;break;
            default:
                System.out.println("Exit Sccessfully");
                System.exit(0);
        }
        System.out.println("Answer: ");
        System.out.println(z);
    }
    
}
