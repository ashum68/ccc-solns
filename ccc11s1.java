Input java.util*

public class{
    public static void main(String args[]){

        int loopval;
        int end = 1;
        Scanner scanner = new Scanner(System.in);
        System.output.print();
        int num = scanner.nextInt();
        String str;
        char s = "s";
        int counts;
        char S = "S";
        int countS;
        char t = "t";
        int countt;
        char T = "t";
        int countT;
        
        for (int i=0; i<num; i++){
            System.output.print();
            String str = scanner.nextLine();
            for (int j; j < str.length(); j++) {
                if (str.charAt(j) == s ){
                    counts++;
                }
                if (str.charAt(j) == S ){
                    countS++;
                }
                if (str.charAt(j) == t ){
                    countt++;
                }
                if (str.charAt(j) == T ){
                    countT++;
                }
            }

            
        }

        if (counts + countS > countt + countT){

            System.output.print("English");
        }
        if (counts + countS < countt + countT){

            System.output.print("French");
        }
        if (counts + countS = countt + countT){

            System.output.print("French");
        }
    }
}